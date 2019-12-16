// 10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
	int  n;
	double rez, x, i;
	std::cin >> x >> n;
	rez = x;
	i = abs(n);
	{
		while (i > 1) {
			rez = rez * x;
			i--;
		}
		if (n < 1)
		{
			std::cout << (1 / rez);
		}
		else std::cout << rez;
	}
}


