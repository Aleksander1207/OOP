#pragma once
class Employee {
	private: 
		char* name = nullptr; 
		double salary;
		Employee* boss;
	public:
		Employee();
		Employee(const char* name, double salary, Employee* boss);
		~Employee();

	const char* getName() const;
	void setName(const char* name);
};