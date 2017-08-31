/*
Реализуйте класс, поддерживающий набор строк в отсортированном порядке.
Класс должен содержать два публичных метода.
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
		// добавить строку s в набор
		sorted_strings.push_back(s);
		SortString();
	}
	vector<string> GetSortedStrings() {
		// получить набор из всех добавленных строк в отсортированном порядке
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