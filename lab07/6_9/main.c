#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj n\n");
    scanf("%d", &n);
    if (n<3){
        printf("Za male n - brak");
        return 0;
    }
    int biez, pop, pop2;
    printf("Podaj a1\n");
    scanf("%d", &pop2);
    printf("Podaj a2\n");
    scanf("%d", &pop);
    int i=3;
    int licznik =0;
    while(i<=n){
        printf("Podaj a%d\n", i);
        scanf("%d", &biez);
        if (2*pop - pop2 < biez){
            licznik++;
        }
        i++;
        pop2 = pop;
        pop = biez;
    }
    printf("Wynik %d\n", licznik);
    return 0;
}
