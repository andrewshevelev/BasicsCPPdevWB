/*
� ������ ������ ����� input.txt �������� ��� ����� N � M. 
����� � ����� ��������� ������� �� N ����� � M ��������, 
�������������� � ������� CSV (comma-separated values). 
����� ������ ����� ������������ ��� ���������� ������������� 
������ � �������: � ����� ��������� �����, �������� �� ������ 
����� ������ ������ �������� ���� �� ����� ��������. 
���� ������ � ������� ������ �� ����� � ���� �������, 
������ ������ ������� ����� 10, �������� ������ �������� 
���� �� ����� ��������. ����� ��������� ������ ������� 
���� �� ������. �������������, ��� � ������� ����� ����� 
N ����� � M ��������, �������� ������ �� ����� � ����� �����.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	ifstream input("input.txt");
	int n, m, x;
	string line;

	input >> n >> m;
	input.ignore(1);
	for (int i = n; i > 0; --i) {
		for (int j = m; j > 1; --j) {
			getline(input, line, ',');
			cout << setw(10) << line << " ";
		}
		getline(input, line);
		cout << setw(10) << line << endl;
	}
	return 0;
}