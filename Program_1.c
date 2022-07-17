#include <stdio.h>

int main() {
  int x=1,n,sum=0;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  printf("n = %d", n);
  
  while(x<=n){
    sum = sum +x;
    x++;
  }
  printf(" The sum of first n natural numbers is %d", sum);
  return 0;
}
