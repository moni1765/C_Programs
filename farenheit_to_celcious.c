#include<stdio.h>

void main() 
{
    float fah, cel;

    printf("Enter a temp in fah: ");
    scanf("%f", &fah);

    cel = (5.0/9) * (fah - 32);

    printf("%.2f^F is  %.2f^C ", fah, cel);

}

