/*
�������� �������
void EnsureEqual(const string& left, const string& right);
� ������, ���� ������ left �� ����� ������ right, 
������� ������ ����������� ���������� runtime_error 
� ����������� "<l> != <r>", ��� <l> � <r> - ������, 
������� �������� � ���������� left � right ��������������. 
�������� ��������, ��� ������ ����� ����������� � ������, 
������� ���������� � ����������, ������ ���� ����� �� ������ �������.

���� left == right, ������� ������ ��������� �����������.

*/


#include <iostream>
#include <string>

using namespace std;

void EnsureEqual(const string& left, const string& right) {
	if (left != right) {

		throw runtime_error(left + " != " + right);
	}
}
//
//int main() {
//
//	try {
//		EnsureEqual("1", "0");
//	}
//	catch (exception& ex) {
//		cout << ex.what();
//	}
//	return 0;
//}