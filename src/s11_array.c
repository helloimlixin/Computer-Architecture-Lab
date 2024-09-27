#include <stdio.h>
 
int main ()
{
    int arr[5] ={12, 23 , 34, 45, 56};
    int i;
    
    for(i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
}
