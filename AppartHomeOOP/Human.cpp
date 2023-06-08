#include "Human.h"
#include<cstring>

//Default construct
Human::Human() {
	name = nullptr; 
}
//
Human::Human(const char* name) {
	int lenght = strlen(name) + 1;
	this->name = new char[lenght];
	strcpy_s(this->name,lenght, name);

}
//ÑpyConstruct
Human::Human(const Human& other) {
	int lenght = strlen(other.name) + 1;
	name = new char[lenght];
	strcpy_s(name, lenght, other.name);
}
//Destruct
Human::~Human() {
	delete[] name;
}

const char* Human::getName() const {
	return name;
}