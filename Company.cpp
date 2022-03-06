#include "Company.hpp"
#include "Team.hpp"
#include<cstring>
#pragma warning (disable : 4996)

Company::Company(const char* name, Team* teams, size_t numberTeams) {
	this->setName(name);

	for (size_t i = 0; i < numberTeams; i++) {
		this->teams[i] = Team(teams[i].getName(), nullptr, 0);
	}
	this->numberTeams = numberTeams;
}

Company::~Company() {
	if (this->name != nullptr) {
		delete[] this->name;
	}

	delete[] this->teams;
}

const char* Company::getName() const {
	return this->name;
}

void Company::setName(const char* name) {
	if (this->name != nullptr) {
		delete[] this->name;
	}

	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}