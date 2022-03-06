#include "Team.hpp"
#include "Employee.hpp"
#include <cstring>
#pragma warning (disable : 4996)

Team::Team(const char* name, Employee* employees, size_t numberEmployees) {
	this->setName(name);
	
	this->employees = new Employee[numberEmployees];
	for (size_t i = 0; i < numberEmployees; i++) {
		this->employees[i] = Employee(employees[i].getName(), 200, nullptr);
	}
	this->numberEmployees = numberEmployees;
}

Team :: ~Team() {
	if (this->name != nullptr) {
		delete[] this->name;
	}

	delete[] this->employees;
}

const char* Team::getName() const {
	return this->name;
}

void Team::setName(const char* name) {
	if (this->name != nullptr) {
		delete[] this->name;
	}

	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

