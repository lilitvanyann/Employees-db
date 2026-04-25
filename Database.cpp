#include "Database.h"
#include "Employee.h"
#include <iostream>
#include <vector>

	void Database::addEmployee(int id, std::string name, int salary) {
		employees.push_back(Employee(id, name, salary));
	}

	void Database::FireEmployee(int id) {
		Employee* emp = FindEmployee(id);
		if (emp != nullptr)
			emp->fire();
	}

	Employee* Database::FindEmployee(int id) {
		for (auto it = employees.begin(); it != employees.end(); ++it) {
			if (it->getId() == id)
				return &(*it);
		}

		return nullptr;
	}

	void Database::AllEmployees()const {
		for (const auto& emp : employees) {
			std::cout <<emp.getId()<<" : " << emp.getName() << " : " << emp.getSalary() << std::endl;
		}
	}

	void Database::ActiveEmployees()const {
		for (const auto& emp : employees) {
			if (emp.isActive()) {
				std::cout << emp.getId() << " : " << emp.getName() << " : " << emp.getSalary() << std::endl;
			}
		}
	}

	void Database::FormerEmployees() const{
		for (const auto& emp : employees) {
			if (!emp.isActive()) {
				std::cout << emp.getId() << " : " << emp.getName() << " : " << emp.getSalary() << std::endl;
			}
		}
	}

	void Database::PromoteEmployee(int id, int bonus) {
		Employee* emp = FindEmployee(id);
		if (emp != nullptr && emp->isActive()) {
			emp->promote(bonus);
		}

	}
