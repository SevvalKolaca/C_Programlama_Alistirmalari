#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, sum = 0;

	while (1)
	{
		printf("Enter a number -> ");
		scanf_s("%d", &x);

		if (x % 2 == 0)
		{
			sum = sum + x;
			printf("Sum -> %d\n\n", sum);
		}
		else
		{
			sum = sum * x;
			printf("Sum -> %d\n\n", sum);
			break;
		}
	}
	
	printf("\n\n");
	system("pause");
}