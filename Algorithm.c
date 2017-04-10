#include<stdio.h>

int main(){
  
  int x, y, aux, result;
  
  printf("Digite o valor X:\n");
  scanf("%d", &x);
  printf("Digite o valor Y:\n");
  scanf("%d", &y);
  printf("MDC entre (%d, %d)\n", x, y);
  
  if(x > y){
    do{
      aux = x % y;
      x = y;
      y = aux;
    }while(aux != 0);
  }
  result = x;
  
  printf("Resultado: %d\n", result);
  
  return 0;
}
