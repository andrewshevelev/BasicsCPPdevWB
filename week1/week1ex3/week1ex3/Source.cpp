#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, c, d;
	cin >> a >> b >> c;

	if (a == 0 && b !=0) {
		cout << (-1)*c / b;
	}
	else if (a != 0) {
		d = b*b - 4.0 * a * c;
		if (d == 0) {
			cout << (-1)*b / (2.0 * a);
		}
		else if (d > 0) {
			cout << ((-1)*b - sqrt(d)) / (2.0 * a) << ' ' << ((-1)*b + sqrt(d)) / (2.0 * a);
		}
	}

	return 0;
}