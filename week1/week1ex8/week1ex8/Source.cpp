/*
* В stdin даны два натуральных числа. Найти их наибольший общий делитель.
*/

#include <iostream>

using namespace std;

int main() {
	int a, b, a_t, b_t;
	cin >> a >> b;
	
	while (b != 0) {
		a_t = b;
		b_t = a % b;
		
		a = a_t;
		b = b_t;
	}

	cout << abs(a);

	return 0;
}
