#include "House.h"

#include<iostream>

House::House() {
    apartments = nullptr;
    numApartments = 0;
    capacity = 0;
}
House::House(const House& other) {
    numApartments = other.numApartments;
    capacity = other.capacity;

    apartments = new Apartment[capacity];
    for (int i = 0; i < numApartments; i++) {
        apartments[i] = other.apartments[i];

    }
}
House::~House() {
    delete[] apartments;

}
void House::addApartment(const char* name) {
    if (numApartments == capacity) {
        // Збільшення розміру масиву квартир
        int newCapacity = (capacity == 0) ? 1 : capacity * 2;
        Apartment* newApartments = new Apartment[newCapacity];
        for (int i = 0; i < numApartments; i++) {
            newApartments[i] = apartments[i];
        }
        delete[] apartments;
        apartments = newApartments;
        capacity = newCapacity;
    }

    apartments[numApartments] = Apartment(name);
    numApartments++;
}
void House::removeApartment(int index) {
    if (index < 0 || index >= numApartments) {
        return;
    }

    for (int i = index; i < numApartments - 1; i++) {
        apartments[i] = apartments[i + 1];
    }

    numApartments--;
}

// Додавання мешканця до квартири
void House::addResident(int apartmentIndex, const char* name) {
    if (apartmentIndex < 0 || apartmentIndex >= numApartments) {
        return;
    }

    apartments[apartmentIndex].addResident(name);
}

// Видалення мешканця з квартири
void House::removeResident(int apartmentIndex, int residentIndex) {
    if (apartmentIndex < 0 || apartmentIndex >= numApartments) {
        return;
    }

    apartments[apartmentIndex].removeResident(residentIndex);
}

// Виведення інформації про будинок
void House::printInfo() const {
    std::cout << "Будинок має " << numApartments << " квартир(и):" << std::endl;
    for (int i = 0; i < numApartments; i++) {
        apartments[i].printInfo();
    }
}