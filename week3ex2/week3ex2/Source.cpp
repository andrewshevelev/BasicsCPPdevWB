/*
� ����������� ������ ���� ���� ������, ��������� �� ����� N 
� ��������� �� ��� N ����� S. 
����� ����� ����� � ������ ��������� ��������.
������������ ������ S � ������������������ ������� �� �����������, 
��������� ������� ����, � �������� �� � ����������� ����� ������.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string ToLower(const string& s) {
	string s_out;
	for (int i = 0; i < s.size(); i++) {
		s_out += tolower(s[i]);
	}
	return s_out;
}

int main() {
	int n;

	cin >> n;
	vector<string> v(n);
	for (auto& i : v) {
		cin >> i;
	}

	sort(begin(v), end(v),
		[](const string& a, const string& b) {
		return ToLower(a) < ToLower(b);
	});

	
	for (const auto& i : v) {
		cout << i << ' ';
	}
	
	return 0;
}