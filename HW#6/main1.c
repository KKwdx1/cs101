#include <stdio.h>

int main() {
   int i=10;
   if (i%15==0)
        printf("love iu");
    else if (i%5==0)
        printf("iu");
    else if (i%3==0)
        printf("love");
    else
        printf("%d\n",i);
    return 0;
}
