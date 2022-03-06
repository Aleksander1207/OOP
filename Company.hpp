#pragma once
#include "Team.hpp"

class Company {
	private:
		char* name;
		Team* teams;
		size_t numberTeams;
	public:
		Company(const char* name, Team* teams, size_t numberTeams);
		~Company();

		const char* getName() const;
		void setName(const char* name);
};