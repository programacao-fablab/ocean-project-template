---
name: "🐛 Relato de bug"
about: "Algo não funciona como deveria (software, firmware ou hardware)."
title: "[BUG] [RESUMO CURTO DO PROBLEMA]"
labels: ["bug", "triagem"]
assignees: []
---

<!--
⚠️ SEGURANÇA ELÉTRICA PRIMEIRO
Cheiro de queimado, fumaça, componente muito quente ou bateria estufada?
DESLIGUE A ALIMENTAÇÃO AGORA e avise o responsável pelo laboratório.
Abra a issue depois.

Antes de enviar:
- Procure nas issues abertas e fechadas se o problema já foi relatado.
- Apague senhas, tokens e chaves de qualquer log ou print que colar aqui.
-->

## Resumo

<!-- Uma ou duas frases: o que está errado. -->
[DESCREVA AQUI]

## Área

- [ ] Firmware
- [ ] Frontend / App
- [ ] API / Backend
- [ ] Banco de dados
- [ ] Hardware / eletrônica (montagem, alimentação, sensor)
- [ ] Peça 3D / corte a laser
- [ ] Documentação
- [ ] Não sei

## Passos para reproduzir

<!-- Numere os passos para que outra pessoa consiga causar o mesmo erro. -->
1. [EX.: Ligar a placa na fonte de 5 V]
2. [EX.: Abrir o painel e clicar em "Acionar"]
3. [EX.: Aguardar 30 s]
4. [O ERRO ACONTECE]

## Comportamento esperado

[O QUE DEVERIA ACONTECER]

## Comportamento atual

[O QUE ACONTECE DE FATO]

## Frequência

- [ ] Sempre
- [ ] Às vezes (intermitente) — aproximadamente [__ de __ tentativas]
- [ ] Aconteceu uma vez

## Severidade

- [ ] 🔴 Crítica — risco elétrico/físico, dano ao hardware, perda de dados ou vazamento de credencial
- [ ] 🟠 Alta — funcionalidade principal não funciona e não há alternativa
- [ ] 🟡 Média — funciona com contorno
- [ ] 🟢 Baixa — visual, texto, incômodo pequeno

## Evidências

**Log (monitor serial, console do navegador ou terminal):**

```text
[COLE O LOG AQUI — sem credenciais]
```

**Prints / fotos / vídeo:**
<!-- Arraste imagens para cá. Para hardware, uma foto nítida da montagem ajuda muito. -->
[ANEXE AQUI]

## Ambiente

**Software** (apague se não se aplica)

| Item | Valor |
|---|---|
| Sistema operacional | [EX.: Windows 11 / Ubuntu 24.04 / Android 15] |
| Navegador e versão | [EX.: Chrome 1xx] |
| Versão / commit do app ou API | [EX.: v0.2.1 ou commit abc1234] |
| Ambiente | [Local / Demonstração / Produção] |

**Hardware / Firmware** (apague se não se aplica)

| Item | Valor |
|---|---|
| Placa / MCU | [EX.: ESP32 DevKit V1] |
| Revisão do hardware | [EX.: rev B] |
| Versão do firmware / commit | [EX.: v0.3.0 / abc1234] |
| Alimentação | [EX.: USB do notebook / fonte 5 V 2 A / bateria 18650] |
| Componentes conectados | [EX.: HX711, driver ULN2003 + 28BYJ-48] |
| Rede | [EX.: Wi-Fi do laboratório, 2,4 GHz] |

## Possível causa ou pista

<!-- Opcional. Algo mudou antes do erro aparecer? Já tentou alguma solução? -->
[OPCIONAL]

## Checklist

- [ ] Procurei issues parecidas e não encontrei.
- [ ] Removi credenciais e dados pessoais dos logs e prints.
- [ ] (Hardware) Conferi a ligação com a tabela de `docs/hardware_and_pinout.md`.
