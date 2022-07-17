#include <stdio.h>

int main() {
  int x=1,n,sum=0,cube;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  printf("n = %d", n);
  
  while(x<=n){
  cube = x*x*x;
  sum = sum + cube;
    
    x++;
  }
  printf("\nThe sum of the cubes of the first n natural numebrs is : %d", sum);

  
  
  return 0;
}
