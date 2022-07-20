#include <stdio.h>
  int main()
{
  long int n,r=0;
  printf("\nEnter any number:\n");
  scanf("%ld", &n);
  printf("The reversed number is:\n");

  while(n > 0)
  {
    r = n%10; 
    n = n / 10;
       
    printf("%ld", r);
  }


  return 0;
}
