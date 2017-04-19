#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include "people.h"

void PersonalData::setAge(short age)
{
	if (age < 0)

		this->age = 0; // this-> is an address to the class header

	else
		this->age = age;
}
void PersonalData::setName(std::string name_)
{
	name = name_;
}
void PersonalData::setSex(std::string sex_)
{
	sex = sex_;
}
short PersonalData::getAge()
{
	return age;
}
std::string PersonalData::getName()
{
	return name;
}
std::string PersonalData::getSex()
{
	return sex;
}