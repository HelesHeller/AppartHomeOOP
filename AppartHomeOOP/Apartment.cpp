#include "Apartment.h"
#include<iostream>
#include<cstring>

using namespace std;


Apartment::Apartment() {
	name = nullptr;
	residents = nullptr;
	numResidents = 0;
	capacity = 0;
}
Apartment::Apartment(const char* name) {
	int lenght = strlen(name) + 1;
	this->name = new char[lenght];
	strcpy_s(this->name, lenght, name);
	residents = nullptr;
	numResidents = 0;
	capacity = 0;
}
Apartment::Apartment(const Apartment& other) {
	int lenght = strlen(name) + 1;
	name = new char[lenght];
	strcpy_s(this->name, lenght, other.name);
	numResidents = other.numResidents;
	capacity = other.capacity;

	residents = new Human[capacity];
	for (int i = 0; i < numResidents; i++) {
		residents[i] = other.residents[i];
	}
}
Apartment::~Apartment() {
	delete[] name;
	delete[] residents;
}

const char* Apartment::getName() const {
	return name;
}
int Apartment::getNumResidents() const {
	return numResidents;
}

void Apartment::addResident(const char* name) {
	if (numResidents == capacity) {
		int newCapacity = (capacity == 0) ? 1 : capacity * 2;
		Human* newResidents = new Human[newCapacity];
		for (int i = 0; i < numResidents; i++) {
			newResidents[i] = residents[i];
		}
		delete[]residents;
		residents = newResidents;
		capacity = newCapacity;

	}
	residents[numResidents] = Human(name);
	numResidents++;

}
void Apartment::removeResident(int index) {
	if (index < 0 || index >= numResidents) {
		return;
	}

	for (int i = index; i < numResidents - 1; i++) {
		residents[i] = residents[i + 1];
	}

	numResidents--;
}
void Apartment::printInfo() const {
	cout << "Квартира: " << name << endl;
	cout << "Мешканці:" << endl;
	for (int i = 0; i < numResidents; i++) {
		cout << "- " << residents[i].getName() << endl;
	}
	cout << endl;
}