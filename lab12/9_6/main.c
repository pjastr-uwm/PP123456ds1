#include <stdio.h>
#include <stdlib.h>

int applyCondition(int (*condition)(int), int (*action)(int), int value){
    if (condition(value) == 1){
        return action(value);
    }
    return value;
}

int foo(int x){
    return x%2;
}

int foo2(int x){
    return x*x;
}

int main()
{
    printf("%d\n", applyCondition(foo, foo2, 7));
    printf("%d\n", applyCondition(foo, foo2, 14));
    printf("%d\n", applyCondition(foo, foo2, -5));
    printf("%d\n", applyCondition(foo2, foo, 7));
    return 0;
}
