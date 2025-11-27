#include <stdio.h>


float calcularIMC(float peso, float altura){

return peso / (altura * altura);

}


int main() {

float peso, altura;


printf("Digite o peso: ");

scanf("%f", &peso);


printf("Digite a altura: ");

scanf("%f", &altura);


float imc = calcularIMC(peso, altura);


printf("IMC calculado = %.2f\n", imc);


return 0;

}