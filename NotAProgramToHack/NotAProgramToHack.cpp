// NotAProgramToHack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <string>
#include <random>

int main()
{
	short	our_short = 1234;
	int		our_int = 123456789;
	float	our_float = 123.456f;
	double	our_double = 12.3456789;


	std::string ourString = "ThisIsNotAString";
	char ourCharArray[256] = "This is a pretty big char array";


	int*	ptr_to_int					=	&our_int;
	int**	ptr_to_ptr_to_int			=	&ptr_to_int;
	int***	ptr_to_ptr_to_ptr_to_int	=	&ptr_to_ptr_to_int;


	float*		ptr_to_float				=	&our_float;
	float**		ptr_to_ptr_to_float			=	&ptr_to_float;
	float***	ptr_to_ptr_to_ptr_to_float	=	&ptr_to_ptr_to_float;


	while (true)
	{
		std::cout << "Process ID: " << std::dec << GetCurrentProcessId() << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "our_short:	" << "(0x" << std::hex << &our_short << ")" << " = " << std::dec << our_short << std::endl;
		std::cout << "our_int:	" << "(0x" << std::hex << &our_int << ")" << " = " << std::dec << our_int << std::endl;
		std::cout << "our_float:	" << "(0x" << std::hex << &our_float << ")" << " = " << std::dec << our_float << std::endl;
		std::cout << "our_double:	" << "(0x" << std::hex << &our_double << ")" << " = " << our_double << std::endl;

		std::cout << std::endl;

		std::cout << "ourString:	" << "(0x" << std::hex << &ourString << ")" << " = " << ourString << std::endl;

		std::cout << std::endl;

		std::cout << "ourCharArray[256]:	" << "(0x" << std::hex << &ourCharArray << ")" << " = " << ourCharArray << std::endl;

		std::cout << std::endl;

		int random_int = std::rand();

		std::cout << "random_int" << " = " << std::dec << random_int << std::endl;

		std::cout << std::endl;

		std::cout << "ptr_to_int:			" << "(0x" << std::hex << &ptr_to_int << ")" << " = " << std::hex << "0x" << ptr_to_int << std::endl;
		std::cout << "ptr_to_ptr_to_int:		" << "(0x" << std::hex << &ptr_to_ptr_to_int << ")" << " = " << std::hex << "0x" << ptr_to_ptr_to_int << std::endl;
		std::cout << "ptr_to_ptr_to_ptr_to_int:	" << "(0x" << std::hex << &ptr_to_ptr_to_ptr_to_int << ")" << " = " << std::hex << "0x" << ptr_to_ptr_to_ptr_to_int << std::endl;

		std::cout << std::endl;

		std::cout << "ptr_to_float:			" << "(0x" << std::hex << &ptr_to_float << ")" << " = " << std::hex << "0x" << ptr_to_float << std::endl;
		std::cout << "ptr_to_ptr_to_float:		" << "(0x" << std::hex << &ptr_to_ptr_to_float << ")" << " = " << std::hex << "0x" << ptr_to_ptr_to_float << std::endl;
		std::cout << "ptr_to_ptr_to_ptr_to_float:	" << "(0x" << std::hex << &ptr_to_ptr_to_ptr_to_float << ")" << " = " << std::hex << "0x" << ptr_to_ptr_to_ptr_to_float << std::endl;

		std::cout << std::endl;

		std::cout << "------------" << std::endl;

		std::cin.get();
	}

	return 0;
}