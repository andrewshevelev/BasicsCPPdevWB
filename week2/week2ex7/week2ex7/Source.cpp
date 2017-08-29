/*
* Реализуйте функцию vector<int> Reversed(const vector<int>& v),
* возвращающую копию вектора v, в которой числа
* переставлены в обратном порядке.
*/
//
//#include <iostream>
//#include <vector>
//using namespace std;

vector<int> Reversed(const vector<int>& v) {
	vector<int> w;
	for (int i = v.size() - 1; i >= 0; --i) {
		w.push_back(v[i]);
	}
	return w;
}


//void PrintVectorInt(const vector<int>& v) {
//	for (auto i : v) {
//		cout << i << ' ';
//	}
//	cout << endl;
//}
//
//int main() {
//
//	vector<int> numbers = { 1, 5, 3, 4, 2 };
//	
//	PrintVectorInt(numbers);
//	PrintVectorInt(Reversed(numbers));
//	
//
//	return 0;
//}