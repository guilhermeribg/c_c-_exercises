#include <stdio.h>
unsigned long long int resp[80];


unsigned long long int fibo (unsigned long long int x);
int main(void) {

  unsigned long long int  i;
  int T,n;

  resp[0] = 0;
  resp[1] = 1;
  for (i = 2; i<80;i++)
  {
    resp[i] = -1; 

  }

  scanf("%d", &T);

  while(T>0)
  {

    scanf("%d", &n);
    i = fibo(n);
    printf("Fib(%d) = %llu\n",n, i);

    T--;
  } 
  return 0;
}


unsigned long long int fibo (unsigned long long int x)
 {
    if(resp[x] != -1)
     { 
       return resp[x];
     }
    resp[x] = fibo(x-1) + fibo(x-2);

    return resp[x];
  }
