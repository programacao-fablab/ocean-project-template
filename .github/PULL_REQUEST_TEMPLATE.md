<!--
Título do PR no padrão Conventional Commits:  tipo(escopo): descrição
Ex.: feat(fw): adiciona leitura do sensor DHT22
Marque as caixas trocando [ ] por [x]. Item que não se aplica: marque e escreva "N/A — motivo".
O checklist é uma autoverificação: não há aprovação obrigatória, você mesmo pode fazer o merge.
-->

## Descrição

<!-- O QUE mudou e POR QUÊ. 2 a 5 frases. -->
[DESCREVA AQUI]

**Issue relacionada:** Closes #[NÚMERO]
<!-- "Closes #12" fecha a issue automaticamente no merge. Sem issue? Explique o motivo. -->

## Tipo de mudança

- [ ] `feat` — nova funcionalidade
- [ ] `fix` — correção de bug
- [ ] `docs` — só documentação
- [ ] `refactor` / `perf` / `style` — sem mudança de comportamento
- [ ] `build` / `ci` / `chore` — dependências, pipeline, configuração
- [ ] ⚠️ **Quebra compatibilidade** (payload, rota, tópico, pinagem ou esquema do banco mudou)

## Áreas afetadas

- [ ] Firmware (`firmware/`)
- [ ] Frontend (`app/`)
- [ ] API / Backend (`api/`)
- [ ] Banco / migrations (`supabase/`)
- [ ] Hardware / eletrônica (`hardware/`)
- [ ] Peças 3D / corte a laser (`hardware/cad/`)
- [ ] Documentação (`docs/`, `README.md`)

## Como foi testado

| Item | Valor |
|---|---|
| Ambiente | [EX.: Windows 11, Node 22, PlatformIO 6.x] |
| Placa / revisão do hardware | [EX.: ESP32 DevKit V1 — rev B] ou N/A |
| Versão do firmware gravada | [EX.: v0.3.0-dev, commit abc1234] ou N/A |
| Navegador / dispositivo | [EX.: Chrome 1xx no Android] ou N/A |

**Passos executados:**
1. [PASSO]
2. [PASSO]

**Evidências:**
<!-- Cole log do monitor serial, print da tela, foto da montagem ou link de vídeo curto.
     APAGUE senhas, tokens e IPs públicos dos logs antes de colar. -->

```text
[LOG DO MONITOR SERIAL / SAÍDA DOS TESTES]
```

## ✅ Checklist antes do merge (autoverificação)

### Qualidade e testes
- [ ] O código **compila/builda sem erros** (`pio run` / `npm run build` / equivalente).
- [ ] Testado **localmente** e funcionando.
- [ ] Testado **no hardware real** (placa física, não só simulador) — ou N/A: [MOTIVO].
- [ ] Testes automatizados passam (`pio test` / `npm test` / `pytest`) — ou N/A: [MOTIVO].
- [ ] Sem código morto, `print`/`console.log` de depuração ou `delay()` de teste esquecido.

### Documentação
- [ ] `README.md` atualizado (instalação, comandos ou variáveis mudaram).
- [ ] `docs/hardware_and_pinout.md` atualizado **se algum pino, componente ou consumo mudou**.
- [ ] `docs/architecture.md` atualizado **se alguma rota, tópico MQTT, payload ou tabela mudou**.
- [ ] `.env.example` / `secrets.example.h` atualizados **se alguma variável nova foi criada**.

### Segurança — sem credenciais expostas
- [ ] Nenhum `.env`, `secrets.h`, chave `.pem`/`.key` ou JSON de conta de serviço no diff.
- [ ] Nenhuma senha, token ou chave **escrita direto no código**.
- [ ] Rodei a verificação abaixo e ela **não** retornou nada suspeito:
  ```bash
  git diff main...HEAD | grep -inE "password|passwd|senha|secret|token|api[_-]?key|service_role|BEGIN .*PRIVATE KEY"
  ```
- [ ] Nenhum dado pessoal real (nome, e-mail, telefone, localização) em seeds, testes ou logs.

### Processo
- [ ] Commits seguem **Conventional Commits**.
- [ ] Branch atualizada com a `main` (`git pull`) e sem conflitos.
- [ ] Autorrevisão feita: li o meu próprio diff inteiro na aba *Files changed*.

### Mudanças de hardware (preencha só se a área Hardware/3D foi marcada)
- [ ] Esquemático e PDF exportado atualizados em `hardware/esquematico/`.
- [ ] B.O.M. atualizada (itens, quantidades, custos).
- [ ] Orçamento de consumo revisado — fonte continua com margem ≥ 30 %.
- [ ] Níveis lógicos conferidos: nenhum sinal de 5 V em pino de 3,3 V.
- [ ] STL **e** STEP/fonte das peças 3D novas foram versionados.
