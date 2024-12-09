#include <stdio.h>

int main(){
    float kb, mb, b, gb, bit;

    printf("Conversor de Bytes, digite um valor em KB: ");
    scanf("%f", &kb);

    bit = kb*8192;
    b = kb*1024;
    mb = kb/1024;
    gb = mb/1024;

    printf("bit: %f\n", bit);
    printf("Byte: %f\n", b);
    printf("KB: %f\n", kb);
    printf("MB: %.9f\n", mb);
    printf("GB: %.9f\n", gb);

    return 0;
}