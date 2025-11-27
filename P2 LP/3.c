#include <stdio.h>


float calcularSalario(float hora, float valorHora, int dias){

return (hora * valorHora) * dias;

}


int main() {

float hora, valorHora;

int dias;


printf("Horas trabalhadas por dia: ");

scanf("%f", &hora);


printf("Valor da hora: ");

scanf("%f", &valorHora);


printf("Quantidade de dias trabalhados: ");

scanf("%d", &dias);


float salario = calcularSalario(hora, valorHora, dias);


printf("Salario do funcionario = R$ %.2f\n", salario);


return 0;

}