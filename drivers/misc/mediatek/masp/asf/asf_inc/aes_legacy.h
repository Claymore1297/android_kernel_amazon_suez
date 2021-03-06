/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef H_AES_LEGACY
#define H_AES_LEGACY

/**************************************************************************
 *  AES
 **************************************************************************/
#define CUSTOM_AES_256              "CUSTOM_AES_256"
#define AES_KEY_SIZE                (32)
#define CIPHER_BLOCK_SIZE           (16)

/**************************************************************************
 *  EXPORT FUNCTION
 **************************************************************************/
extern int aes_legacy_enc(unsigned char *in_buf, unsigned int in_len, unsigned char *out_buf,
			  unsigned int out_len);
extern int aes_legacy_dec(unsigned char *in_buf, unsigned int in_len, unsigned char *out_buf,
			  unsigned int out_len);
extern int aes_legacy_init_key(unsigned char *key_buf, unsigned int key_len);
extern int aes_legacy_init_vector(void);

#endif
