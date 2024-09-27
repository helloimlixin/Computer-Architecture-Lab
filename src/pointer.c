#include <stdio.h>
 
int main ()
{
    int *p;
    int a = 5;
    p = &a;
    
    printf("p = %p\n", p); //%p for pointers and address
    printf("*p = %d\n", *p);
    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    
    return 0;
}
