#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  
  int testes, i, j, k;
  char entrada1[50], entrada2[50], fim[100];

  scanf("%d", &testes);

  for (i = 0; i < testes; i++){

    scanf("%s %s", entrada1, entrada2);
    
    for (j= 0,k = 0; j <= strlen(entrada1) && j <= strlen(entrada2); j++, k+=2) {
      fim[k] = entrada1[j];
      fim[k+1] = entrada2[j];
    }

    printf("%s\n", fim);
  }
  
  return 0;
}