#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  
  int num_testes, i, j;
  char jogada1[10], jogada2[10];

  scanf("%d", &num_testes);
  for (i = 0; i < num_testes; i++){
  
  scanf("%s %s", jogada1, jogada2);
  
  if (strncmp(jogada1, jogada2, 10 ) == 0) {
  printf("empate\n");
  }
  if (strncmp(jogada1, "tesoura", 7) == 0 && strncmp(jogada2, "papel", 5) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "papel", 5) == 0 && strncmp(jogada2, "tesoura", 5) == 0) {
    printf("sheldon\n");
  }
  if (strncmp(jogada1, "papel", 5) == 0 && strncmp(jogada2, "pedra", 5) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "pedra", 5) == 0 && strncmp(jogada2, "papel", 5) == 0) {
    printf("sheldon\n");
  }
  if (strncmp(jogada1, "pedra", 5) == 0 && strncmp(jogada2, "lagarto", 7) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "lagarto", 7) == 0 && strncmp(jogada2, "pedra", 5) == 0) {
    printf("sheldon\n");
  }
  if (strncmp(jogada1, "lagarto", 7) == 0 && strncmp(jogada2, "spock", 5) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "spock", 5) == 0 && strncmp(jogada2, "lagarto", 7) == 0) {
    printf("sheldon\n");
  }
  if (strncmp(jogada1, "spock", 5) == 0 && strncmp(jogada2, "tesoura", 7) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "tesoura", 7) == 0 && strncmp(jogada2, "spock", 5) == 0) {
    printf("sheldon\n");
  }
  if (strncmp(jogada1, "spock", 5) == 0 && strncmp(jogada2, "tesoura", 7) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "tesoura", 7) == 0 && strncmp(jogada2, "lagarto", 7) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "lagarto", 7) == 0 && strncmp(jogada2, "tesoura", 7) == 0) {
    printf("sheldon\n");
  }
  if (strncmp(jogada1, "lagarto", 7) == 0 && strncmp(jogada2, "papel", 5) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "papel", 5) == 0 && strncmp(jogada2, "lagarto", 7) == 0) {
    printf("sheldon\n");
  }
  if (strncmp(jogada1, "papel", 5) == 0 && strncmp(jogada2, "spock", 5) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "spock", 5) == 0 && strncmp(jogada2, "papel", 5) == 0) {
    printf("sheldon\n");
  }
  if (strncmp(jogada1, "spock", 5) == 0 && strncmp(jogada2, "pedra", 5) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "pedra", 5) == 0 && strncmp(jogada2, "spock", 5) == 0) {
    printf("sheldon\n");
  }
  if (strncmp(jogada1, "pedra", 5) == 0 && strncmp(jogada2, "tesoura", 7) == 0) {
    printf("rajesh\n");
  }
  if (strncmp(jogada1, "tesoura", 7) == 0 && strncmp(jogada2, "pedra", 5) == 0) {
    printf("sheldon\n");
  }
  }

  return 0;
}