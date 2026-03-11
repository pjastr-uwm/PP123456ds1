#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dodatnie=0;
    int ujemne = 0;
    int x;
    do{
        scanf("%d", &x);
        if (x>0){
            dodatnie += x;
        }
        else{
            ujemne += x;
        }
    }
    while( x!= 0);
    printf("dodatnie %d\n", dodatnie);
    printf("ujemne %d\n", ujemne);
    return 0;
}
