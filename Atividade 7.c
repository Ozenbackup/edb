#include <stdlib.h>
#include <stdio.h>

typedef struct alunos{
char nome[200];
char matricula[200];
float media[3];

}Alunos;

int main(void){

printf("\nATIVIDADE 7\n\n");

float mediaDasMedias(float a, float b, float c){

float result=0;

result=((a+b+c)/3);

return (result);
}

int c;
float mediaTotal;
Alunos *p[3];


for(c=0;c<3;c++){

p[c]=malloc(sizeof(Alunos));

printf("Insira o seu nome\n");
gets(p[c]->nome);
printf("Insira o seu numero de matricula\n");
gets(p[c]->matricula);
printf("Insira a sua media de POO\n");


fflush(stdin);

scanf("%f", &p[c]->media[0]);
printf("Insira a sua media de AOC\n");
scanf("%f", &p[c]->media[1]);
printf("Insira a sua media de MATDISC\n");
scanf("%f", &p[c]->media[2]);

fflush(stdin);

mediaTotal=mediaDasMedias(p[c]->media[0], p[c]->media[1], p[c]->media[2]);
printf("\nMedia das medias:%.2f\n\n", mediaTotal);

free(p[c]);
}
}
