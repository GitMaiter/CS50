//
// CS50.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include "Mario.h"

int main(void)
{	
	Mario mario = Mario();

	mario.PrintTriangle();

	_getch();

    return 0;
}
