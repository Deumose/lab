
#include <iostream>

int main()
{
	double x0, v0, t, xt;
	const double a = -9.8;
	std::cin >> x0 >> v0 >> t;
	xt = x0 + v0 * t + (a * t * t) / 2;
	std::cout << xt;
	return 0;


}

