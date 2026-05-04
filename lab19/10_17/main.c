#include <stdio.h>
#include <stdlib.h>

int findElement(int tab[], int n, int val, int (*isEqual)(int, int)){
    for(int i=0;i<n;i++){
        if (isEqual(tab[i], val)){
            return i;
        }
    }
    return -1;
}

int eq1(int a, int b){
    if (a==b)
        return 1;
    return 0;
}

int eq2(int a, int b){
    return (a+b)%2;
}

int main()
{
    int tab[] = {4,-6,7,11,-5};
    printf("%d\n", findElement(tab, 5, 0, eq1));
    printf("%d\n", findElement(tab, 5, 11, eq1));
    printf("%d\n", findElement(tab, 5, 0, eq2));
    printf("%d\n", findElement(tab, 5, 11, eq2));
    return 0;
}
