#include <stdio.h>
#include <stdlib.h>
int a; //global
int b =5; //global con valor
void c(void); //en stack
int d[]; // arreglo

int main()
{    
    printf("GLOBAL:%lu\n",sizeof(a)); 
    printf("GLOBAL CON VALOR:%lu\n",sizeof(b));     
    printf("EN STACK:%lu\n",sizeof(b));   
    printf("ARREGLO:%lu\n",sizeof(b));   
    return 0;
}