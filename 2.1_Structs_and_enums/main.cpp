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
		std::cout << "������� ����� ������ (0 ��� ������): ";
		std::cin >> number;

		if (number == 0)
		{
			std::cout << "�� ��������" << std::endl;
			break;
		}
		else if (number < 0 || number > 12)
		{
			std::cout << "������������ �����!" << std::endl;
		}
		else
		{
			months month = static_cast<months> (number);

			switch (month)
			{
			case (months::January): std::cout << "������" << std::endl;
				break;
			case (months::February): std::cout << "�������" << std::endl;
				break;
			case (months::March): std::cout << "����" << std::endl;
				break;
			case (months::April): std::cout << "������" << std::endl;
				break;
			case (months::May): std::cout << "���" << std::endl;
				break;
			case (months::June): std::cout << "����" << std::endl;
				break;
			case (months::July): std::cout << "����" << std::endl;
				break;
			case (months::August): std::cout << "������" << std::endl;
				break;
			case (months::September): std::cout << "��������" << std::endl;
				break;
			case (months::October): std::cout << "�������" << std::endl;
				break;
			case (months::November): std::cout << "������" << std::endl;
				break;
			case (months::December): std::cout << "�������" << std::endl;
				break;
			}
		}
	} while (true);
}