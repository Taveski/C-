#include <stdio.h>
int main(){
        float c = 1;
        float *pc = &c;
        printf("Endereço de c: %x.\n", &c);
        pc++;
        printf("Endereço para o qual pr aponta: %x.\n", pc);
}
