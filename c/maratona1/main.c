#include <stdio.h>

int main(void) {

  int N[1000], i, j = 0, T;

  scanf("%d", &T);
  for(i = 0; i < 1000; i++){
    if (j >= T) {
      j = 0;
    }
    N[i] = j;
    j++;
      } 

  for(i = 0; i < 1000; i++) {
    printf("N[%d] = %d\n", i, N[i]);
  }
}