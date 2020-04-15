#include <stdio.h>

int main(void) {

  char a;
  double soma, media, matriz[12][12];
  int i,j, k, cont;
  soma = 0;
  cont = 0;

  scanf("%c", &a);

  for (i = 0; i < 12; i++){
    for (j = 0; j < 12; j++){
      scanf("%lf", &matriz[i][j]);
    }
  }
  
  if (a == 'S') {
     for (i = 0; i < 12; i++){
      for (j = i + 1; j < 12; j++){
        soma = matriz[i][j] + soma;
    }
  }
  printf("%.1lf\n", soma); 
  } else if (a == 'M') {
    for (i = 0; i < 12; i++){
      for (j = i + 1; j < 12; j++){
        soma = matriz[i][j] + soma;
        cont+= 1;
      }
    }
    media = soma/cont;
    printf("%.1lf\n", media);
  }
}

