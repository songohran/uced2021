#include <stdio.h>
#include <math.h>


#define LIM 100
int main(){
 float max, min,media,desvio,soma=0.0,notas[LIM];
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
    
      for(i=0; i<N; i++){
      scanf("%float",&notas[i]);
           }
    max = notas[0];
    min = notas[0];       
    for(i=0; i<N; i++){
       if (notas[i] < min){
           min=notas[i];
       }
     }
      if (notas[i] > max){
          max=notas[i];
       }
printf("Min: %.2f\n Max: %.2f\n \n", min, max); 
        
 return 0;   
}