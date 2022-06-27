#include <stdio.h>

long int fib(long int n) {
  if(n < 2)
    return n;
  else
    return fib(n - 1) + fib(n - 2);
}

int main() {
  long int numero,cont = 0,fibo;
  scanf("%ld",&numero);
  fibo = fib(cont);
  while(numero > fibo){
    cont++;
    fibo = fib(cont);
  }
  if(numero == fibo)
    printf("Número pertence a sequência\n");
  else if(numero < fibo)
    printf("O número não pertence a sequência\n");
  return 0;
}