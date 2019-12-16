// 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <math.h>

int main()
{
	std::cout << "kakie dannie vi vvodite? dliny storon - 1, koordinati - 2 "<< std::endl;
	int x = 0;
	double S = 0;
	std::cin >> x;
	if (x == 1) {
		double a = 0, b = 0, c = 0;
		std::cout << "vvedite dliny storon" << std::endl;
		std::cin >> a >> b >> c;
		if ((((a + b) > c) & ((a + c) > b)) & ((b + c) > a)) {
			double p = 0;
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			std::cout << "S= " << S;
			return 0;
		}
		else std::cout << "treygolnik ne sushestvuet";
	}
	else {
		std::cout << "vvedite koordinaty vershin poocheredno" << std::endl;
		double x1=0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3;
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		S = abs((((x1 - x3) * (y2 - y3)) - ((x2 - x3) * (y1 - y3)))*1/2);
		std::cout << "S= " << S;
	}
}

