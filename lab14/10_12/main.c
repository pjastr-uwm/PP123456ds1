#include <stdio.h>
#include <stdlib.h>

void shiftRight2(int n, int tab[]){
    int temp1= tab[n-1];
    int temp2 = tab[n-2];
    for(int i=n-1;i>=2;i--){
        tab[i] = tab[i-2];
    }
    tab[0] = temp2;
    tab[1] = temp1;
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
    shiftRight2(6,tab);
    printTable(6,tab);
    return 0;
}
