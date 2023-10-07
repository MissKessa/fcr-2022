#include <iostream>
using namespace std; //esto me lo a punto

void ex_1() {
	unsigned int a = 23;
	int b = -5;

	cout << "a: " << a << " b: " << b << endl;

	if (a < b) {
		cout << "a is less than b" << endl;
	}
}

void ex_3() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	int c = a + b;
	if ((c<=0 && a>0 && b>0)|| (c >= 0 && a < 0 && b < 0)) {
		cout << "OVERFLOW DETECTED";
	}
	else {
		int mean = a / 2 + b / 2; //(a+b)/2 generates overflow
		cout << c << endl;
		cout << mean;
	}
}


/*
* Write a program which computes the cumulative sum of all multiple-of-3 numbers between 1 and 1 million.
Use, for the accumulator, different data types: int (32-bit integer), short (16-bit integer) and long long (64-bit integer).
Compare and analyze the results.
*/

void ex4_1() {
	int sum = 0;
	int counter = 1000000;

	for (int i = 3; i <= counter; i+=3) {
		sum+=i;
	}

	cout << sum; 
	/*
	* int__   -836891211
	* short__ 47943093
	* long__  -836891211
	*/
}

/*
Write a program which asks the user for two integer numbers and prints their difference. If overflow is generated
in the arithmetic operation, print a message pointing out the error.
*/
void ex4_2() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	int c = a - b;
	if ((c <= 0 && a > 0 && b > 0 && a>b) || (c >= 0 && a < 0 && b < 0 && b>a)) {
		cout << "OVERFLOW DETECTED";
	}
	else {
		cout << c;
	}
}


int main() {
	//ex4_1();
	ex4_2();
	return 0;
}
