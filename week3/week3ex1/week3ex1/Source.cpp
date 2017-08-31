/*
� ����������� ������ ���� ���� ������, ��������� �� N + 1 ����� �����. 
������ ������ ��� ���� ����� N. ����� ������� ��� N �����, 
��������� �� �� ������ A. ����� ����� ����� ��������� ��������.
������������ ������ � �� ������ � �������� ��� � ����������� �����.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	int n;
	
	cin >> n;
	vector<int> v(n);
	for (auto& i : v) {
		cin >> i;
	}

	sort(begin(v), end(v),
		[](const int& a, const int& b) {
			return abs(a) < abs(b);
		});

	for (const auto& i : v) {
		cout << i << ' ';
	}
	
	

	
	return 0;
}