#pragma once


class PersonalData
{
private:
	short age;
	std::string name;
	std::string sex;

public:
	PersonalData(); //this is constructor - it defines for example age at the time of execution.
	~PersonalData(); // this is destructor 
	void setAge(short);
	void setName(std::string);
	void setSex(std::string);

	short getAge();
	std::string getName();
	std::string getSex();

};