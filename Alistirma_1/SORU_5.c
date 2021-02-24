#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, i;

	printf("Enter last number -> ");
	scanf_s("%d", &x);

	for (i = 1; i <= x; i++)
	{
		if (i % 3 == 0 || i % 13 == 0)
			printf("%d\t", i);
	}

	printf("\n\n");
	system("pause");
}