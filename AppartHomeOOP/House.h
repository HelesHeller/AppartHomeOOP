#pragma once
#include "Apartment.h"
class House
{
private:
	Apartment* apartments;
	int numApartments;
	int capacity;
public:
	House();
	House(const House& other);
	
	~House();

	void addApartment(const char* name);
	void removeApartment(int index);
	void addResident(int apartmentIndex, const char* name);
	void removeResident(int apartmentIndex, int residentIndex);
	void printInfo() const;
};

