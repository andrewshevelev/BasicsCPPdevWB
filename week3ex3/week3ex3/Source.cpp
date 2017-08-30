/*
���������� �����, �������������� ����� ����� � ��������������� �������.
����� ������ ��������� ��� ��������� ������.
*/

//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;

class SortedStrings {
public:
	void AddString(const string& s) {
		// �������� ������ s � �����
		sorted_strings.push_back(s);
		SortString();
	}
	vector<string> GetSortedStrings() {
		// �������� ����� �� ���� ����������� ����� � ��������������� �������
		return sorted_strings;
	}
private:
	void SortString() {
		sort(begin(sorted_strings), end(sorted_strings));
	}
	vector<string> sorted_strings;
};
//
//int main() {
//	return 0;
//}