#include <stdio.h>
#include <stdlib.h>

int modifyAndSum(int (*modifier)(int), int number1, int number2){
    return modifier(number1)+modifier(number2);
}

int foo(int a){
    return -a;
}

int main()
{
    printf("%d\n", modifyAndSum(abs, 4,-12));
    printf("%d\n", modifyAndSum(foo, -2,-12));
    return 0;
}
