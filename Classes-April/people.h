#pragma once


class PersonalData
{
private:
	short age;
	std::string name;
	std::string sex;

public:
	void setAge(short);
	void setName(std::string);
	void setSex(std::string);

	short getAge();
	std::string getName();
	std::string getSex();

};