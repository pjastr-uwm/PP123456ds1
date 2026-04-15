#include <stdio.h>
#include <stdlib.h>

int * shiftRight(int n, int tab[]){
    int * tab2 = malloc(n *sizeof(int));
    for(int i=n-1;i>=1;i--){
        tab2[i] = tab[i-1];
    }
    tab2[0] = tab[n-1];
    return tab2;
}

void printTable(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ", tab[i]);
    }
    printf("\n-------\n");
}

int main()
{
    int tab[] = {4,5,7,-2,-7,8};
    printTable(6,tab);
    int * result = shiftRight(6,tab);
    printTable(6,tab);
    printTable(6,result);
    return 0;
}
