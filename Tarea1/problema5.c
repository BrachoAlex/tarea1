#include<stdio.h>
#include<stdlib.h>
int main()
{
        printf("Ingrese el número de iteraciones ");
        int iterations,it;
        //scan input
        scanf("%d", &iterations);
        it = iterations;
        int sign = 1;
        int denominator = 1;
        double pi = 0.0;

        //loop
        while(iterations--)
        {
                //Leibniz
                pi += sign*(double)4/denominator;
                sign *= (-1);  //signo
                denominator += 2; 
        }
        printf("Resultado de %d iteraciones: %lf",it,pi);
}