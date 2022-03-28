#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    unsigned long long a= 1234567890ULL;
    printf ("Primer número: % llu\n", a);
    int c;
    c = 10;
    a << 1;
    while(c--){
        a <<= 1;
        printf ("Contador %d- resultado: %llu\n", c,a);
    }
    
}