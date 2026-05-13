#include <stdio.h>
#include <stdlib.h>

int * newArrOneD(int n,int m, int ** tab){
    int * temp = malloc(n*m*sizeof(int));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[j+i*m] = tab[i][j];
        }
    }
    return temp;
}

void printTable(int n, int m, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d,%d] = %d, ",i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("----\n");
}

int main()
{
    int ** tab = malloc(2*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[0][0] =  7; tab[0][1] = -4; tab[0][2] = 5;
    tab[1][0] = -3; tab[1][1] =  2; tab[1][2] = -9;
    printTable(2,3,tab);
    int * result = newArrOneD(2,3,tab);
    for(int i=0;i<6;i++){
        printf("%d ", result[i]);
    }
    return 0;
}
