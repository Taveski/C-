#include<stdio.h>
int main()
{
    char nome[30];
    int i;
    printf("informe o nome:\n");
    scanf("%s",nome);
    for(i=1;i<=10;i++)//Nao precisa ;
    {
        printf("%s",nome);
     }
    return(0);
}
    