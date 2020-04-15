#include <stdio.h>
#include <math.h>

int main() {

  double a, b, c, A, B, C;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  if (a >= b && a >= c) {
    a = A;
    if (b >= c) {
      b = B;
      c = C;
    } else {
      b = C;
      c = B;
    }
  }if (b >= a && b >= c) {
    b = A;
    if ( a >= c) {
      a = B;
      C = C;
    } else {
      a = C;
      C = B;
    }
  } if (c >= a && c >= b) {
    c = A;
    if ( a >= b) {
      a = B;
      b = C;
    } else {
      a = C;
      b = B;
    }
  }

  if (A >= B + C) {
    printf("NAO FORMA TRIANGULO\n");
  } if (pow(A,2) == pow(B,2) + pow(C,2)) {
    printf("TRIANGULO RETANGULO\n");
  } if (pow(A,2) > pow(B,2) + pow(C,2)){
    printf("TRIANGULO OBTUSANGULO\n");
  } if (pow(A,2) < pow(B,2) + pow(C,2)){
    printf("TRIANGULO ACUTANGULO\n");
  } if (A == B && B == C) {
    printf("TRIANGULO EQUILATERO\n");
  } if (A == B && B != C && A != C) {
    printf("TRIANGULO ISOSCELES\n");
  } if (B == C && B != A && C != A) {
    printf("TRIANGULO ISOSCELES\n");
  } if (A == C && B != A && B != C) {
    printf("TRIANGULO ISOSCELES\n");
  }
}



//se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
//se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
//se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
//se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
//se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
//se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES