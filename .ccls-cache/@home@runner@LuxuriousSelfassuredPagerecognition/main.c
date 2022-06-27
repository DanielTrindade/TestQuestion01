#include <stdio.h>

//funcção que calcula um número da sequência de fibonacci.
long int fib(long int n) {
  if(n < 2)
    return n;
  else
    return fib(n - 1) + fib(n - 2);
}
//função que compara dois valores
void verifica(long int numero,long int fibo) {
  if(numero == fibo)
    printf("Número pertence a sequência\n");
  else if(numero < fibo)
    printf("O número não pertence a sequência\n");
}

int main() {
  long int numero,cont = 0,fibo;
  scanf("%ld",&numero);
  fibo = fib(cont);
  while(numero > fibo){
    cont++;
    fibo = fib(cont);
  }
  //realiza o teste que verifica se um numero
  verifica(numero,fibo);
  return 0;
}