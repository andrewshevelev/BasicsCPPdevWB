/*
* �������� �������, �������:
* ���������� Factorial
* ���������� int
* ��������� int � ���������� ��������� ������ ���������.
* �������������, ��� �������� ������� �� ������ �� ��������� 10.
* ��� ������������� ���������� ������� ������ ���������� 1.
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