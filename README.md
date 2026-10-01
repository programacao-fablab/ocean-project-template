<!--
╔══════════════════════════════════════════════════════════════════════════╗
║  COMO PREENCHER ESTE README  (apague este bloco quando terminar)         ║
╠══════════════════════════════════════════════════════════════════════════╣
║ 1. Tudo que está entre colchetes, como [NOME DO PROJETO], é placeholder. ║
║    Substitua pelo valor real e REMOVA os colchetes.                      ║
║ 2. Comentários como este (<!- - ... - ->) não aparecem no GitHub.        ║
║    Eles são instruções para você. A                    ║
║ 3. Seção que não se aplica ao seu projeto? Apague a seção inteira.       ║
║    Ex.: projeto só de software → apague "Firmware" e "Hardware".         ║
║ 4. Para achar o que falta preencher, busque no VS Code (Ctrl+Shift+F)    ║
║    com regex ativado:   \[[A-ZÇÃÕÁÉÍÓÚ0-9_ /]+\]                           ║
║ 5. Nunca escreva senha, token ou chave real neste arquivo.               ║
╚══════════════════════════════════════════════════════════════════════════╝
-->

<div align="center">

<!-- Opcional: logo em docs/img/logo.png (máx. 200 px de largura) -->
<img src="docs/img/logo.png" alt="Logo do [NOME DO PROJETO]" width="160">

# [NOME DO PROJETO]

<!--
  BADGES — escolha as que se aplicam e apague as outras.
  Status: troque a parte "em%20desenvolvimento-yellow" por uma destas:
    planejamento-lightgrey | em%20desenvolvimento-yellow | prot%C3%B3tipo-orange
    est%C3%A1vel-brightgreen | pausado-red | arquivado-inactive
  Para criar uma badge nova: https://shields.io/badges  (espaço = %20)
  Logos disponíveis: https://simpleicons.org (use o nome em minúsculas)
-->
![Status](https://img.shields.io/badge/status-em%20desenvolvimento-yellow)
![Licença](https://img.shields.io/badge/licen%C3%A7a-[LICENCA]-blue)
![Último commit](https://img.shields.io/github/last-commit/[USUARIO_OU_ORG]/[NOME_DO_REPOSITORIO])
![Versão](https://img.shields.io/github/v/tag/[USUARIO_OU_ORG]/[NOME_DO_REPOSITORIO]?label=vers%C3%A3o)

<!-- Stack de firmware -->
![ESP32](https://img.shields.io/badge/ESP32-Espressif-E7352C?logo=espressif&logoColor=white)
![PlatformIO](https://img.shields.io/badge/PlatformIO-F5822A?logo=platformio&logoColor=white)
![Arduino](https://img.shields.io/badge/Arduino-00878F?logo=arduino&logoColor=white)
![RP2040](https://img.shields.io/badge/RP2040-A22846?logo=raspberrypi&logoColor=white)
![STM32](https://img.shields.io/badge/STM32-03234B?logo=stmicroelectronics&logoColor=white)

<!-- Stack de software -->
![React](https://img.shields.io/badge/React-20232A?logo=react&logoColor=61DAFB)
![TypeScript](https://img.shields.io/badge/TypeScript-3178C6?logo=typescript&logoColor=white)
![Node.js](https://img.shields.io/badge/Node.js-339933?logo=nodedotjs&logoColor=white)
![Python](https://img.shields.io/badge/Python-3776AB?logo=python&logoColor=white)
![Supabase](https://img.shields.io/badge/Supabase-3FCF8E?logo=supabase&logoColor=white)
![MQTT](https://img.shields.io/badge/MQTT-660066?logo=mqtt&logoColor=white)

Desenvolvido no **Samsung Ocean Manaus** · Universidade do Estado do Amazonas (UEA)

</div>

---

## Sumário

1. [Visão geral](#1-visão-geral)
2. [Responsáveis e autores](#2-responsáveis-e-autores)
3. [Estrutura do repositório](#3-estrutura-do-repositório)
4. [Guia rápido de instalação e execução](#4-guia-rápido-de-instalação-e-execução)
5. [Variáveis de ambiente e configurações](#5-variáveis-de-ambiente-e-configurações)
6. [Convenção de branches e commits](#6-convenção-de-branches-e-commits)
7. [Documentação complementar](#7-documentação-complementar)
8. [Licença, citação e agradecimentos](#8-licença-citação-e-agradecimentos)

---

## 1. Visão geral

### 1.1 Problema

<!--
  Descreva o problema ANTES de falar da solução. Responda:
  - Quem sofre com esse problema? (usuário, empresa, comunidade)
  - Como ele é resolvido hoje e por que isso não é suficiente?.
-->
[DESCREVA AQUI O PROBLEMA QUE O PROJETO RESOLVE]

### 1.2 Solução proposta

<!-- O que o sistema faz, em linguagem que alguém de fora da área entenda. -->
[DESCREVA AQUI A SOLUÇÃO EM 2 A 5 FRASES]

### 1.3 Funcionalidades principais

<!-- Marque [x] o que já funciona. Isso mostra o estado real do projeto. -->
- [ ] [FUNCIONALIDADE 1 — ex.: leitura de temperatura a cada 10 s]
- [ ] [FUNCIONALIDADE 2 — ex.: painel web com histórico das últimas 24 h]
- [ ] [FUNCIONALIDADE 3 — ex.: comando remoto para acionar o relé]

### 1.4 Fora do escopo (nesta versão)

<!-- Declarar o que NÃO será feito evita cobrança indevida e mal-entendidos. -->
- [LIMITAÇÃO OU ITEM FORA DO ESCOPO 1]
- [LIMITAÇÃO OU ITEM FORA DO ESCOPO 2]

### 1.5 Demonstração

<!--
  Coloque as imagens em docs/img/. Use foto do protótipo montado,
  print da interface ou GIF curto (máx. ~10 MB).
-->
| Protótipo | Interface |
|:---:|:---:|
| ![Foto do protótipo](docs/img/prototipo.jpg) | ![Print da interface](docs/img/interface.png) |

Vídeo de demonstração: [LINK DO VÍDEO OU "não disponível"]

---
### 1.6 Fluxogramas no Draw.io
<!--
  Coloque as imagens em docs/img/. Use fotos utilizando o Draw.io
  print da interface
## 2. Responsáveis e autores

<!--
  Uma linha por pessoa. Papéis sugeridos (uma pessoa pode ter mais de um):
  - Orientador(a)        : responsável acadêmico/institucional.
  - Líder Técnico(a)     : (opcional) referência técnica do projeto, tira dúvidas.
  - Dev Firmware         : código embarcado.
  - Dev Backend / API    : servidor, banco, integrações.
  - Dev Frontend / Mobile: interface do usuário.
  - Hardware / Eletrônica: esquemático, PCB, montagem, testes elétricos.
  - Fabricação Digital   : modelagem 3D, impressão, corte a laser.
  - Documentação / QA    : docs, testes, roteiro de validação.
  Contato: use e-mail institucional. Não publique telefone pessoal.
-->

| Nome | Papel | Responsabilidade no projeto | GitHub | Contato |
|---|---|---|---|---|
| [NOME COMPLETO] | Mecanica | [EX.: RESPONSAVEL PELA MODELAGEM] | [@usuario] | [email@uea.edu.br] |
| [NOME COMPLETO] | ELétrica | [EX.: DESENVOLVEDOR DA PCB] | [@usuario] | [email@uea.edu.br] |
| [NOME COMPLETO] |Programação | [EX.: LEITURA DE SENSORES E COMUNICAÇÃO MQTT] | [@usuario] | [email@uea.edu.br] |


**Vínculo:** [PROGRAMA — ex.: PIBIC, TCC, Extensão, Projeto interno Ocean] · **Código/edital:** [NÚMERO OU "N/A"] · **Período:** [MM/AAAA] a [MM/AAAA]

---

## 3. Estrutura do repositório

<!-- Apague as pastas que seu projeto não usa. O detalhamento fica em docs/architecture.md. -->

```text
.
├── .github/            # Templates de PR e issues
├── docs/               # Documentação (arquitetura, hardware, imagens)
├── firmware/           # Código embarcado (PlatformIO)
├── app/                # Frontend web/mobile
├── api/                # Backend / API
├── supabase/           # Migrations e configuração do banco
├── hardware/           # Esquemáticos, PCB, CAD (STL/STEP), corte a laser
├── .env.example        # Modelo das variáveis de ambiente (sem valores reais)
└── README.md
```

---

## 4. Guia rápido de instalação e execução

### 4.1 Pré-requisitos

<!-- Informe a versão que VOCÊ usou e testou. "Qualquer versão" não ajuda ninguém. -->

| Ferramenta | Versão testada | Necessária para | Download |
|---|---|---|---|
| Git | [2.4x] | Tudo | https://git-scm.com |
| VS Code + extensão PlatformIO IDE | [VERSÃO] | Firmware | https://platformio.org/install/ide?install=vscode |
| Driver USB-Serial ([CH340 / CP210x / FTDI]) | — | Gravar a placa | [LINK DO DRIVER] |
| Node.js (LTS) | [22.x] | Frontend / API | https://nodejs.org |
| Python | [3.12] | Scripts / análise | https://python.org |
| [OUTRA FERRAMENTA] | [VERSÃO] | [PARA QUÊ] | [LINK] |

### 4.2 Clonar o repositório

```bash
git clone https://github.com/[USUARIO_OU_ORG]/[NOME_DO_REPOSITORIO].git
cd [NOME_DO_REPOSITORIO]
cp .env.example .env          # Windows (PowerShell): Copy-Item .env.example .env
```

Depois, abra o `.env` e preencha os valores conforme a [seção 5](#5-variáveis-de-ambiente-e-configurações).

### 4.3 Software (Frontend / API)

<!-- Ajuste os comandos ao seu gerenciador (npm, pnpm, bun, yarn). Apague o que não usar. -->

**Frontend**

```bash
cd app
npm install
npm run dev                   # abre em http://localhost:[PORTA]
```

**API / Backend**

```bash
cd api
npm install                   # ou, se for Python: python -m venv .venv && pip install -r requirements.txt
npm run dev                   # ou: python -m [MODULO_PRINCIPAL]
```

**Banco de dados (Supabase)** — [DESCREVA COMO APLICAR AS MIGRATIONS, ex.: colar os arquivos de `supabase/migrations/` em ordem no SQL Editor, ou `supabase db push`]

✅ **Funcionou se:** [EX.: o painel abre sem erro no console e mostra "Dispositivo offline" enquanto a placa não está ligada].

### 4.4 Firmware

**Placa alvo:** [EX.: ESP32 DevKit V1 (ESP32-WROOM-32)] · **Ambiente PlatformIO:** `[NOME_DO_ENV]`

1. Crie o arquivo de segredos a partir do modelo (ele **não** vai para o Git):
   ```bash
   cp firmware/include/secrets.example.h firmware/include/secrets.h
   ```
2. Preencha `secrets.h` (Wi-Fi, token do dispositivo etc. — ver [seção 5.2](#52-firmware-secretsh)).
3. Confira a ligação dos fios com a tabela de [docs/hardware_and_pinout.md](docs/hardware_and_pinout.md) **antes** de energizar.
4. Compile, grave e abra o monitor serial:
   ```bash
   cd firmware
   pio run                          # compila
   pio run -t upload                # grava (placa conectada via USB)
   pio device monitor -b [115200]   # abre o monitor serial
   ```

<details>
<summary><b>Alternativa: Arduino IDE 2</b></summary>

1. Instale o pacote da placa em *Ferramentas → Placa → Gerenciador de Placas*: [NOME DO PACOTE, ex.: "esp32 by Espressif Systems" versão X.Y.Z].
2. Instale as bibliotecas em *Gerenciador de Bibliotecas*:
   | Biblioteca | Versão |
   |---|---|
   | [NOME] | [VERSÃO] |
3. Abra `firmware/[ARQUIVO].ino`, selecione a placa `[NOME DA PLACA]` e a porta, e clique em *Carregar*.
</details>

✅ **Funcionou se:** o monitor serial mostra [EX.: "Wi-Fi conectado, IP 192.168.x.x" seguido de leituras a cada 10 s] e o LED de status [COMPORTAMENTO ESPERADO].

### 4.5 Problemas comuns

| Sintoma | Causa provável | Solução |
|---|---|---|
| Porta serial não aparece | Driver USB-Serial ausente ou cabo só de carga | Instale o driver da seção 4.1 e troque por um cabo de dados |
| `Failed to connect to ESP32: Timed out` | Placa não entrou em modo de gravação | Segure o botão **BOOT** ao iniciar o upload |
| Reinicia sozinha com `Brownout detector was triggered` | Fonte/USB não aguenta o pico de corrente do Wi-Fi | Use fonte adequada; veja requisitos elétricos em `docs/hardware_and_pinout.md` |
| `secrets.h: No such file or directory` | Passo 1 da seção 4.4 não foi feito | Copie `secrets.example.h` para `secrets.h` |
| [SINTOMA ESPECÍFICO DO SEU PROJETO] | [CAUSA] | [SOLUÇÃO] |

---

## 5. Variáveis de ambiente e configurações

> ⚠️ **Regras de ouro**
> - O arquivo `.env` e o `secrets.h` **nunca** são commitados (já estão no `.gitignore`).
> - Toda variável nova precisa entrar **também** no `.env.example` (com valor fictício) e nesta tabela.
> - Variáveis com prefixo `VITE_`, `NEXT_PUBLIC_` ou `EXPO_PUBLIC_` são **embutidas no código do navegador/app** e qualquer pessoa pode lê-las. Nunca coloque chave de serviço (`service_role`), senha de banco ou segredo JWT com esses prefixos.
> - Vazou uma credencial? **Revogue e gere outra imediatamente** — apagar o commit não basta, o histórico continua acessível.

### 5.1 Software (`.env`)

| Variável | Obrigatória | Usada em | Exemplo (fictício) | Descrição |
|---|:---:|---|---|---|
| `APP_ENV` | Sim | app, api | `development` | Ambiente: `development`, `staging` ou `production` |
| `VITE_SUPABASE_URL` | Sim | app | `https://abcd1234.supabase.co` | URL do projeto Supabase (pública) |
| `VITE_SUPABASE_ANON_KEY` | Sim | app | `eyJhbGciOi...` | Chave *anon* (pública; a proteção real vem das políticas RLS) |
| `SUPABASE_SERVICE_ROLE_KEY` | Não | api | `eyJhbGciOi...` | **Secreta.** Ignora RLS. Só no servidor, nunca no frontend |
| `DATABASE_URL` | Não | api, scripts | `postgresql://user:senha@host:5432/db` | Conexão direta ao banco |
| `API_PORT` | Não | api | `3000` | Porta local da API |
| `API_BASE_URL` | Não | app | `http://localhost:3000` | Endereço da API consumido pelo frontend |
| `MQTT_BROKER_URL` | Não | api | `mqtts://broker.exemplo.com:8883` | Broker MQTT (use TLS, porta 8883) |
| `MQTT_USERNAME` | Não | api | `ocean_api` | Usuário do broker |
| `MQTT_PASSWORD` | Não | api | `********` | **Secreta.** Senha do broker |
| `MQTT_TOPIC_PREFIX` | Não | api | `ocean/[projeto]` | Prefixo dos tópicos (ver `docs/architecture.md`) |
| `LOG_LEVEL` | Não | api | `info` | `debug`, `info`, `warn` ou `error` |
| `[NOVA_VARIAVEL]` | [Sim/Não] | [ONDE] | [EXEMPLO FICTÍCIO] | [DESCRIÇÃO] |

### 5.2 Firmware (`secrets.h`)

| Constante | Obrigatória | Exemplo (fictício) | Descrição |
|---|:---:|---|---|
| `WIFI_SSID` | Sim | `"Rede_Lab"` | Nome da rede Wi-Fi (ESP32 clássico só conecta em **2,4 GHz**) |
| `WIFI_PASSWORD` | Sim | `"********"` | Senha da rede |
| `DEVICE_ID` | Sim | `"[projeto]-esp32-01"` | Identificador único do dispositivo |
| `DEVICE_TOKEN` | Sim | `"tok_xxxxxxxx"` | **Secreto.** Autentica o dispositivo no backend |
| `API_BASE_URL` / `SUPABASE_URL` | [Sim/Não] | `"https://abcd1234.supabase.co"` | Endereço do backend |
| `MQTT_HOST` / `MQTT_PORT` | [Sim/Não] | `"broker.exemplo.com"` / `8883` | Broker MQTT |
| `MQTT_USER` / `MQTT_PASS` | [Sim/Não] | `"esp32_01"` / `"********"` | Credenciais do broker **por dispositivo** |

### 5.3 Configurações que não são segredo

<!-- Constantes de comportamento ficam versionadas, em arquivo próprio (ex.: firmware/include/config.h). -->

| Parâmetro | Arquivo | Valor padrão | Descrição |
|---|---|---|---|
| `SAMPLE_INTERVAL_MS` | `firmware/include/config.h` | `[10000]` | Intervalo entre leituras |
| `FW_VERSION` | `firmware/include/config.h` | `"[0.1.0]"` | Versão do firmware (igual à tag do Git) |
| `[PARAMETRO]` | [ARQUIVO] | [VALOR] | [DESCRIÇÃO] |

> A pinagem (qual GPIO liga em qual componente) fica em `firmware/include/pins.h` e é documentada em [docs/hardware_and_pinout.md](docs/hardware_and_pinout.md). Mudou um pino no código? Atualize os dois no mesmo PR.

---

## 6. Convenção de branches e commits

### 6.1 Branches

> **Cada voluntário tem permissão para subir direto.** Não há aprovação obrigatória nem branch protegida: você pode fazer `push` na `main` ou abrir PR, como preferir. As branches abaixo são uma **sugestão** para organizar trabalhos maiores ou em paralelo.

| Branch | Para quê | Quando usar |
|---|---|---|
| `main` | Versão principal do projeto | Mudanças pequenas podem ir direto aqui. Tente manter a `main` sempre compilando |
| `feat/<nº-issue>-descricao` | Nova funcionalidade | Quando o trabalho leva mais de um dia ou pode quebrar algo |
| `fix/<nº-issue>-descricao` | Correção de bug | Quando quiser testar a correção antes de levar para a `main` |
| `docs/<descricao>` | Só documentação | Opcional — documentação pode ir direto na `main` |
| `hw/<descricao>` | Mudança de hardware (esquemático, PCB, CAD) | Lembre de atualizar `hardware_and_pinout.md` junto |

Nome de branch: minúsculas, sem acento, palavras separadas por hífen. Exemplo: `feat/12-leitura-hx711`.

```text
main              ──●────●────────────●────●──  (tag v0.2.0)
                          \          /
feat/12-hx711              ●───●───●
```

**Trabalhando com mais de uma pessoa ao mesmo tempo:** rode `git pull` antes de começar e antes de subir, para evitar conflitos.

### 6.2 Commits — [Conventional Commits](https://www.conventionalcommits.org/pt-br/v1.0.0/)

Formato:

```text
<tipo>(<escopo>): <descrição no imperativo, minúscula, sem ponto final>

[corpo opcional: o PORQUÊ da mudança]

[rodapé opcional: Closes #12 | BREAKING CHANGE: ...]
```

| Tipo | Quando usar | Exemplo |
|---|---|---|
| `feat` | Nova funcionalidade | `feat(fw): adiciona leitura da célula de carga HX711` |
| `fix` | Correção de bug | `fix(app): corrige fuso horário no gráfico de histórico` |
| `docs` | Só documentação | `docs(hw): atualiza pinout com sensor DHT22` |
| `refactor` | Mudança de código sem alterar comportamento | `refactor(api): extrai validação de payload para módulo` |
| `perf` | Melhoria de desempenho/consumo | `perf(fw): usa deep sleep entre leituras` |
| `test` | Testes | `test(api): cobre rota de comandos` |
| `build` | Dependências, `platformio.ini`, `package.json` | `build(fw): fixa ArduinoJson em 7.4.2` |
| `ci` | GitHub Actions / pipelines | `ci: compila firmware a cada PR` |
| `style` | Formatação, sem mudar lógica | `style(app): aplica prettier` |
| `chore` | Tarefas gerais | `chore: atualiza .gitignore` |
| `revert` | Desfaz um commit anterior | `revert: feat(fw): adiciona deep sleep` |

**Escopos do laboratório:** `fw` (firmware) · `app` (frontend/mobile) · `api` (backend) · `db` (banco/migrations) · `hw` (eletrônica) · `cad` (peças 3D/laser) · `docs` · `infra` (deploy, CI).

**Mudança que quebra compatibilidade** (ex.: formato do payload MQTT mudou e o firmware antigo para de funcionar): use `!` após o escopo e explique no rodapé.

```text
feat(api)!: muda payload de telemetria para JSON versionado

BREAKING CHANGE: firmware anterior a v0.3.0 precisa ser regravado.
```

### 6.3 Versionamento

Seguimos [SemVer](https://semver.org/lang/pt-BR/) `MAIOR.MENOR.CORREÇÃO`. A versão do firmware (`FW_VERSION`) deve ser igual à tag do Git gravada na placa.

---

## 7. Documentação complementar

| Documento | Conteúdo |
|---|---|
| [docs/architecture.md](docs/architecture.md) | Fluxo de dados, endpoints/tópicos MQTT, estrutura de pastas |
| [docs/hardware_and_pinout.md](docs/hardware_and_pinout.md) | Pinout, requisitos elétricos, B.O.M., peças 3D |
| [CHANGELOG.md](CHANGELOG.md) | Histórico de versões ([CRIAR QUANDO HOUVER A PRIMEIRA VERSÃO]) |

---

## 8. Licença, citação e agradecimentos

**Licença:** este projeto está sob a licença [MIT / Apache-2.0 / GPL-3.0 / CC BY 4.0 para dados e documentação] — veja [LICENSE](LICENSE).
<!-- Confirme a licença com o(a) orientador(a) antes de publicar. Hardware pode usar CERN-OHL-S/P. -->

**Como citar:**

```text
[SOBRENOME, Nome; SOBRENOME, Nome]. [NOME DO PROJETO]. [ANO]. Samsung Ocean Manaus / UEA.
Disponível em: https://github.com/[USUARIO_OU_ORG]/[NOME_DO_REPOSITORIO].
```

**Publicações relacionadas:** [ARTIGO, EVENTO, BANNER — ou "nenhuma até o momento"]

**Agradecimentos:** ao Samsung Ocean Manaus e à Universidade do Estado do Amazonas (UEA) pela infraestrutura e apoio. [OUTROS AGRADECIMENTOS / FOMENTO]
