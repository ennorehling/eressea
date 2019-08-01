/*
Copyright (c) 1998-2015, Enno Rehling <enno@eressea.de>
Katja Zedel <katze@felidae.kn-bremen.de
Christian Schlittchen <corwin@amber.kn-bremen.de>

Permission to use, copy, modify, and/or distribute this software for any
purpose with or without fee is hereby granted, provided that the above
copyright notice and this permission notice appear in all copies.

THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
**/

#ifndef _UNICODE_H
#define _UNICODE_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define USE_UNICODE
    int unicode_utf8_to_cp437(unsigned char *result, const char * utf8_string,
        size_t * length);
    int unicode_utf8_to_cp1252(unsigned char *result, const char * utf8_string,
        size_t * length);
    int unicode_utf8_decode(wint_t * result, const char * utf8_string,
        size_t * length);
    int unicode_utf8_encode(char * result, size_t * size,
        wint_t ucs4_character);
    int unicode_utf8_to_ascii(unsigned char *cp_character, const char * utf8_string,
        size_t *length);
    int unicode_utf8_strcasecmp(const char * a, const char * b);
    int unicode_latin1_to_utf8(char * out, size_t * outlen,
        const char *in, size_t * inlen);
    int unicode_utf8_tolower(char *op, size_t outlen, const char *ip);
    size_t unicode_utf8_trim(char *ip);

#ifdef __cplusplus
}
#endif
#endif
