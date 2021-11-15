
//estat.c: Estatística//
//Autor: Fernanda Cristina Gonçalves//
//Data: 14/11/2021//


#include <stdio.h>
#include <math.h>


#define LIM 100
int main(){
 float media,desvio,soma=0.0,notas[LIM];
 int i,N;
 printf("Entre com a quantidade: ");
 scanf("%d",&N);
 for(i=0; i<N; i++){
 scanf("%f",&notas[i]);
 soma += notas[i];
 }
 media = soma/N;
 printf("Media: %.2f\n",media);
 soma = 0.0;
 for(i=0; i<N; i++)
 soma += (notas[i]-media)*(notas[i]-media);
 desvio = (soma/N);
 printf("Desvio: %.2f\n",desvio);
 return 0;
}

