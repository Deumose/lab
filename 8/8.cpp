// 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	double x1, x2, rez;
	char z;
	std::cout << "vvedite virashinie" << std::endl;
	std::cin >> x1 >> z >> x2;
	switch (z) {
	case '-':
		rez = x1 - x2;
		std::cout << rez;
		break;
	case '+':
		rez = x1 + x2;
		std::cout << rez;
		break;
	case '/':
		rez = x1 / x2;
		std::cout << rez;
		break;
	case '*':
		rez = x1 * x2;
		std::cout << rez;
		break;
	default:
		std::cout << "vi vveli chto-to ne taak..";
			break;
	}

}

