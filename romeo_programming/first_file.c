#include <stdio.h>

/**
* main - main funtion
* Return: Always 0
*/

int main(void)
{
	int i = 3;
	int j = 5;
	int sum = i + j;

	if (sum < 0)
	{
		printf("It is a negative number");
	}
	else if (sum > 0)
	{
		printf("It is a positive number");
	}
	else
		printf("It is zero");
 
	return (0)
}
