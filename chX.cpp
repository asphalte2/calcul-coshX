#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
using namespace std;


int main()
{
	std::setlocale(LC_ALL, "ru_RU.UTF-8");

	double X;

	do 
	{

		std::cout << "вводите эначение X:" << std::endl;

		std::cin >> X;

		if (std::fabs(X) >= 1) 
		
		{
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

	double Y;

	Y = 0;


	switch (выбор)
	{

	case 1: 
	{

		double eps;

		std::cout << "Введите точность вычислений eps : " << std::endl;
		std::cin >> eps;

		double U = 1;
			int K = 0;

			while (fabs(U) > eps) 
			{

				Y += U;

				K++;

				U = U * (X * X) / ((2 * K - 1) * (2 * K));
			}

			break;

	}

	case 2: {

		int n;

		std::cout<< "Введите число первых членов ряда n: "<< std::endl;

		std::cin >> n;
		 
		double U = 1;
		
		for (int K = 1; K <= n; K++) // methode de calaul par le nombre de premiers terme
		
		{

			Y += U;

			U= U * (X * X) / ((2 * K - 1)*(2 * K));

		}

		break;
	}
	case 3: 

		// Calcul automatique direct via la bibliothèque standard cmath

		Y = cosh(X);

		break;

	default:

		std::cout << "Ошибка: неверный выбор в меню!" << std::endl;

		return 1; // Arrêt du programme en cas de mauvaise touche

		break;
	}
	//std::cout << fixed << std::setprecision(6);

	std::cout << "\nРезультат вычисления y = " << Y << std::endl;

	return 0;



}