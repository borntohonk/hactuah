#ifndef HACTUAH_EXTKEYS_H
#define HACTUAH_EXTKEYS_H

#include <string.h>
#include "types.h"
#include "utils.h"
#include "settings.h"

void parse_hex_key(unsigned char *key, const char *hex, unsigned int len);
void extkeys_initialize_settings(HACTUAH_settings_t *settings, FILE *f);

void extkeys_parse_titlekeys(HACTUAH_settings_t *settings, FILE *f);

int settings_has_titlekey(HACTUAH_settings_t *settings, const unsigned char *rights_id);
void settings_add_titlekey(HACTUAH_settings_t *settings, const unsigned char *rights_id, const unsigned char *titlekey);
titlekey_entry_t *settings_get_titlekey(HACTUAH_settings_t *settings, const unsigned char *rights_id);

#endif
