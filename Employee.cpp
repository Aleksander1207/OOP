#include "Employee.hpp"
#include<cstring>
#pragma warning (disable : 4996)

Employee::Employee() {}

Employee::Employee(const char* name, double salary, Employee* boss) {
	this->setName(name);
	this->salary = salary; 
	this->boss = boss;
}

Employee::~Employee() {
	if (this->name != nullptr) {
		delete[] this->name;
	}
}

const char* Employee::getName() const {
	return this->name;
}

void Employee::setName(const char* name) {
	if (this->name != nullptr) {
		delete[] this->name;
	}

	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}