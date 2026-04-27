#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char * txt){
    for(int i=0; txt[i] !=0;i++){
        if ('a' <= txt[i] && txt[i] <= 'z'){
            txt[i] -= 32;
        }
    }
}

int main()
{
    char txt[] = "Olsztyn";
    toUpperNew(txt);
    printf("%s\n", txt);
    return 0;
}
