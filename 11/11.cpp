// 11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int x, n, rez;
	std::cin >> x;
	rez = 1;
	while (x > 0) {
		rez = rez * (x);
		x--;
	}
	std::cout << rez;

}

