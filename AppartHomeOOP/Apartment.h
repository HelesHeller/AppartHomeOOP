#pragma once
#include "Human.h"
class Apartment
{
private:
	char* name;
	Human* residents;
	int numResidents;
	int capacity;
public:
	Apartment();
	Apartment(const char* name);
	Apartment(const Apartment& other);
	~Apartment();

	const char* getName() const;
	int getNumResidents() const;

	void addResident(const char* name);
	void removeResident(int index);
	void printInfo() const;



};

