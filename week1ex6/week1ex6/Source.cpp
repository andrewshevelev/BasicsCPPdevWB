/*
* ���� ��� ����� ����� A � B (A <= B, A >= 1, B <= 30000).
* �������� ����� ������ ��� ������ ����� �� A �� B (������������).
*/

#include <iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	for (int i = a; i <= b; ++i) {
		if (i % 2 == 0) {
			cout << i << ' ';
		}
	}

	return 0;
}