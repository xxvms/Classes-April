// Classes-April.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "people.h"




int main()
{

	PersonalData person;

	person.setAge(20);
	person.setName("Ola-Fasola");
	person.setSex("Female");

	std::cout << "Name: " << person.getName() << std::endl;
	std::cout << "Sex: " << person.getSex() << std::endl;
	std::cout << "Print age: " << person.getAge() << std::endl;

	system("pause");
    return 0;
}

