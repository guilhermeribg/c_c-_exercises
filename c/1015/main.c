#include <stdio.h>
#include <math.h>

double dist (double x1, double x2, double y1, double y2) {
  double d = sqrt(pow(x2 - x1,2) + (pow(y2-y1, 2)));
  return d;
} 

int main(void) {
  
  double x1, x2, y1, y2;

  scanf("%lf" "%lf ", &x1,&y1);
  scanf("%lf" "%lf", &x2, &y2);

  printf("%.4lf\n", dist(x1,x2,y1,y2));
}
/*p1(x1,y1) e p2(x2,y2) 
distancia = sqrt((x2-x1)²+(y2-y1)²) */