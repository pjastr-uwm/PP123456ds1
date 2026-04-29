#include <stdio.h>
#include <stdlib.h>

void rmDigits(char txt[]){
    int i,j=0;
    for(i=0; txt[i] !=0;i++){
        if (txt[i] < '0' || txt[i] > '9'){
            txt[j] = txt[i];
            j++;
        }
    }
    txt[j] =0;
}

int main()
{
    char txt1[] = "";
    printf("%s.\n", txt1);
    rmDigits(txt1);
    printf("%s.\n", txt1);
    char txt2[] = "AB34";
    printf("%s.\n", txt2);
    rmDigits(txt2);
    printf("%s.\n", txt2);
    char txt3[] = "233432sds";
    printf("%s.\n", txt3);
    rmDigits(txt3);
    printf("%s.\n", txt3);
    char txt4[] = "2334";
    printf("%s.\n", txt4);
    rmDigits(txt4);
    printf("%s.\n", txt4);
    char txt5[] = "dfjshsjh..,";
    printf("%s.\n", txt5);
    rmDigits(txt5);
    printf("%s.\n", txt5);
    return 0;
}
