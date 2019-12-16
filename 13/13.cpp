// 13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

int main()
{
	int written_number, degree=0, counter=0, i;
	std::cin >> written_number;
	i = written_number;
	while (i <= written_number) {
		i = pow(2,degree);
		degree++;
		counter = counter + 1;
	}
	std::cout << counter -1;

}

