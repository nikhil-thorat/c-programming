#include <stdio.h>

int main()
{

    // Short ranges from -32767 to +32767
    short s = -32767;
    printf("Short %d\n", s);

    // Unsigned Short ranges from 0 to +65535
    unsigned short us = 65535;
    printf("Unsigned Short %d\n", us);

    // Integer ranges from -32767 to +32767
    int i = 32767;
    printf("Int %d\n", i);

    // Unsigned Integer ranges from 0 to +4294967295
    unsigned int ui = 4294967295U;
    printf("Unsigned Int %u\n", ui);

    // Long ranges from -2147483647 to +2147483647
    long l = 2147483647;
    printf("Long %ld\n", l);

    // Unsigned Long ranges from 0 to +42949672957
    unsigned long ul = 42949672957;
    printf("Unsigned Long %lu\n", ul);

    // Long long ranges from -9223372036854775807 to +9223372036854775807
    long long ll = 9223372036854775807;
    printf("Long Long %lld\n", ll);

    // Unsigned Long long ranges from 0 to +18446744073709551615
    unsigned long long ull = 18446744073709551615U;
    printf("Unsigned Long Long %llu\n", ull);

    // Char ranges from -128 to +127
    char c = 'c';
    printf("Char %c\n", c);

    // Unsigned Char ranges from 0 to +256
    unsigned char uc = 'c';
    printf("Unsigned Char %c\n", uc);

    // Float ranges from 3.4E-38 to 3.4E+38
    float f = 3.4E+38;
    printf("Float %f\n", f);

    // Double ranges from 1.7E-308 to 1.7E+308
    double d = 1.7E+308;
    printf("Float %f\n", d);

    return 0;
}
