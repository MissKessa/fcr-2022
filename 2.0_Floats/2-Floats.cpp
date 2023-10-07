#include <iostream>
#include <iomanip>
using namespace std;

void ex_2() {
	float f = -27.625;
	cout << f;


	float f1 = 0.1;
	float f2 = 0.3;
	cout << f1 << endl; //0.1
	cout << f2 << endl; //0.3

	cout << "f1: " << setprecision(15) << f1 << endl; //0.100000001490116
	cout << "f2: " << setprecision(15) << f2 << endl; //0.300000011920929


	if ((f1 * 3.0) == f2) { //f1*3==f2 ---True
		cout << "Equal1";
	}


	const float TOLERANCE = 0.0000001;
	if (fabs(f1 * 3.0 - f2) < TOLERANCE)
		cout << "Equal" << endl;
	else
		cout << "Different" << endl;

	float euros = 0;
	const int ONE_MILLION = 1000000;
	for (int i = 0; i < 20 * ONE_MILLION; i++)
		euros = euros + 1;
	cout << "euros = " << euros << endl; //10 cent__  2.09715e+06    1€__1.67772e+07

	float f3 = 19 * ONE_MILLION;
	cout << "f3: " << setprecision(15) << f3 << endl;
	f3 = f3 + 1;
	cout << "f3 + 1: " << setprecision(15) << f3 << endl;
}


void ex_3() {
	char c1 = 'a';
	char c2 = 'ñ';
	cout << c1 << " " << c2;
	char c2 = 0xA4; 
	cout << c1 << " " << c2;
}


int main() {
	
	
	return 0;
}
