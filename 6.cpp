#include <stdio.h>
#define TMAX 10

/*Existem partes de sistemas operacionais que cuidam da ordem em que os programas devem ser executados. Por exemplo, em um sistema de computação de tempo-compartilhadao ("time-shared") existe a necessidade de manter um conjunto de processos em uma fila, esperando para serem executados. Escreva um programa que seja capaz de ler uma série de solicitações para:
    (a) Incluir novos processos na fila de processo;
    (b) Retirar da fila o processo com o maior tempo de espera;
    (c) Imprimir o conteúdo da lista de processo em determinado momento.
  Assuma que cada processo é representado por um registro composto por um número inteiro identificador do processo.*/

int Fila[TMAX];
int Topo = 0;
int Inicio = 0;

int enfila(int valor){
  if(Topo == TMAX)
    return 0;
  else{
    Fila[Topo] = valor;
    Topo++;
    return 1;
  }
}

int desenfila(){
  int aux;
  if(Topo<Inicio)
    return 0;
  else{
    aux = Fila[Inicio];
    Topo--;
    for(int i =0; i<Topo; i++)
      Fila[i] = Fila[i+1];
  }
}

void imprime(){
  printf("Fila de Processos: \n");
  for(int i=0;i<Topo;i++)
    printf("%d \n",Fila[i]);
}

int main(void) {
    enfila(333333);
    enfila(231231);
    enfila(553211);
    enfila(121325);
    enfila(764512);
    enfila(123555);
    imprime();
    desenfila();
    desenfila();
    imprime();
  return 0;
}
