#include <iostream>
#include <string>

struct adress
{
	std::string nameOfCity;
	std::string nameOfStreet;
	int numberOfHouse;
	int numberOfFlat;
	int postcode;
};

void print_adress(adress* anyAdress)
{
	std::cout << "�����: " << anyAdress->nameOfCity << std::endl;
	std::cout << "�����: " << anyAdress->nameOfStreet << std::endl;
	std::cout << "����� ����: " << anyAdress->numberOfHouse << std::endl;
	std::cout << "����� ��������: " << anyAdress->numberOfFlat << std::endl;
	std::cout << "������: " << anyAdress->postcode << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	adress adress1 = { "������", "�����", 12, 8, 123456 };
	adress adress2 = { "������", "�������", 59, 143, 953769 };
	print_adress(&adress1);
	std::cout << std::endl;
	print_adress(&adress2);
}