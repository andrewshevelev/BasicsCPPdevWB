/*
* �������� ������� MoveStrings, ������� ���������
* ��� ������� �����, source � destination,
* � ���������� ��� ������ �� ������� ������� �
* ����� �������. ����� ���������� ������� ������
* source ������ ��������� ������.
*/

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
	for (auto i : source) {
		destination.push_back(i);
	}
	source.clear();
}

//void PrintVectorString(const vector<string> s) {
//	for (auto i : s) {
//		cout << i << ' ';
//	}
//	cout << endl;
//}

//int main() {
//	vector<string> source = { "a", "b", "c" };
//	vector<string> destination = { "z" };
//	MoveStrings(source, destination);
//	PrintVectorString(source);
//	PrintVectorString(destination);
//
//	return 0;
//}