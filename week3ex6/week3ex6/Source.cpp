/*
Реализуйте класс ReversibleString, хранящий строку и
поддерживающий методы Reverse для переворота строки и
ToString для получения строки.
*/
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
#include <algorithm>

class ReversibleString {
public:
	ReversibleString() {}
	ReversibleString(const string& input_s) {
		s = input_s;
	}
	void Reverse() {
		reverse(begin(s), end(s));
	}
	string ToString() const {
		return s;
	}
private:
	string s;
};

//int main() {
//	ReversibleString s("live");
//	s.Reverse();
//	cout << s.ToString() << endl;
//
//	s.Reverse();
//	const ReversibleString& s_ref = s;
//	string tmp = s_ref.ToString();
//	cout << tmp << endl;
//
//	ReversibleString empty;
//	cout << '"' << empty.ToString() << '"' << endl;
//
//	return 0;
//}