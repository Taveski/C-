#include<stdio.h>
#include<stdlib.h>
int main()
{    
    char nome[30];
    int i;
    printf("informe seu nome:\n");
    scanf("%s",&nome);
    i=0;
    while(i!=10)
    {
        printf("\n%d - %s",i,nome);i++;
    }
    return(0);
 }
    
  
 
        