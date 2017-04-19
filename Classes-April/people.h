#pragma once


class PersonalData
{
private:
	short age;
	std::string name;
	std::string sex;

public:
	void setAge(short value);
	void setName(std::string name_);
	void setSex(std::string sex_);

	short getAge();
	std::string getName();
	std::string getSex();

};