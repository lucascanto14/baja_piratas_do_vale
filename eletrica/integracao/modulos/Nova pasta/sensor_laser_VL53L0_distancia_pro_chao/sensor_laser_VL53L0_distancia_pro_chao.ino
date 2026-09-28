#include "Adafruit_VL53L0X.h"
#include <vector> // Inclui suporte para listas dinâmicas

Adafruit_VL53L0X lox = Adafruit_VL53L0X();

// Configuração do Botão
const int PINO_BOTAO = 18;
bool medindo = false;
bool estadoBotaoAnterior = HIGH;
unsigned long ultimoDebounceTime = 0;
const unsigned long debounceDelay = 50;

// ESTRUTURA DE LISTAS:
std::vector<uint16_t> sessaoAtual;                  // Lista simples para a medição atual
std::vector<std::vector<uint16_t>> historicoSessoes; // Lista de listas com todas as medições

void setup() {
  Serial.begin(115200);
  pinMode(PINO_BOTAO, INPUT_PULLUP);

  while (!Serial) {
    delay(1);
  }
  
  Serial.println("Adafruit VL53L0X test");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while(1);
  }
  
  lox.setMeasurementTimingBudgetMicroSeconds(200000);
  
  Serial.println(F("VL53L0X API Simple Ranging example\n")); 
  Serial.println(">>> Pressione o botao para INICIAR / PAUSAR as meidcoes <<<\n");
}

void loop() {
  // --- LÓGICA DO BOTÃO (LIGA / PAUSA) ---
  int leituraBotao = digitalRead(PINO_BOTAO);

  if (leituraBotao != estadoBotaoAnterior) {
    ultimoDebounceTime = millis();
  }

  if ((millis() - ultimoDebounceTime) > debounceDelay) {
    static bool ultimoEstadoEstavel = HIGH;
    if (leituraBotao == LOW && ultimoEstadoEstavel == HIGH) {
      medindo = !medindo; // Inverte o estado (Iniciar/Pausar)
      
      if (medindo) {
        // INÍCIO DA MEDIÇÃO: Limpa a sublista para receber novos dados
        sessaoAtual.clear();
        Serial.println("\n----------------------------------");
        Serial.print("--- SESSAO ");
        Serial.print(historicoSessoes.size() + 1);
        Serial.println(" INICIADA ---");
      } else {
        // PAUSA DA MEDIÇÃO: Salva a lista atual na lista principal
        if (!sessaoAtual.empty()) {
          historicoSessoes.push_back(sessaoAtual);
        }
        
        Serial.println("--- SESSAO PAUSADA E SALVA ---");
        
        // Imprime o resumo da lista de listas acumulada
        imprimirHistoricoCompleto();
      }
    }
    ultimoEstadoEstavel = leituraBotao;
  }
  estadoBotaoAnterior = leituraBotao;

  // --- LÓGICA DE MEDIÇÃO ---
  if (medindo) {
    VL53L0X_RangingMeasurementData_t measure;
    lox.rangingTest(&measure, false);

    if (measure.RangeStatus != 4) { 
      uint16_t distancia = measure.RangeMilliMeter;
      
      // Adiciona o valor lido na lista da sessão atual
      sessaoAtual.push_back(distancia);

      Serial.print("Distancia (mm): "); 
      Serial.print(distancia);
      Serial.print(" | [Lidos nesta sessao: ");
      Serial.print(sessaoAtual.size());
      Serial.println("]");
    } else {
      Serial.println(" Out of range ");
    }
      
    delay(100);
  }
}

// Função para exibir toda a estrutura "Lista de Listas" no Terminal Serial
void imprimirHistoricoCompleto() {
  Serial.println("\n===== HISTORICO COMPLETO DE MEDICOES =====");
  Serial.print("Total de sessoes registradas: ");
  Serial.println(historicoSessoes.size());

  for (size_t i = 0; i < historicoSessoes.size(); i++) {
    Serial.print("Sessao ");
    Serial.print(i + 1);
    Serial.print(" [");
    Serial.print(historicoSessoes[i].size());
    Serial.print(" medicoes]: { ");

    for (size_t j = 0; j < historicoSessoes[i].size(); j++) {
      Serial.print(historicoSessoes[i][j]);
      if (j < historicoSessoes[i].size() - 1) {
        Serial.print(", ");
      }
    }
    Serial.println(" }");
  }
  Serial.println("===========================================\n");
}
