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
│   ├── raw_data/                     # Logs brutos salvos no SD / Telemetria (.csv)[cite: 1]
│   └── processed_data/               # Dados filtrados e processados[cite: 1]
│
└── interface/                        # Interfaces visuais e Dashboards[cite: 1]
    ├── dashboard_embarcado/          # Display do piloto[cite: 1]
    └── telemetria_pit/               # Software do box / telemetria via rádio[cite: 1]
