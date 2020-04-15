#include <stdio.h>

int main(void) {
  
  int inicio, fim;

  scanf("%d %d", &inicio, &fim);

  if (fim == inicio){
    printf("O JOGO DUROU 24 HORA(S)\n"); 
  } else if (fim < inicio) {
    int inicio2 = 24 - inicio;
    int tempo2 = inicio2 + fim;
    printf("O JOGO DUROU %d HORA(S)\n", tempo2); 
  } else {
    int tempo = fim - inicio;
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
  } 
}
