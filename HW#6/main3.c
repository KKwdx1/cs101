#include <stdio.h>

int main() {
   int i=2022;
   if (i%400==0)
        printf("yes");
    else 
        if(i%100==0)
            printf("no");
        else if(i%4==0)
            printf("yes");
        else
            printf("no");
    return 0;
}
