//
// CS50.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include "Mario.h"
#include "Greedy.h"

int main(void)
{	
	Mario mario = Mario();
	Greedy greedy = Greedy();

	//mario.PrintTriangle();
	greedy.MoneyChange();
	_getch();

    return 0;
}
