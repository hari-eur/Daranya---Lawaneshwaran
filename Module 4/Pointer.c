#include <stdio.h>

int main() 
{
    int arr[4] = {0,3,2,5};
    int *ptr = arr;  
    for (int i = 0; i < 4; i++) 
    {
        printf("Element %d: %d\n", i,ptr[i]);
    }

    return 0;
}