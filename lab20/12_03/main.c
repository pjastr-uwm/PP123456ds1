#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(int n, int m, int tab[n][m]){
    int index =0;
    int max = tab[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (max < tab[i][j]){
                max = tab[i][j];
                index = i;
            }
        }
    }
    return index;
}

int main()
{
    int tab[3][3] = {{3,4,2},{-4,2,1},{0,-4,4}};
    printf("%d\n", maxRowIdx(3,3,tab));
    return 0;
}
