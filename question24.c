#include<stdio.h>
int main() 
{
  int i, j;
  char alphabet='A';
  for(i=1; i<=5; i++)
  {
    for (j=5; j>=i; j--)
    {
      alphabet = alphabet+i;
      printf("%c ", alphabet-1);
      alphabet='A';
    }
    printf("\n");             
  }
  return 0;
}
