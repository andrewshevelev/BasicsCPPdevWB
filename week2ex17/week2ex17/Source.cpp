/*
��� ����� ���������� ���������� ���� �����, ���� ��� ����� ������� ��������.
���������� ��������� �������� ��� ������� ���������:
ADD word1 word2 � �������� � ������� ���� ��������� (word1, word2).
COUNT word � ������ ���������� ��������� ����� word.
CHECK word1 word2 � ���������, �������� �� ����� word1 � word2 ����������. 
����� word1 � word2 ��������� ����������,
���� ����� �������� ADD ��� ���� �� ����
������ ADD word1 word2 ��� ADD word2 word1.
*/

#include <iostream>
#include <set>
#include <string>
#include <map>

using namespace std;

int main() {
	map<string, set<string>> dic;
	int q;
	string s1, s2, command;
	cin >> q;
	for (q; q > 0; --q) {
		cin >> command;
		if (command == "ADD") {
			cin >> s1;
			cin >> s2;
			dic[s1].insert(s2);
			dic[s2].insert(s1);
		}
		else if (command == "COUNT") {
			cin >> s1;
			if (dic.count(s1)) {
				cout << dic[s1].size() << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (command == "CHECK") {
			cin >> s1 >> s2;
			if (dic.count(s1)) {
				if (dic[s1].count(s2)) {
					cout << "YES" << endl;
				}
				else {
					cout << "NO" << endl;
				}
			}
			else {
				cout << "NO" << endl;
			}
		}
	}



	return 0;
}