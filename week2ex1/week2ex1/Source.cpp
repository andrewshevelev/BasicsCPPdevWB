/*
* Напишите функцию, которая:
* называется Factorial
* возвращает int
* принимает int и возвращает факториал своего аргумента.
* Гарантируется, что аргумент функции по модулю не превышает 10.
* Для отрицательных аргументов функция должна возвращать 1.
*/

int Factorial(int n) {
	if (n <= 0) {
		return 1;
	}
	else {
		return n*Factorial(n-1);
	}
}

//#include <iostream>
//int main() {
//	int n = 1;
//	std::cout << Factorial(1) << std::endl;
//	std::cout << Factorial(2) << std::endl;
//	std::cout << Factorial(3) << std::endl;
//	std::cout << Factorial(4) << std::endl;
//	std::cout << Factorial(5) << std::endl;
//	std::cout << Factorial(6) << std::endl;
//	std::cout << Factorial(-2) << std::endl;
//
//	return 0;
//}