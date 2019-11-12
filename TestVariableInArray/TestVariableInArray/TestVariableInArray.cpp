// TestVariableInArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>


int main()
{
	std::string name;
	std::cout << "What is your name? ";
	getline(std::cin, name);
	int name_length = name.size();
	char name_array[name_length];
	name_array[0] = 'j';
	std::cout << "Hello, " << name << "!\n";
	std::cout << name_array[0] << "!\n";
    return 0;
}

