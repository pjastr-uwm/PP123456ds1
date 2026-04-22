#include <stdio.h>
#include <stdlib.h>

int countNums(char txt[]){
    int counter =0;
    for(int i=0; txt[i] !=0;i++){
        if ('0' <= txt[i] && txt[i] <= '9'){
            counter++;
        }
    }
    return counter;
}

int countNums2(char txt[]){
    int counter =0;
    for(int i=0; txt[i] !=0;i++){
        if (48 <= txt[i] && txt[i] <= 57){
            counter++;
        }
    }
    return counter;
}

int main()
{
    printf("%d\n", '0');
    printf("%d\n", '9');
    char napis[] = "abc22@@";
    printf("%d\n", countNums(napis));
    printf("%d\n", countNums2(napis));
    return 0;
}
