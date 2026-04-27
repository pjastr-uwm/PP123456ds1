#include <stdio.h>
#include <stdlib.h>

int cmpStrNew(char txt1[], char txt2[]){
    int i;
    for(i=0; txt1[i] !=0 && txt2[i] != 0;i++){
        if (txt1[i] != txt2[i]){
            return 0;
        }
    }
    if(txt1[i] !=0 || txt2[i] != 0){
        return 0;
    }
    return 1;
}

int main()
{
    printf("%d\n", cmpStrNew("ABC", "abc"));
    printf("%d\n", cmpStrNew("ABC", "AB"));
    printf("%d\n", cmpStrNew("ABC", "ABC"));
    char t1[] = "OLSZTYN";
    char * t2 = "OLSZTYN";
    printf("%p\n", t1);
    printf("%p\n", t2);
    printf("%d\n", cmpStrNew(t1, t2));
    return 0;
}
