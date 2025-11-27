#include <stdio.h>


struct DVD {

char artista[50];

char nomeAlbum[50];

char estilo[30];

char gravadora[30];

int ano;

float preco;

};


void cadastrar(struct DVD *d){

printf("Artista: ");

fgets(d->artista, 50, stdin);


printf("Nome do Album: ");

fgets(d->nomeAlbum, 50, stdin);


printf("Estilo Musical: ");

fgets(d->estilo, 30, stdin);


printf("Gravadora: ");

fgets(d->gravadora, 30, stdin);


printf("Ano: ");

scanf("%d", &d->ano);


printf("Preco: ");

scanf("%f", &d->preco);

}


void exibir(struct DVD d){

printf("\nDVD CADASTRADO\n");

printf("Artista: %s", d.artista);

printf("Album: %s", d.nomeAlbum);

printf("Estilo: %s", d.estilo);

printf("Gravadora: %s", d.gravadora);

printf("Ano: %d\n", d.ano);

printf("Preco: R$ %.2f\n", d.preco);

}


int main() {

struct DVD d;

getchar();

cadastrar(&d);

exibir(d);

return 0;

}