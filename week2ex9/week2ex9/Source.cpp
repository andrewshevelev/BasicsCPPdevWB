/*
* ���� ����� � �������, �� ������� �� ������ �� � ������,
* ���� ����� ��������� � ����� � ������� ������. ����� ����,
* ������ ��������� ���� ����� ���������� � �������� ������������
* ��-�� ����, ��� ������� �� ������������.

* ���������� ��������� ��������� �������� ��� ��������:

* WORRY i: �������� i-�� �������� � ������ �������
* (� ��������� � 0) ��� ��������������;
* QUIET i: �������� i-�� �������� ��� ��������������;
* COME k: �������� k ��������� ������� � ����� �������;
* COME -k: ������ k ������� �� ����� �������;
* WORRY_COUNT: ������ ���������� ������������� ����� � �������.
* ���������� ������� �����.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std; 

int main() {
	vector<bool> v;
	int q, i, k;
	string word;

	cin >> q;
	for (i = 1; i <= q; ++i) {
		cin >> word;
		if (word == "WORRY") {
			cin >> k;
			v[k] = 1;
		}
		else if (word == "QUIET") {
			cin >> k;
			v[k] = 0;
		}
		else if (word == "COME") {
			cin >> k;
			v.resize(v.size() + k, 0);
		}
		else if (word == "WORRY_COUNT") {
			k = 0;
			for (auto t : v) {
				if (t) {
					++k;
				}
			}
			cout << k << endl;
		}
	}

	return 0;
}