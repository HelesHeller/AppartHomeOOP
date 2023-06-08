#include<Windows.h>
#include<iostream>
#include "House.h"

using namespace std;


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



    House house;

    // Додавання квартир до будинку
    house.addApartment("Квартира 1");
    house.addApartment("Квартира 2");
    house.addApartment("Квартира 3");

    // Додавання мешканців до квартир
    house.addResident(0, "Іванов Іван");
    house.addResident(0, "Петров Петро");
    house.addResident(1, "Сидорова Олена");
    house.addResident(2, "Коваленко Марія");

    // Виведення інформації про будинок
    house.printInfo();

    return 0;


}