//alphabet left arrow
#include <stdio.h>

int main()
{
	int rows, i, j, alphabet;

	printf("Enter Left Arrow Pattern of Alphabets Rows = ");
	scanf("%d", &rows);

	printf("Printing Left Arrow Alphabets Pattern\n");
	alphabet = 65;

	for (i = rows - 1; i >= 0; i--)
	{
		for (j = i; j >= 0; j--)
		{
			printf("%c ", alphabet + j);
		}
		printf("\n");
	}
}