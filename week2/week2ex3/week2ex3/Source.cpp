/*
* �������� �������, ������� ���������� PalindromFilter
* ���������� vector<string>
* ��������� vector<string> words � int minLength �
* ���������� ��� ������ �� ������� words, �������
* �������� ������������ � ����� ����� �� ������ minLength
* ������� ������ �������� �� ����� 100 �����, ����� ������
* ������ �� ������ 100 ��������.
*/

//
//
//#include <iostream>
//#include <vector>
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

vector<string> PalindromFilter(vector<string> words, int minLength) {
	vector<string> output;

	for (auto i : words) {
		if (IsPalindrom(i) && i.length() >= minLength) {
			output.push_back(i);
		}
	}
	return output;
}

//void PrintVectorString(vector<string> s) {
//	for (auto i : s) {
//		cout << i << ' ';
//	}
//	cout << endl;
//}
//
//int main() {
//
//	PrintVectorString(PalindromFilter({ "abacaba","aba" }, 5));
//	PrintVectorString(PalindromFilter({ "abacaba","aba" }, 2));
//	PrintVectorString(PalindromFilter({ "weew","bro","code" }, 4));
//
//
//	return 0;
//}