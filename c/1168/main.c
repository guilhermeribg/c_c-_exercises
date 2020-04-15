#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  
  int i, num_casos, leds;
  char numero[100000], j;

  
  scanf("%d", &num_casos);
  for (i = 0; i < num_casos; i++) { //looping da qntd de casos de testes
  scanf("%s", numero);
    leds = 0;
    for (j = 0; j < strlen(numero); j++ ) {
    
    if (numero[j] == '1') {
    leds = leds + 2;
    }

    if (numero[j] == '2') {
    leds = leds + 5;
    }

    if (numero[j] == '3') {
    leds = leds + 5;
    }

    if (numero[j] == '4') {
    leds = leds + 4;
    }

    if (numero[j] == '5') {
    leds = leds + 5;
    }

    if (numero[j] == '6') {
    leds = leds + 6;
    }

    if (numero[j] == '7') {
    leds = leds + 3;
    }

    if (numero[j] == '8') {
    leds = leds + 7;
    }

    if (numero[j] == '9') {
    leds = leds + 6; 
    }

    if (numero[j] == '0') {
    leds = leds + 6;
    }
    
    }
printf("%d leds\n", leds);

    
  }
  return 0;
}