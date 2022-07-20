#include <stdio.h>
  int main()
{
  long int n, count=0;
  printf("\nEnter any number:\n");
  scanf("%ld", &n);

  while(n > 0)
  {
     n = n / 10;
     count = count + 1;  
  }

printf("\n Number of digits in the given number = %ld", count);
  return 0;
}
