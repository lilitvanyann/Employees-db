#pragma once
#include <string>
class Employee{

private:
	int id;
	std::string name;
	int salary;
	bool status;

public:
	Employee(int id, std::string name, int salary);

	int getId()const;
	std::string getName()const;
	int getSalary()const;
	bool getStatus()const;
	void setStatus(bool t);
	void promote(int bonus);
	void fire();
	bool isActive()const;

};

