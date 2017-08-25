/*
* Реализуйте функцию void Reverse(vector<int>& v),
* которая переставляет элементы вектора в обратном порядке.
*/

//#include <iostream>
//#include <vector>
//using namespace std;

void Reverse(vector<int>& v) {
	vector<int> w;
	for (int i = v.size()-1; i >=0 ; --i) {
		w.push_back(v[i]);
	}
	v = w;
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
//	Reverse(numbers);
//	PrintVectorInt(numbers);
//
//	return 0;
//}