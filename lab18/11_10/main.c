#include <stdio.h>
#include <stdlib.h>

void strConcat(char nap1[], char nap2[], char nap3[]){
    int i,j=0;
    for(i=0;nap1[i] !=0; i++){
        nap3[j] = nap1[i];
        j++;
    }
    for(i=0;nap2[i] !=0; i++){
        nap3[j] = nap2[i];
        j++;
    }
    nap3[j] = 0;
}

int main()
{
    char txt1[] ="AB";
    char txt2[] = "CDE";
    char txt3[] = "PROGRAMOWANIE";
    strConcat(txt1, txt2, txt3);
    printf("%s\n", txt3);
    return 0;
}
