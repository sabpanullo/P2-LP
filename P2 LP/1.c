#include <stdio.h>


int main() {

int vet[10];

int i, maior, menor;

float soma = 0;


printf("Digite 10 valores inteiros:\n");

for(i = 0; i < 10; i++){

printf("Valor %d: ", i + 1);

scanf("%d", &vet[i]);

soma += vet[i];

}


maior = menor = vet[0];


for(i = 1; i < 10; i++){

if(vet[i] > maior)

maior = vet[i];


if(vet[i] < menor)

menor = vet[i];

}


printf("\nMaior valor = %d", maior);

printf("\nMenor valor = %d", menor);

printf("\nMedia = %.2f\n", soma / 10);


return 0;

}