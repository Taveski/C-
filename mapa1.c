#include<stdio.h>
#include<stdlib.h>
int main(){
    int dividendo,divisor,quociente,resto;
        printf("Insira seu dividendo?\n");
        scanf("%d",&dividendo);
        
        printf("Insira o seu divisor?\n");
        scanf("%d",&divisor);
        
        quociente = dividendo / divisor;
        resto = dividendo % divisor;
       
        printf("Os resultados sao:\n\n");
        printf("Quociente = %d\n",quociente);
        printf("Resto =%d\n",resto);
        
        return(0);
        }
        