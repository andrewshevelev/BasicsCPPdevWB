#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//int main() {
//	string s;
//	ifstream input("input.txt");
//	while (getline(input, s)) {
//		cout << s << endl;
//	}
//}

int main() {
	string s;
	ifstream input("input.txt");
	ofstream output("output.txt");
	while (getline(input, s)) {
		output << s << endl;
	}
}