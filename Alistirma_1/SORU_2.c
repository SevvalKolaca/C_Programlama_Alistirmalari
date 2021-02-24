#include <stdio.h>
#include <stdlib.h>

main()
{
	int A[10], i, sum = 0;
	double percent, M;

	for (i = 1; i <= 7; i++)
	{
		printf("Enter %d. number -> ", i);
		scanf_s("%d", &A[i]);
		sum = sum + A[i];
	}
	printf("\nSum -> %d\n\n", sum);

	for (i = 1; i <= 7; i++)
	{
		percent =(double) A[i] * 100 / sum;
		printf("The percent of the %d. number -> %.2lf\n", i, percent);
	}

	if( sum != 100)
	{
		M = (double)100 - sum;
		if (M < 0)
			M = M * (-1);
		printf("\nError rate -> %.2lf %", M);
	}
	else
		printf("\n The  sum is 100. There is no error rate!");

	printf("\n\n");
	system("pause");
}