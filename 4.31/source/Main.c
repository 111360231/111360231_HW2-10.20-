#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;

	for (i = 1; i <= 9; i = i + 2)
	{
		for (k = (9 - i) / 2; k > 0; k--)
		{
			printf("%s", " ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%s","*");
		}
		printf("\n");
	}

	for (i = 7; i > 0; i = i - 2)
	{
		for (k = (9 - i) / 2; k > 0; k--)
		{
			printf("%s", " ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	return 0;
}