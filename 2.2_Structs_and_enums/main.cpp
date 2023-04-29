#include <iostream>
#include <string>

struct bankAccount
{
	int accountNumber;
	std::string accountHolder;
	double accountBalance;
};

void changeBalance(bankAccount* user)
{
	std::cout << "¬ведите новый баланс: ";
	std::cin >> user->accountBalance;
	std::cout << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	bankAccount user;
	std::cout << "¬ведите номер счЄта: ";
	std::cin >> user.accountNumber;
	std::cout << std::endl;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> user.accountHolder;
	std::cout << std::endl;
	std::cout << "¬ведите баланс: ";
	std::cin >> user.accountBalance;
	std::cout << std::endl;
	changeBalance(&user);
	std::cout << "¬аш счет: " << user.accountHolder << ", " << user.accountNumber << ", " << user.accountBalance;
}