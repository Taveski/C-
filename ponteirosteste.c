#include <stdio.h>
int main(){
        float c = 1;
        float *pc = &c;
        printf("Endere�o de c: %x.\n", &c);
        pc++;
        printf("Endere�o para o qual pr aponta: %x.\n", pc);
}
