// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <math.h>

int main()
{
	double a, b, c, x1, x2, D;
	x1 = 0; x2 = 0;
	std::cin >> a >> b >> c;
	if ((a != 0))
	{
		D = pow(b, 2) - 4 * a * c;
		if (D > 0) 
		{
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			std::cout << x1 << std::endl << x2;
			return 0;
		}
		if (D == 0)
		{
			x1 = -b / (2 * a);
			std::cout << x1;
			return 0;
		}
		if (D < 0) 
		{
			std::cout << "kornei net";              
			return 0;
		}
	}
	else 
	{
		if (b != 0)
		{
			x1 = -c / b;
			std::cout << x1;
		}
		else //0*x^2 + 0*x + c = 0
		{
			if (c != 0) 
			{
				std::cout << "Resheniy net";
			}
			else 
			{
				std::cout << "Resheniy beskonechno mnogo";
			}
		}
	}
}
