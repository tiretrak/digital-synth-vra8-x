#pragma once

const uint8_t EG_ATTACK_UPDATE_INTERVAL = 4;

const uint16_t g_eg_attack_rate_table[] = {
  0x0FA0, 0x0FA0, 0x0C69, 0x09DB, 0x07D4, 0x0638, 0x04F0, 0x03EC, 0x031E, 0x0279, 0x01F7, 0x0190, 0x013D, 0x00FC, 0x00C8, 0x009F,
  0x007E, 0x0064, 0x004F, 0x003F, 0x0032, 0x0028, 0x001F, 0x0019, 0x0014, 0x000F, 0x000C, 0x000A, 0x0007, 0x0006, 0x0005, 0x0004,
  };

const uint8_t g_eg_decay_release_rate_table[] = {
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xB5, 0xB5, 0xB5, 0xB5, 0xB5, 0xD7, 0xD7, 0xD7, 0xD7,
  0xD7, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA,
  };

const uint16_t g_eg_decay_release_update_interval_table[] = {
  0x0015, 0x0015, 0x001B, 0x0022, 0x002B, 0x0037, 0x0045, 0x002B, 0x0037, 0x0045, 0x0057, 0x006D, 0x0045, 0x0057, 0x006E, 0x008A,
  0x00AE, 0x0071, 0x008E, 0x00B3, 0x00E2, 0x011C, 0x00AF, 0x00DC, 0x0115, 0x015D, 0x01B8, 0x012B, 0x0178, 0x01DA, 0x0255, 0x02EF,
  };

