/*
* На вход дано целое положительное число N.
* Выведите его в двоичной системе счисления без ведущих нулей.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, i;
	vector<int> n2;

	cin >> n;
	

	while (n > 0) {
		n2.push_back(n%2);
		n = n >> 1;
	}

	for (i = n2.size()-1; i >= 0; --i) {
		cout << n2[i];
	}

	return 0;
}