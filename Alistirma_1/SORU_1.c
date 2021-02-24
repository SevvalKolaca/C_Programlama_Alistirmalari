#include <stdio.h>
#include <stdlib.h>

#define SIZE 21

main()
{
	int i, j, A[SIZE], temp, x;

	printf("EXAM SCORES\n");
	printf("-----------\n\n"); 

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter %d. student's exam score -> ", i + 1);
		scanf_s("%d", &A[i]);
	}

	for (i = 1; i <= SIZE - 1; i++)
	{
		for (j = 0; j <= SIZE - 2; j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
	printf("\nEXAM SCORES WITH LETTER GRADES\n");
	printf("-----------\n");

	x = 1;
	for (i = SIZE - 1 ; i >=0; i--)
	{
		printf("%d -> %d ", x, A[i]);
		if (A[i] <= 100 && A[i] > 80)
			printf("'AA'\n");
		else if (A[i] < 81 && A[i] > 70)
			printf("'BA'\n");
		else if (A[i] < 71 && A[i] > 62)
			printf("'BB'\n");
		else if (A[i] < 63 && A[i] > 54)
			printf("'CB'\n");
		else if (A[i] < 55 && A[i] > 49)
			printf("'CC'\n");
		else if (A[i] < 50 && A[i] > 44)
			printf("'DC'\n");
		else if (A[i] < 45 && A[i] > 34)
			printf("'DD'\n");
		else
			printf("'FF'\n");
		x++;
	}

	printf("\n\n");
	system("pause");
}