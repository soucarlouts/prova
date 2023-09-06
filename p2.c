//segunda questao
#include <stdio.h>
#include <math.h>
int main(){
    float km;
    float litro;

printf("Digite a distancia percorrida: ");
scanf("%f", &km);

printf("digite a quantidade de litros de gasolina gastos: ");
scanf("%f", &litro);
float consumo = (km / litro);

printf("A distancia media de km por litro eh de : %f litros por km rodado", consumo);



    return 0;
}