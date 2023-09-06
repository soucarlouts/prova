//quesão cinco
#include <stdio.h>
#include <math.h>
int main(){
double H;
double C;
double CA;

printf("digite quantas unidades tem o primeiro cateto: ");
scanf("%lf", &C);

printf("e agora o segundo cateto: ");
scanf("%lf", &CA);

H = (pow(C, 2) + pow(CA, 2));
double result;
result = sqrt(H);

printf("a Hipotenusa eh: %lf", result);

return 0;
}