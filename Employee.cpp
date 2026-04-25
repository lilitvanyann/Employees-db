#include "Employee.h"
#include <string>

	Employee::Employee(int id, std::string name, int salary)
		: id(id), name(name), salary(salary), status(true) {
	}

	int Employee::getId() const {
		return id;
	}
	std::string Employee::getName() const{
		return name;
	}
	int Employee::getSalary() const{
		return salary;
	}
	bool Employee::getStatus() const{
		return status;
	}
	void Employee::setStatus(bool t) {
		 status = t;
	}

	void Employee::promote(int bonus) {
		salary += bonus;
	}
	void Employee::fire() {
		status = false;
	}
	bool Employee::isActive() const{
		return status;
	}



