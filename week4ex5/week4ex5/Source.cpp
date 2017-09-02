#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	double s;
	ifstream input("input.txt");
	cout << fixed << setprecision(3);
	//ofstream output("output.txt");
	while (input >> s) {
		cout << s << endl;
	}
	
	return 0;

}

