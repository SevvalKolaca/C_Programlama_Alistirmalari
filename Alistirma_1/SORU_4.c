#include <stdio.h>
#include <stdlib.h>

main()
{
	char x; int t;

	for (t = 1; t <= 5; t++)
	{
		printf("Choose one of this characters [S,s] [E,e] [I,i] [A,a] [K,k] -> ");
		scanf_s(" %c", &x);

		switch (x) {

		case 'S':
		case 's':
			printf("SAMSUN\n\n");
			break;
		case 'E':
		case 'e':
			printf("ESKISEHIR\n\n");
			break;
		case 'I':
		case 'i':
			printf("ISTANBUL\n\n");
			break;
		case 'A':
		case 'a':
			printf("ANKARA\n\n");
			break;
		case 'K':
		case 'k':
			printf("KASTAMONU\n\n");
			break;
		}
	}
	
	printf("\n\n");
	system("pause");
}