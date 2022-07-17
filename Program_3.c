#include <stdio.h>

int main() {
  int x=1,n,sum=0;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  printf("n = %d", n);
  n*=2;
  
  while(x<=n){
    sum = sum +x;
    x+=2;
  }
  printf("\nThe sum of first n odd natural numbers is : %d", sum);
  return 0;
}
