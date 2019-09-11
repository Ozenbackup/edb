#include <stdlib.h>
#include <stdio.h>

typedef struct Aluno{
char matricula[200];
char nome[200];
float nota[3];
float media;
};

int main(){

struct Aluno aluno[5];

int c;
float var=0,maiorMedia=0;

for(c=0;c<5;c++){
printf("Insira o seu nome\n");
gets(aluno[c].nome);
printf("Insira o seu numero de matricula\n");
gets(aluno[c].matricula);
printf("Digite a nota 1, 2 e 3\n");
scanf("%f %f %f", &aluno[c].nota[0],&aluno[c].nota[1],&aluno[c].nota[2]);
var=aluno[c].nota[0]+aluno[c].nota[1]+aluno[c].nota[2];
aluno[c].media=var;
printf("\n");
fflush(stdin);
}

for(c=0;c<5;c++){
if(aluno[c].media>maiorMedia){
	maiorMedia=aluno[c].media;
}

}

if(maiorMedia==aluno[4].media){
 printf("Aluno com a maior media:%s\n", aluno[4].nome);
 printf("Nota 1:%f\n Nota 2:%f\n Nota 3:%f\n", aluno[4].nota[0],aluno[4].nota[1],aluno[4].nota[2]);

}else if(maiorMedia==aluno[3].media){
 printf("Aluno com a maior media:%s\n", aluno[3].nome);
 printf("Nota 1:%f\n Nota 2:%f\n Nota 3:%f\n", aluno[3].nota[0],aluno[3].nota[1],aluno[3].nota[2]);

}else if(maiorMedia==aluno[2].media){
 printf("Aluno com a maior media:%s\n", aluno[2].nome);
 printf("Nota 1:%f\n Nota 2:%f\n Nota 3:%f\n", aluno[2].nota[0],aluno[2].nota[1],aluno[2].nota[2]);

}else if(maiorMedia==aluno[1].media){
 printf("Aluno com a maior media:%s\n", aluno[1].nome);
 printf("Nota 1:%f\n Nota 2:%f\n Nota 3:%f\n", aluno[1].nota[0],aluno[1].nota[1],aluno[1].nota[2]);

}else if(maiorMedia==aluno[0].media){
 printf("Aluno com a maior media:%s\n", aluno[0].nome);
 printf("Nota 1:%f\n Nota 2:%f\n Nota 3:%f\n", aluno[0].nota[0],aluno[0].nota[1],aluno[0].nota[2]);
}
return 0;}

