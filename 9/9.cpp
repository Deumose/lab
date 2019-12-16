// 9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

int main()
{
	int i = 0, mode = 0;
	setlocale(LC_ALL, "Russian");
	unsigned random = time(0);
	srand(random);
	std::cout << "Хотите ли включить режим отладки? 1-нет, 2-да" << std::endl;
	std::cin >> mode;
	do {
		int x = 0, x1 = 0;
		x = 0 + rand() % 101;
		if (mode == 2) {
			std::cout << "Случайное число (для отладки) = " << x << std::endl;
			std::cout << "Ключ:" << random << std::endl;
		}
		std::cout << "Введите кол-во попыток:" << std::endl;
		std::cin >> i;
		std::cout << "Испытайте вашу удачу и напишите число от 0 до 100:" << std::endl;
		while (i > 0) {
			std::cin >> x1;
			if (x1 == x) {
				std::cout << "Поздравляю! Вы угадали." << std::endl;
				break;
			}
			else {
				if (x1 > x) {
					std::cout << "Загаданное число меньше" << std::endl;
					i--;
					std::cout << "У вас осталось попыток:" << i << std::endl;
				}
				else {
					std::cout << "Загаданное число больше" << std::endl;
					i--;
					std::cout << "У вас осталось попыток:" << i << std::endl;
				}
			}
		}
		if (i <= 0) std::cout << "Вы проиграли! Загаданное число:" << x << std::endl << "Хотите попробовать снова? 1-Да 2-Нет" << std::endl;
		std::cin >> i;
	} while (i == 1);
}

