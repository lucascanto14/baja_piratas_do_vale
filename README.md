<div align="center">

  <!-- BANNER DA EQUIPE -->
  <img src="docs/banner_piratas_do_vale.png" alt="Banner Piratas do Vale" width="100%">

  # 🏴‍☠️ Piratas do Vale — Eletrônica & Telemetria

  **Equipe Baja SAE da FEG UNESP (Faculdade de Engenharia de Guaratinguetá)**

  [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
  [![Instagram](https://img.shields.io/badge/Instagram-E4405F?style=flat&logo=instagram&logoColor=white)](https://instagram.com/piratasdovale)
  [![YouTube](https://img.shields.io/badge/YouTube-FF0000?style=flat&logo=youtube&logoColor=white)](https://youtube.com)
  [![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=flat&logo=linkedin&logoColor=white)](https://linkedin.com)

</div>

---

## 📌 Sobre o Projeto

Este repositório centraliza o desenvolvimento dos sistemas **eletrônicos, embarcados, telemetria e análise de dados** do protótipo Baja SAE da equipe **Piratas do Vale**. 

O objetivo principal é realizar a aquisição de dados em tempo real, monitoramento de sensores do veículo e processamento de dados de desempenho para auxílio no acerto de engenharia e estratégias de prova.

---

## 📂 Estrutura do Repositório

```text
baja_piratas_do_vale/
│
├── docs/                             # Documentação técnica, manuais, pinout e banner
│   ├── banner_piratas_do_vale.png    # Imagem de capa do repositório
│   ├── pinout_placa_principal.md     # Mapeamento de pinos dos microcontroladores
│   └── manual_sensores.md            # Especificações de calibração dos sensores
│
├── hardware/                         # Esquemáticos, PCBs e CAD elétrico[cite: 1]
│   ├── schematics/                   # Esquemáticos dos circuitos[cite: 1]
│   └── datasheets/                   # Datasheets de componentes e sensores[cite: 1]
│
├── embedded/                         # Códigos dos microcontroladores[cite: 1]
│   ├── core/                         # Firmware principal da ECU / Unidade Central[cite: 1]
│   └── modules_test/                 # Códigos isolados para teste e calibração de sensores[cite: 1]
│
├── data_analysis/                    # Análise de dados pós-corrida e pós-treino[cite: 1]
│   ├── notebooks/                    # Jupyter Notebooks ou scripts Python/MATLAB[cite: 1]
│   ├── raw_data/                     # Logs brutos salvos no SD / Telemetria (.csv)[cite: 1]
│   └── processed_data/               # Dados filtrados e processados[cite: 1]
│
└── interface/                        # Interfaces visuais e Dashboards[cite: 1]
    ├── dashboard_embarcado/          # Display do piloto[cite: 1]
    └── telemetria_pit/               # Software do box / telemetria via rádio[cite: 1]
