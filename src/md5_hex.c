#include <stddef.h>
#include "md5.h"
#include "md5_hex.h"

static void to_hex(
        const unsigned char *bytes,
        size_t len,
        char *buf
        )
{
    const char *hex_chars = "0123456789abcdef";

    int i;
    for (i = 0; i < len; ++i) {
        buf[i << 1]       = hex_chars[(bytes[i] >> 4) & 0x0f];
        buf[(i << 1) + 1] = hex_chars[bytes[i] & 0x0f];
    }
}

void md5_hex(
        const char *data,
        size_t len,
        char *buf
        )
{
    unsigned char md5[MD5_LENGTH];
    MD5_CTX ctx;

    MD5_Init(&ctx);
    MD5_Update(&ctx, data, len);
    MD5_Final(md5, &ctx);

    to_hex(md5, MD5_LENGTH, buf);
}
