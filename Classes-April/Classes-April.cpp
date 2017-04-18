// Classes-April.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


class PersonalData
{
private:
	short age;
	std::string name;
	std::string sex;

public:
	void setAge(short value) { age = value; }
	short getAge() { return age; }
	void setName(std::string name_) { name = name_;  }
	void setSex(std::string sex_) { sex = sex_; }
	std::string getName() { return name; }
	std::string getSex() { return sex; }

};

int main()
{

	PersonalData person;

	person.setAge(25);
	person.setName("Ola-Fasola");
	person.setSex("Female");

	std::cout << "Name: " << person.getName() << std::endl;
	std::cout << "Sex: " << person.getSex() << std::endl;
	std::cout << "Print age: " << person.getAge() << std::endl;

	system("pause");
    return 0;
}

