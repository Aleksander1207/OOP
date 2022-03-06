#pragma once
#include "Employee.hpp"

class Team {
	private:
		char* name = nullptr;
		Employee* employees;
		size_t numberEmployees;
	public:
		Team(const char* name, Employee* employees, size_t numberEmployees);
		~Team();

		const char* getName() const;
		void setName(const char* name);
};