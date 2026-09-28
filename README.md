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
baja-telemetry-electronics/
│
├── docs/                             # Documentação técnica, manuais, pinout e banner
│   ├── banner_piratas_do_vale.png    # Imagem de capa do repositório
│   ├── pinout_placa_principal.md
│   └── manual_sensores.md
│
├── hardware/                         # Esquemáticos, PCBs e CAD elétrico
│   ├── schematics/                   # Esquemáticos dos circuitos
│   └── datasheets/                   # Datasheets de componentes e sensores
│
├── embedded/                         # Códigos dos microcontroladores
│   ├── core/                         # Código principal da ECU / Unidade Central
│   └── modules_test/                 # Códigos de teste e calibração de sensores
│
├── data_analysis/                    # Análise de dados pós-corrida / pós-treino
│   ├── notebooks/                    # Scripts Python/MATLAB e Jupyter Notebooks
│   ├── raw_data/                     # Logs brutos salvos no Cartão SD / Telemetria
│   └── processed_data/               # Dados filtrados e processados
│
└── interface/                        # Interfaces visuais / Dashboards
    ├── dashboard_embarcado/          # Display do piloto
    └── telemetria_pit/               # Software do box / telemetria via rádio
