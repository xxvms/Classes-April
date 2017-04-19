#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include "people.h"

void PersonalData::setAge(short value)
{
	if (value < 0)

		age = 0;

	else
		age = value;
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