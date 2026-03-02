#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 0.12443;
    float b = 1.01;
    float c = 0.123;
    printf("%d\n", a+(b+c)==(a+b)+c);
    return 0;
}
