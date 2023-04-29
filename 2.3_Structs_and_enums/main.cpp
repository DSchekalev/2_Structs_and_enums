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
	std::cout << "Город: " << anyAdress->nameOfCity << std::endl;
	std::cout << "Улица: " << anyAdress->nameOfStreet << std::endl;
	std::cout << "Номер дома: " << anyAdress->numberOfHouse << std::endl;
	std::cout << "Номер квартиры: " << anyAdress->numberOfFlat << std::endl;
	std::cout << "Индекс: " << anyAdress->postcode << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	adress adress1 = { "Москва", "Арбат", 12, 8, 123456 };
	adress adress2 = { "Ижевск", "Пушкина", 59, 143, 953769 };
	print_adress(&adress1);
	std::cout << std::endl;
	print_adress(&adress2);
}