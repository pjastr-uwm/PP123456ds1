#include <stdio.h>
#include <stdlib.h>

void sqrCopy(int const * ptr1, int * ptr2){
    *ptr2 = *ptr1 * *ptr1;
}

int main()
{
    int x =4, y=8;
    printf("%d %d\n", x,y);
    sqrCopy(&x, &y);
    printf("%d %d\n", x,y);
    return 0;
}
