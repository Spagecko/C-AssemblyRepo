// ASM1assignment.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;
using namespace std;


int ASMcalcDrinks(short a, short b)
{ 
	short priceOFDrinks = 4; 
	short priceOfSandwitchs = 7;
	short storage1;
	short storage2; 
	short storage3; 
	_asm
	{
		mov ax, priceOFDrinks
		mov bx, a
		imul bx
		mov storage1, ax

		mov ax , priceOfSandwitchs 
		mov bx, a
		imul bx 
		add ax, storage1

		
	}
	
	

}
int main()
{
	short numOfDrinks = 3; 
	short numOfSandwitchs = 3; 

	std::cout << ASMcalcDrinks(numOfDrinks, numOfSandwitchs)<< std::endl;
	getchar();


    return 0;
}


