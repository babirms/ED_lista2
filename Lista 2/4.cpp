#include <stdio.h>
#define TMAX 10
/*Sejam três filas Fila2, Fila5 e Fila7, armazenar respectivamenete, números inteiros divisíveis por 2, 5 e 7. Escreva um procedimento enfila, que percorre um vetor, e enfila o valor na Fila correta.*/

int Fila2[TMAX];
int Fila5[TMAX];
int Fila7[TMAX];

int T2=0,T5=0, T7=0;

void enfila(int valor){
  if(valor % 2 == 0){
    Fila2[T2] = valor;
    T2++;
  }
  if(valor % 5 == 0){
    Fila5[T5] = valor;
    T5++;
  }
  if(valor % 7 == 0){
    Fila7[T7] = valor;
    T7++;
  }
}

void imprime(){
  printf("Fila 2: \n");
  for(int i=0; i<T2; i++){
    printf("%d ",Fila2[i]);
  }
  printf("\n");
  printf("Fila 5: \n");
  for(int i=0; i<T5; i++){
    printf("%d ",Fila5[i]);
  }
  printf("\n");
  printf("Fila 7: \n");
  for(int i=0; i<T7; i++){
    printf("%d ",Fila7[i]);
  }
  
}

int main(void) {
  enfila(70);
  enfila(2);
  enfila(10);
  enfila(4);
  enfila(3);
  enfila(35);
  enfila(21);
  imprime();
  
  return 0;
}
