// 12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int n, i = 2, k = 0;
	std::cin >> n;
	if (n > 0) {
		for (i; n >= i-1; i++) {
			if (n % i == 0) {
				k++;
				break;
			}
			
		}

		if (k == 0) {
			std::cout << "prostoe";
		}
		else std::cout << "sostavnoe";
	}
	else std::cout << "Vi vveli otritcatelnoe chislo";
}


				


