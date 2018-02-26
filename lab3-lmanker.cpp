//Lucas Manker

#include <iostream>
#include <iomanip>

using namespace std;

template <class type>
type sum(type n);

template <class type>
type factorial(type n);

template <class type>
type strangeSumm(type n);

void floatPuzzle();
void doublePuzzle();
void doublePuzzleP();
void floatPuzzleP();


int main() {
	short a(10);
	cout << "The sum (short) of the numbers from 1 to " << a << " is " << sum <short>(a) << endl;
	short f(300);
	cout << "The sum (short) of the numbers from 1 to " << f << " is " << sum <short>(f) << endl;
	long d(10000000);
	cout << "The sum (long) of the numbers from 1 to " << d << " is " << sum <long>(d) << endl;
	float b(50);
	cout << b<<"! (float) "<< " is " << factorial <float>(b) << endl;
	double e(250);
	cout << b << "! (double) " << " is " << factorial <double>(e) << endl;
	float c(20);
	cout << "this summation (float) is equal to: " << strangeSumm <float>(c) << endl;
	double g(20);
	cout << "this summation (double) is equal to: " << strangeSumm <double>(c) << endl;
	floatPuzzle();
	doublePuzzle();
	doublePuzzleP();
	floatPuzzleP();
	system("pause");
	return 0;
}

void floatPuzzle() {
	for (float i = 3.4; i < 4.4; i += 0.2) {
		cout << "i = " << i << endl;
	}
	cout << "end of float puzzle" << endl;
}

void doublePuzzle() {
	for (double i = 3.4; i < 4.4; i += 0.2) {
		cout << "i = " << i << endl;
	}
	cout << "end of double puzzle" << endl;
}

void doublePuzzleP() {
	for (double i = 3.4; i < 4.4; i += 0.2) {
		cout << setprecision(17) << "i = " << i << endl;
	}
	cout << "end of double puzzle with precision" << endl;
}

void floatPuzzleP() {
	for (float i = 3.4; i < 4.4; i += 0.2) {
		cout << setprecision(17) << "i = " << i << endl;
	}
	cout << "end of float puzzle with precision" << endl;
}

template <class type>
type sum(type n) {
	type sum(0);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

template <class type>
type factorial(type n) {
	type product(1);
	int i(1);
	if (n == 0 || n == 1) {
		product = 1;
	}
	else {
		product = n*factorial<type>(n - 1);
	}
	return product;
}

template <class type>
type strangeSumm(type n) {
	type sum(0);
	type ratio = (1 / n);
	for (int i = 0; i <= n; i++) {
		sum += ratio;
	}
	sum -= 1.0;
	return sum;
}

