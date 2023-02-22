#include <stdio.h>

/**
* main - print even numbers between 0 and 30
* Return: 0 (Success)
*/

int main(void)
{
	int even_num = 1;
	
	for (even_num = 1 ; even_num <= 30 ; even_num++)

			if (even_num %2 == 0)

			{
			printf("%d", even_num);
			}
		
			if (even_num == 30)
	
		{
			putchar('.');
			putchar(' ');
		}

		return (0);

}
