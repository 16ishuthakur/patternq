#include<stdio.h>
int main() 
{
  int i, j;
  char alphabet='A';
  for(i=1; i<=5; i++)
  {
    for (j=1; j<=5; j++)
    {
      printf("%c ", alphabet);
    }
    printf("\n");
    alphabet++;             
  }
  return 0;
}