#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, j, sum;

	printf("Perfect numbers between 1 and 100");
	printf("\n-----------------------------------\n");

	for (i = 1; i <= 100; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum = sum + j;
			}
		}
		if (sum == i)
			printf("%d\n", i);
	}

	printf("\n\n");
	system("pause");
}