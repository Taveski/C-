#include<stdio.h> //1° biblioteca basica
int main()// 2°incio
{// 3°chave abertura
    float altura,peso; //4°Tipo e nome var
    char sexo;// tipo e nome da var
    
    printf("Informe o sexo (M/F):\n");//tela texto 1
    scanf("%c",&sexo);//leitura tela txt 1
    printf("Informe a altura:\n");//tela txt 2
    scanf("%f",&altura);//leitura tela texto 2
    if((sexo=='F') || (sexo=='f')) //Disjunçao "ou"
    {
        peso = (62.1*altura) - 44.7;
    }    
    else
    {
        peso = (72.7*altura) - 58;
    }
    printf("O sexo é:%c\n",sexo);
    printf("A altura é:%.2f\n",altura);
    printf("O peso ideal é:%.2f\n",peso);
    return(0); 
    }
    