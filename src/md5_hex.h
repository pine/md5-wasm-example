#ifndef __MD5_WASM_MD5_HEX_H__
#define __MD5_WASM_MD5_HEX_H__

#define MD5_LENGTH     16
#define MD5_HEX_LENGTH 32

void md5_hex(
        const char *data,
        size_t len,
        char *buf
        );

#endif
