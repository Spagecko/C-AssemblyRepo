// ASM2assignmet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;

int calcAreaOfTriangle(int s1,int s2, int s3, int h1)
{
	int two = 2; 
	int storage1;
	_asm 
	{
		mov eax, h1
		imul eax, s3
		mov storage1, eax
		mov edx, two 
		xor eax, edx
		shr eax, 1
		
		

	}	
}
int ParamOfTriangle(int s1, int s2, int s3 )
{
	int two = 2;
	int storage1;
	_asm
	{
		mov eax, s1
		add eax, s2 
		add eax, s3 
	



	}
}
int areaoOfASquare(int b,int  h)
{

	_asm
	{
		mov eax, b 
		imul eax, h
	}
}
int ParamOfaSquare(int b, int h)
{
	int two = 2;
	int storage1;
	_asm
	{
		mov eax, b
		imul eax, two
		mov storage1, eax

		mov eax, h
		imul eax,two 
		add eax, storage1
	}
}


int main()

{
	int side1 = 7; 
	int side2 = 9;
	int side3 = 14; 
	int height = 10; 
	std::cout << calcAreaOfTriangle(side1, side2, side3, height) << endl; 
	std::cout << ParamOfTriangle(side1, side2, side3 ) << endl;
	int sside1 = 25;
	int sside2 = 10; 
	std::cout << areaoOfASquare(25, 10)<<endl; 
	std::cout << ParamOfaSquare(sside1, sside2) << endl;
	getchar();

    return 0;
}

