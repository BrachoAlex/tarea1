#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr[1000][1000];
    int c = 40;
    while (c--)
    {
        printf("&array[%d][1] es: %p\n", c,&arr[c][1]);
    }    
    return 0;
}