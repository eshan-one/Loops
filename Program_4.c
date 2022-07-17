#include <stdio.h>

int main() {
  int x=1,n,sum=0,square;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  printf("n = %d", n);
  
  while(x<=n){
  square = x*x;
  sum = sum + square;
    
    x++;
  }
  printf("\nThe sum of the sqaures of  first n natural numbers is : %d", sum);
  return 0;
}
