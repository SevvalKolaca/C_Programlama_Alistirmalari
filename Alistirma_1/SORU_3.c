#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, c;
	double sum;
	char op;

	printf("Enter the first number -> ");
	scanf_s("%d", &a);
	printf("Enter the second number -> ");
	scanf_s("%d", &b);
	printf("Enter the third number -> ");
	scanf_s("%d", &c);

	printf("Choose an operator (+,-,*,/) -> ");
	scanf_s(" %c", &op);

	if (op == '+')
		sum = a + b + c;
	else if (op == '-')
		sum = a - b - c;
	else if (op == '*')
		sum = a * b * c;
	else
		sum = (double) a / b / c;
	
	printf("The result -> %.2lf", sum);


	printf("\n\n");
	system("pause");
}