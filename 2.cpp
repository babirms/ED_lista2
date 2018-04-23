#include <stdio.h>
#define TMAX 100

/*Escreva um algoritmo que use uma pilha para inverter a ordem das letras de cada palavra
de uma string, preservando a ordem das palavras. Por exemplo, para a string for: ESTE
EXERCICIO E MUITO FACIL, o resultado deve ser ETSE OICICREXE E OTIUM LICAF.
(Dica: considere um FLAG FIM_DE_STRING que indica o fim de cada string, para qualquer
linguagem.). */

char pilha[TMAX] ;
int T = 0;
int empilha(char vetor[],char letra){
  if(T==TMAX)
    return 0;
  else{
    vetor[T] = letra;
    T++;
  }
}

void imprime(){
  printf("Pilha: \n ");
  for(int i = 0; i<T; i++){
    printf("%c",pilha[i]);
  }
  printf("\n");
}

int desempilha(char vetor[],int n){
  char aux;
    aux = vetor[n];
    n--;
    return aux;
  
}

void inverte(){
  char aux[TMAX]; // vetor auxiliar
  char temp; // variavel que guarda os retornos de desempilha()
  int inicio = 0; // variável que inicia o loop
  int n = 0;  // contador while
  int contador = 0; // contador for
  // copiando os valores de pilha para aux
  for(int i=0;i<T;i++)
    aux[i] = pilha[i];
    
  printf("Invertendo: \n ");  
  while(n<T){
   if(aux[n+1] == ' ' || aux[n+1]=='\0'){
     contador = n+1;
     for(int i=inicio;i<=n+1;i++){
       temp = desempilha(aux,contador);
       printf("%c",temp,contador);
       contador--;
     }
     inicio = n+1;
   }
    n++;
  }
}

int main(void) {
  empilha(pilha,'e');
  empilha(pilha,'s');
  empilha(pilha,'t');
  empilha(pilha,'e');
  empilha(pilha,' ');
  empilha(pilha,'e');
  empilha(pilha,'x');
  empilha(pilha,'e');
  empilha(pilha,'r');
  empilha(pilha,'c');
  empilha(pilha,'i');
  empilha(pilha,'c');
  empilha(pilha,'i');
  empilha(pilha,'o');
  empilha(pilha,' ');
  empilha(pilha,'e');
  empilha(pilha,' ');
  empilha(pilha,'m');
  empilha(pilha,'u');
  empilha(pilha,'i');
  empilha(pilha,'t');
  empilha(pilha,'o');
  empilha(pilha,' ');
  empilha(pilha,'f');
  empilha(pilha,'a');
  empilha(pilha,'c');
  empilha(pilha,'i');
  empilha(pilha,'l');
  imprime();
  inverte();
  
  return 0;
}
