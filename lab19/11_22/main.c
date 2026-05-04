#include <stdio.h>
#include <stdlib.h>

int length(const char * txt){
    int i=0;
    while(txt[i]){
        i++;
    }
    return i;
}

char * toUpperNew(const char * txt){
    int n = length(txt);
    char * txt2 = malloc((n+1) * sizeof(char));
    int i;
    for(i=0; txt[i] !=0; i++){
        txt2[i] = txt[i];
        if ('a' <= txt2[i] && txt2[i] <= 'z'){
            txt2[i] -= 32;
        }
    }
    txt2[i] = 0;
    return txt2;
}

int main()
{
    char txt[] = "AbCd34";
    printf("%s\n", toUpperNew(txt));
    const char * txt2 = "AbCd34";
    printf("%s\n", toUpperNew(txt2));
    return 0;
}
