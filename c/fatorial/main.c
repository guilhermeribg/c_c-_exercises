#include <stdio.h>
int fatorial(int x);
unsigned long long int resp[80];

int main(void) {
  int a, i;
  scanf("%d", &a);

  resp[0] = 1;
  resp[1] = 1;
  for (i = 2; i < 80; i++){
    resp[i] = -1;
  }

  printf("%d", fatorial(a));
  return 0;
}

int fatorial(int x) {
  int fat;
  if (resp[x] != 1){
    return resp[x];
  }

  fat = x * fatorial(x-1);
  return fat;
}