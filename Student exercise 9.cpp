#include<iostream>
using namespace std;

class rationalNumbers {
private:
	int numerator, denominator;
public:
	rationalNumbers(int n=0, int d=1) {
		numerator = n;
		denominator = d;
	}
	friend rationalNumbers operator+(rationalNumbers r1,rationalNumbers r2);
	friend ostream& operator<<(ostream& out, rationalNumbers r);
};
int GCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int  LCM(int a, int b) {
	return (a * b) / GCD(a, b);
}

rationalNumbers operator+(rationalNumbers r1, rationalNumbers r2) {
	rationalNumbers r3;
	if (r1.denominator == r2.denominator) {
		r3.numerator = r1.numerator + r2.numerator;
		r3.denominator = r1.denominator;
	}
	else {
		int x = LCM(r1.denominator, r2.denominator);

		r1.numerator = r1.numerator * (x / r1.denominator);
		r2.numerator = r2.numerator * (x / r2.denominator);

		r3.numerator = r1.numerator + r2.numerator;
		r3.denominator = x;
	}
	return r3;
}
ostream& operator<<(ostream& out, rationalNumbers r) {
	out << "rational number: ";
	out << r.numerator << "/" << r.denominator;
	return out;
}
int main() {

	rationalNumbers r1(2, 3);
	rationalNumbers r2(5, 4);
	rationalNumbers r3;

	r3 = r1 + r2;

	cout << r3;

	return 0;

}