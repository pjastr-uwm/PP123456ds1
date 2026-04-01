#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int foo(int x){
    return x*x+4;
}

int main()
{
    printf("%d\n", calculate(abs, -12));
    printf("%d\n", calculate(foo, 12));
    return 0;
}
