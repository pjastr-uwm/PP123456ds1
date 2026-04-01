#include <stdio.h>
#include <stdlib.h>

void applyFunction(int (*func)(int), int start, int end){
    for(int i=start;i<=end;i++){
        printf("%d\n",func(i));
    }
}

int foo(int arg){
    return arg*arg*arg;
}

int main()
{
    applyFunction(abs, -3,4);
    printf("--\n");
    applyFunction(foo, -3,4);
    return 0;
}
