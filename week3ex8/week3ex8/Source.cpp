/*
Определите тип Incognizable, для которого следующий код будет корректен (см. main):
*/


class Incognizable {
public:
	Incognizable() {};
	Incognizable(const int& x) {
		number1 = x;
	}
	Incognizable(const int& x, const int& y) {
		number1 = x;
		number2 = y;
	}
private:
	int number1;
	int number2;
};

//int main() {
//	Incognizable a;
//	Incognizable b = {};
//	Incognizable c = { 0 };
//	Incognizable d = { 0, 1 };
//	return 0;
//}
