#include <stdio.h>
#include <stdlib.h>

int maxValue(int n, int * tab){
    int max = *tab;
    for(int i=1;i<n;i++){
        if (max < *(tab+i) ){
            max = *(tab+i);
        }
    }
    return max;
}

int main()
{
    int * tab = malloc(5 * sizeof(int));
    // 4,-5,2,3,7
    *tab = 4;
    *(tab+1) = -5;
    *(tab+2) = 2;
    *(tab+3) = 3;
    *(tab+4) = 7;
    printf("%d\n", maxValue(5, tab));
    return 0;
}
