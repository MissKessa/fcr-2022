#include <iostream>
#include <iomanip>

using namespace std;

void checkIntSizes(void)
{
	cout << "Size of short integers (signed and unsigned): " << sizeof(short int) << " bytes" << endl;
	cout << "Size of integers (signed and unsigned): " << sizeof(int) << " bytes" << endl;
	cout << "Size of long long integers (signed and unsigned): " << sizeof(long long int) << " bytes" << endl;
}

int main()
{
	short int var1 = -400;
	int var2 = 0;
	float var3 = -15.123;
	short int i;

	checkIntSizes();

	// var2 = 100 * (-400) = -40000 
	for (i = 0; i < 100; i++)
		var2 = var2 + var1;

	cout << "var2: " << var2 << endl;

	char string1[] = "ñ#f90";
	char string2[] = "T%0sr";

	system("pause");

	return 0;
}
