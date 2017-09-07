#include <iostream>
using namespace std;

class Rational {
public:
	Rational() {
		numerator = 0;
		denominator = 1;
	}
	Rational(int numerator_, int denominator_) {
		if (denominator_ == 0) {
			throw invalid_argument("Invalid argument");
		}
		else if (numerator_ == 0) {
			numerator = 0;
			denominator = 1;
		}
		else
		{
			int flag_sign = 1;
			if (numerator_ < 0 && denominator_ < 0) {
				numerator_ = (-1) * numerator_;
				denominator_ = (-1) * denominator_;
			}
			else if (numerator_ < 0 && denominator_ > 0) {
				numerator_ = (-1) * numerator_;
				flag_sign = -1;
			}
			else if (numerator_ > 0 && denominator_ < 0) {
				denominator_ = (-1) * denominator_;
				flag_sign = -1;
			}

			int nod = NOD(numerator_, denominator_);
			numerator = flag_sign*numerator_ / nod;
			denominator = denominator_ / nod;
		}
	}

	int Numerator() const {
		return numerator;
	}

	int Denominator() const {
		return denominator;
	}

private:
	int numerator;
	int denominator;
	int NOD(int a, int b) {
		while (a > 0 && b > 0) {
			if (a > b) {
				a %= b;
			}
			else {
				b %= a;
			}
		}
		return a + b;
	}
};

bool operator==(const Rational& lhs, const Rational& rhs) {
	if (lhs.Denominator() == rhs.Denominator() &&
		lhs.Numerator() == rhs.Numerator()) {
		return true;
	}
	else {
		return false;
	}
}

Rational operator+(const Rational& lhs, const Rational& rhs) {
	return Rational(lhs.Numerator()*rhs.Denominator() + rhs.Numerator()*lhs.Denominator(),
		lhs.Denominator() * rhs.Denominator());
}

Rational operator-(const Rational& lhs, const Rational& rhs) {
	return Rational(lhs.Numerator()*rhs.Denominator() - rhs.Numerator()*lhs.Denominator(),
		lhs.Denominator() * rhs.Denominator());
}

Rational operator*(const Rational& lhs, const Rational& rhs) {
	return Rational(lhs.Numerator() * rhs.Numerator(),
		lhs.Denominator() * rhs.Denominator());
}

Rational operator/(const Rational& lhs, const Rational& rhs) {
	if (rhs.Numerator() == 0) {
		throw domain_error("Division by zero");
	}	
	return Rational(lhs.Numerator() * rhs.Denominator(),
		lhs.Denominator() * rhs.Numerator());
}

ostream& operator<<(ostream& output, const Rational& rat) {
	output << rat.Numerator() << "/" << rat.Denominator();
	return output;
}

istream& operator>>(istream& input, Rational& rat) {
	int numerator;
	int denominator;
	if (input >> numerator && input.ignore(1) && input >> denominator) {
		rat = Rational(numerator, denominator);
	}
	return input;
}

bool operator<(const Rational& lhs, const Rational& rhs) {
	return (lhs.Numerator()*rhs.Denominator() < rhs.Numerator()*lhs.Denominator());
}

int main() {
	try {
		Rational r1, r2;
		char c;
		if (cin >> r1 >> c >> r2) {
			if (c == '/') {
				cout << r1 / r2;
			}
			else if (c == '*') {
				cout << r1 * r2;
			}
			else if (c == '+') {
				cout << r1 + r2;
			}
			else if (c == '-') {
				cout << r1 - r2;
			}
			else {
				cout << "Invalid argument";
			}
		}			
	}
	catch (exception& ex) {
		cout << ex.what() << endl;
	}

	return 0;
}