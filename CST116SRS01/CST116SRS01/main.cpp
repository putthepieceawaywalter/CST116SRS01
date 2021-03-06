// CST116SRS01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cassert> // This is used for the assert statement


int main()
{
	std::size_t sizeBool{ sizeof(bool) };
	std::size_t sizeChar{ sizeof(char) };
	std::size_t sizeUnsignedChar{ sizeof(unsigned char) };
	std::size_t sizeSignedChar{ sizeof(signed char) };
	std::size_t sizeUnsignedShort{ sizeof(unsigned short) };
	std::size_t sizeShort{ sizeof(short) };
	std::size_t sizeSigned{ sizeof(signed) };
	std::size_t sizeUnsigned{ sizeof(unsigned) };
	std::size_t sizeInt{ sizeof(int) };
	std::size_t sizeSizeT{sizeof(std::size_t) };
	std::size_t sizeSignedLong{ sizeof(signed long) };
	std::size_t sizeUnsignedLong{ sizeof(unsigned long) };
	std::size_t sizeLong{ sizeof(long) };
	std::size_t sizeFloat{ sizeof(float) };
	std::size_t sizeDouble{ sizeof(double) };
	std::size_t sizeLongDouble{ sizeof(long double) };

	assert(sizeof(char) == 1);
	assert(sizeof(bool) == 1); 
	assert(sizeof(float) == 4);
	assert(sizeof(double) == 8);
	assert(sizeof(short) == 2);
	assert(sizeof(long) == 4);
	assert(sizeof(long double) == 8);


	/*This is just to test variables not part of assignment 


	std::cout << sizebool << std::endl;
	std::cout << sizechar << std::endl;
	std::cout << sizeUnsignedChar << std::endl;
	std::cout << sizeSignedChar << std::endl;
	std::cout << sizeUnsignedShort << std::endl;
	std::cout << sizeShort << std::endl;
	std::cout << sizeSigned << std::endl;
	std::cout << sizeUnsigned << std::endl;
	std::cout << sizeInt << std::endl;
	std::cout << sizeSizeT << std::endl;
	std::cout << sizeSignedLong << std::endl;
	std::cout << sizeUnsignedLong << std::endl;
	std::cout << sizeLong << std::endl;
	std::cout << sizeFloat << std::endl;
	std::cout << sizeDouble << std::endl;
	std::cout << sizeLongDouble << std::endl;
	*/
	

    return 0;
}

