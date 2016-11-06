#pragma once

#include <Math.h>
#include <iostream>

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>


class Greedy
{
public:
	Greedy();
	~Greedy();

	int main(void)
	{
		MoneyChange();
	}

	public:
		int MoneyChange(void)
		{
			float input = 0.0f;
			float rasult = 0;

			int var = 0;

			int twentyFive = 25;
			int ten = 10;
			int five = 5;
			int one = 1;

			int counter = 0;



			//25¢, 10¢, 5¢ та 1¢. 

			do
			{
				printf("\n");
				printf("O hai! How much change is owed?\n");

				scanf_s("%f", &input);

				printf("%.1f\n", input);

				if (input == 0)
					return 0;

			} while (input < 1 || input != 0);

			var = input * 100;

			while (var % twentyFive == 0)
			{
				//if (var % twentyFive == 0)
				//{
				//	counter++;
				//}
				counter++;
			}

			while (var % ten == 0)
			{
				//if (var % ten == 0)
				//{
				//	counter++;
				//}
				counter++;
			}

			while (var % five == 0)
			{
				//if (var % five == 0)
				//{
				//	counter++;
				//}
				counter++;
			}

			while (var % one == 0)
			{
				//if (var % one == 0)
				//{
				//	counter++;
				//}
				counter++;
			}
			
			
			printf("Count of cents: %d \n", counter);
		}
};

