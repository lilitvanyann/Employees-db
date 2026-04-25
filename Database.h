#pragma once
#pragma once
#include "Employee.h"
#include <vector>
#include <iostream>

class Database{

private:
	std::vector <Employee> employees;

public:

	void addEmployee(int id, std::string name, int salary);

	void FireEmployee(int id);

	Employee* FindEmployee(int id);

	void AllEmployees()const;

	void ActiveEmployees()const;

	void FormerEmployees()const;

	void PromoteEmployee(int id,int bonus);

};

