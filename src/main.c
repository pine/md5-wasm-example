#include <stdio.h>
#include <string.h>
#include "md5_hex.h"

void process();

int main() {
    printf("Hello, WebAssembly!!\n");

    process();

    return 0;
}

void process() {
    const char *data = "message";
    size_t len = strlen(data);

    char buf[MD5_HEX_LENGTH + 1] = { 0 };

    // empty string
    md5_hex("", 0, buf);
    printf("md5(\"%s\") = \"%s\"\n", "", buf);

    // "message"
    md5_hex(data, len, buf);
    printf("md5(\"%s\") = \"%s\"\n", data, buf);
}
