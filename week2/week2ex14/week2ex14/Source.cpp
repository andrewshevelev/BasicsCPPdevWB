/*
� ���� ������ ��� ����� ����������� ������ ���������� ���������.
� ������, ��� ������� ��������, ��������� ������� �������� ���������,
����� ���� ������ ����� ����� (������� �������� � 1, ������� � 2 � �. �.),
���� ������� ����� ������������� ��������, �������� ������������� ����� ����� ���������.
������ ���������, ���������� ���� �� ����� ������������� ���������,
��������� ���������� (��. ������).
*/

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	map<vector<string>, int> busmap;
	string s1;
	int q, n;
	cin >> q;
	
	for (q; q > 0; --q) {
		cin >> n;
		vector<string> v(n);
		for (auto& stop : v) {
			cin >> stop;
		}
		if (busmap.count(v)) {
			cout << "Already exists for " << busmap[v] << endl;
		}
		else {
			int t = busmap.size() + 1;
			busmap[v] = t;
			cout << "New bus " << busmap[v] << endl;
		}
		v.clear();
	}

	return 0;
}

