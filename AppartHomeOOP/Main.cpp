#include<Windows.h>
#include<iostream>
#include "House.h"

using namespace std;


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



    House house;

    // ��������� ������� �� �������
    house.addApartment("�������� 1");
    house.addApartment("�������� 2");
    house.addApartment("�������� 3");

    // ��������� ��������� �� �������
    house.addResident(0, "������ ����");
    house.addResident(0, "������ �����");
    house.addResident(1, "�������� �����");
    house.addResident(2, "��������� ����");

    // ��������� ���������� ��� �������
    house.printInfo();

    return 0;


}