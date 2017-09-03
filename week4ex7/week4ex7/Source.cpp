/*
���������� ��������� �������� �� ���������� ������:
���, �������, ����, ����� � ��� ��������. �������� ������
�� ����� ��������, ��������� ��� �� ������� ������ � ����� 
�� �������� �������� ������ ����.

������ �����

������ ������ �������� ���� ����� ����� N �� 0 �� 10000 � ����� ���������.

����� ���� N �����, ������ �� ������� �������� ��� ������ ������ �� 1 �� 15 
�������� � ��� � ������� ���������� ��������, � ��� ����� ����� 
�� 0 �� 1000000000 � ����, ����� � ��� ��������.

��������� ������ �������� ���� ����� ����� M �� 0 �� 10000 � ����� ��������.

��������� M ����� �������� ������ ������ �� 1 �� 15 �������� �
������, � ����� ����� �� 0 �� 1000000000 � ����� �������� (��������� ���������� � 1).

������ ������

��� ������� ���� name K, ��� K �� 1 �� N, �������� �����
������ ��� � ������� K-�� ��������.

��� ������� ���� date K, ��� K �� 1 �� N, �������� ����� 
����� ����, ����� � ��� �������� K-�� ��������.

��� ��������� �������� �������� bad request.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
	string first_name;
	string last_name;
	long int day;
	long int month;
	long int year;
};

int main() {
	long int n;
	cin >> n;
	vector<Student> students(n);

	for (int i = 0; i < n; i++) {
		cin >> students[i].first_name >> students[i].last_name;
		cin >> students[i].day >> students[i].month >> students[i].year;
	}

	long int m, k;
	cin >> m;
	string command;
	for (int i = 0; i < m; i++) {
		cin >> command >> k;
		if (command == "name") {			
			if (k <= n && k > 0) {
				cout << students[k - 1].first_name << ' ' 
					<< students[k - 1].last_name << endl;
			}
			else {
				cout << "bad request" << endl;
			}
		}
		else if (command == "date") {			
			if (k <= n && k > 0) {
				cout << students[k - 1].day << "."
					<< students[k - 1].month << "."
					<< students[k - 1].year << endl;
			}
			else {
				cout << "bad request" << endl;
			}
		}
		else {
			cout << "bad request" << endl;
		}
	}
	return 0;
}