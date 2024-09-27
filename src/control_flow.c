#include <stdio.h>
 
int main ()
{
    int i, n = 2;
    for(int i = 0; i < 2; i++) {
        printf("hello world.\n");
    }
    printf("i = %d\n", i);
    if(i == 1) {
        printf("hello.\n");
    }
    else if(i != 0) {
        printf("Hi\n");
    }
    else {
        printf("Hey\n");
    }
    switch(n) {
        case 1:
            printf("hello again\n");
            break;
        case 2:
            printf("Happy lab 2\n");
            break;
        default:
            printf("Bye\n");
    }
    return 0;
}
