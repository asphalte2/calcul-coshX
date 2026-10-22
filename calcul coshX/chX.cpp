#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
using namespace std;


int main()
{
	std::setlocale(LC_ALL, "ru_RU.UTF-8");

	double X;

	do {

		std::cout << "вводите эначение X:" << std::endl;

		std::cin >> X;

		if (std::fabs(X) >= 1) {
			std::cout << "Ошибка: значение x должно быть строго между -1 и 1!" << std::endl;
		}


	     } while (fabs(X) >= 1);

	



	int выбор;//choix de la methode de calcul

	std::cout << "\n=== МЕНЮ ВЫБОРА СПОСОБА ВЫЧИСЛЕНИЯ ===" << std::endl;
	std::cout << "1. С заданной погрешностью (eps)" << std::endl;
	std::cout << "2. С заданным числом первых членов ряда (n)" << std::endl;
	std::cout << "3. По аналитической формуле ch(x)" << std::endl;
	std::cout << "Ваш выбор (1-3): " << std::endl;

	std::cin >> выбор;

	//double Y;

	//switch (switch_on)
	//{
	//default:
	//	break;
	//}





}