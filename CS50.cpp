//
// CS50.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int main(void)
{	
	int var = 0;
	char ch = '##';
	do
	{
		printf("\n");
		printf("height: ");
		scanf_s("%d", &var);
		printf("\n");

		if (var == 0)
			return 0;

	} while (var < 1 || var > 23);


			for (int i = 0; i < var; i++)
			{
				for (int j = 0; j < var - i - 1; j++)
				{
					printf("%s", " ");
				}

				for (int k = 0; k < i + 2; k++)
				{
					printf("#");
				}
				printf("\n");
			}


	_getch();

    return 0;
}
