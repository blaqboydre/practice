#include <stdio.h>

int main(void)
{

	int j, score[6];
	printf("Enter scores: \n");

	for (j = 0; j < 6; j++)
	{
	scanf("%d", &score[j]);
	}

	int i;
	for (i = 5; i >= 0; i--)
	{
	printf("Index %d in the Array contains %d \n", i, score[i]);

	}
		

	{
	printf("Sum = %i \n", i);
	}

	return (0);
}

