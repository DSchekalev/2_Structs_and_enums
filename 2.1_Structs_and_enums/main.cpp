#include <iostream>
#include <string>

enum class months
{
	January = 1,
	February = 2,
	March = 3,
	April = 4,
	May = 5,
	June = 6,
	July = 7,
	August = 8,
	September = 9,
	October = 10,
	November = 11,
	December = 12
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	int number;

	do
	{
		std::cout << "Введите номер месяца (0 для выхода): ";
		std::cin >> number;

		if (number == 0)
		{
			std::cout << "До свидания" << std::endl;
			break;
		}
		else if (number < 0 || number > 12)
		{
			std::cout << "Неправильный номер!" << std::endl;
		}
		else
		{
			months month = static_cast<months> (number);

			switch (month)
			{
			case (months::January): std::cout << "Январь" << std::endl;
				break;
			case (months::February): std::cout << "Февраль" << std::endl;
				break;
			case (months::March): std::cout << "Март" << std::endl;
				break;
			case (months::April): std::cout << "Апрель" << std::endl;
				break;
			case (months::May): std::cout << "Май" << std::endl;
				break;
			case (months::June): std::cout << "Июнь" << std::endl;
				break;
			case (months::July): std::cout << "Июль" << std::endl;
				break;
			case (months::August): std::cout << "Август" << std::endl;
				break;
			case (months::September): std::cout << "Сентябрь" << std::endl;
				break;
			case (months::October): std::cout << "Октябрь" << std::endl;
				break;
			case (months::November): std::cout << "Ноябрь" << std::endl;
				break;
			case (months::December): std::cout << "Декабрь" << std::endl;
				break;
			}
		}
	} while (true);
}