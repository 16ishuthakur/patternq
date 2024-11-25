#include<stdio.h>
int main() 
{
  int i, j, k;
  char alphabet='A';
  for(i=1; i<=5; i++)
  {
    for (j=5-i; j>=1; j--)
    {
      printf(" ");     
    }
    for(k=1; k<=i; k++)
    {
      alphabet = alphabet+k;
      printf("%c", alphabet-1);
      alphabet='A';
    }
    printf("\n");           
  }
  return 0;
}
