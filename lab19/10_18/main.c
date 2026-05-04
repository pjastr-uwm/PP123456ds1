#include <stdio.h>
#include <stdlib.h>

int findWithCondition(int tab[], int n, int (*condition)(int)){
    int index =-1;
    for(int i=0;i<n;i++){
        if (condition(tab[i])){
            index = i;
        }
    }
    return index;
}

int findWithCondition2(int tab[], int n, int (*condition)(int)){
    for(int i=n-1;i>=0;i--){
        if (condition(tab[i])){
            return i;
        }
    }
    return -1;
}

int cond(int a){
    return abs(a%2);
}

int main()
{
    int tab[] = {3,-4,5,-3};
    printf("%d\n", findWithCondition(tab,4, cond));
    printf("%d\n", findWithCondition2(tab,4, cond));
    return 0;
}
