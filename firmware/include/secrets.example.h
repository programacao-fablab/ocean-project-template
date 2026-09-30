// =============================================================================
//  MODELO DE SEGREDOS DO FIRMWARE — [NOME DO PROJETO]
//  1. Copie este arquivo para "secrets.h" na mesma pasta.
//  2. Preencha secrets.h com os valores reais. secrets.h NUNCA vai para o Git.
//  3. No código:  #include "secrets.h"
// =============================================================================
#pragma once

// --- Wi-Fi (ESP32 clássico só conecta em 2,4 GHz) ----------------------------
#define WIFI_SSID        "[NOME_DA_REDE]"
#define WIFI_PASSWORD    "[SENHA_DA_REDE]"

// --- Identificação do dispositivo --------------------------------------------
#define DEVICE_ID        "[projeto]-esp32-01"
#define DEVICE_TOKEN     "[TOKEN_UNICO_DO_DISPOSITIVO]"

// --- Backend HTTP / Supabase (se usado) --------------------------------------
#define API_BASE_URL     "https://[ID_DO_PROJETO].supabase.co"
#define SUPABASE_ANON_KEY "[CHAVE_ANON_PUBLICA]"

// --- MQTT (se usado) — credenciais POR DISPOSITIVO ---------------------------
#define MQTT_HOST        "[HOST_DO_BROKER]"
#define MQTT_PORT        8883
#define MQTT_USER        "[USUARIO_DO_DISPOSITIVO]"
#define MQTT_PASS        "[SENHA_DO_DISPOSITIVO]"
