<div align="center">

  <!-- BANNER DA EQUIPE -->
  <img src="C:\Users\danie\OneDrive-Unesp\FEG\Baja\Banner_Github_Baja.jpeg" alt="Banner Piratas do Vale" width="100%">

  # 🏴‍☠️ Piratas do Vale — Eletrônica & Telemetria

  **Equipe Baja SAE da FEG UNESP (Faculdade de Engenharia de Guaratinguetá)**

  [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
  [![Instagram](https://img.shields.io/badge/Instagram-E4405F?style=flat&logo=instagram&logoColor=white)](https://instagram.com/piratasdovale)
  [![YouTube](https://img.shields.io/badge/YouTube-FF0000?style=flat&logo=youtube&logoColor=white)](https://youtube.com)
  [![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=flat&logo=linkedin&logoColor=white)](https://linkedin.com)

</div>

---

##  Sobre o Projeto

Este repositório centraliza o desenvolvimento dos sistemas **eletrônicos, embarcados, telemetria e análise de dados** do protótipo Baja SAE da equipe **Piratas do Vale**. 

O objetivo principal é realizar a aquisição de dados em tempo real, monitoramento de sensores do veículo e processamento de dados de desempenho para auxílio no acerto de engenharia e estratégias de prova.

---

##  Estrutura do Repositório

```text
baja_piratas_do_vale/
│
├── docs/                             # Documentação técnica, manuais, pinout e banner
│   ├── Banner_Github_Baja.jpg        # Imagem de capa do repositório
│   ├── pinout_placa_principal.md     # Mapeamento de pinos dos microcontroladores
│   └── manual_sensores.md            # Especificações de calibração dos sensores
│
├── hardware/                         # Esquemáticos, PCBs e CAD elétrico
│   ├── schematics/                   # Esquemáticos dos circuitos
│   └── datasheets/                   # Datasheets de componentes e sensores
│
├── embedded/                         # Códigos dos microcontroladores
│   ├── core/                         # Firmware principal da ECU / Unidade Central
│   └── modules_test/                 # Códigos isolados para teste e calibração de sensores
│
├── data_analysis/                    # Análise de dados pós-corrida e pós-treino
│   ├── notebooks/                    # Jupyter Notebooks ou scripts Python/MATLAB
│   ├── raw_data/                     # Logs brutos salvos no SD / Telemetria (.csv)
│   └── processed_data/               # Dados filtrados e processados
│
└── interface/                        # Interfaces visuais e Dashboards
    ├── dashboard_embarcado/          # Display do piloto
    └── telemetria_pit/               # Software do box / telemetria via rádio
