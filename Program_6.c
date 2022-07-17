#include<stdio.h>
int main(){
  long int n,f=1;
  printf("Enter the value of n:\n");
  scanf("%ld", &n);
  printf("\nn = %d ", n);
  while(n>0){
    f=n*f;
    n--;
    
  }
  printf("\nThe value of n factorial is %ld", f);

  
  
}
