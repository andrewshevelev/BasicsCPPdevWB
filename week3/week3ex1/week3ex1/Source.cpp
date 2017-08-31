/*
В стандартном потоке дана одна строка, состоящая из N + 1 целых чисел. 
Первым числом идёт само число N. Далее следуют ещё N чисел, 
обозначим их за массив A. Между собой числа разделены пробелом.
Отсортируйте массив А по модулю и выведите его в стандартный поток.
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