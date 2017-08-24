/*
* �������� �������, �������
* ���������� IsPalindrom
* ���������� bool
* ��������� �������� ���� string � ����������,
* �������� �� ���������� ������ �����������
* ��������� - ��� ����� ��� �����, �������
* ��������� �������� ����� ������� � ������ ������.
*/


//
//#include <iostream>
//#include <string>
//
//using namespace std;

bool IsPalindrom(string s) {
	if (s.length()) {
		int i = 0, j = s.length() - 1;
		while (i < j && s[i] == s[j]) {
			i++;
			j--;
		}
		if (i >= j) {
			return 1;
		}
		else return 0;
	}
	else return 1;

}

//int main() {
//
//	cout << IsPalindrom("madam") << endl;
//	cout << IsPalindrom("maam") << endl;
//	cout << IsPalindrom("mam") << endl;
//	cout << IsPalindrom("maem") << endl;
//	cout << IsPalindrom("") << endl;
//
//
//	return 0;
//}