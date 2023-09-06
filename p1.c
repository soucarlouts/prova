//primeira questão
#include <stdio.h>
int main(){
   
   float a;
   float b;
   float z;

printf("Ola, digite sua primeira nota: ");
scanf("%f", &a);

printf("Perfeito, agora digite sua segunda nota: ");
scanf("%f", &b);

z = (a + b) /2 ;

printf("a sua media eh de: %f", z);

return 0;
}