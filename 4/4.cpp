// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b; 
	//c = a;
	//a = b;
	//b = c;
	a = a + b;
	b = a - b;
	a = a - b;
	std::cout << a << " " << b; 
}


