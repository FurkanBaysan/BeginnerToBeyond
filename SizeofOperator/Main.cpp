#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main() {

	cout << "\t" << "-- sizeof: Size of Types --" << endl;

	cout << "char: " << sizeof(char) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << endl;
	cout << "short: " << sizeof(short) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "long double: " << sizeof(long double) << endl;

	cout << "\t" << "-- <climits> File Contains Defined Constants --" << endl;

	cout << "Minimum Values:" << endl;
	cout << "char: " << CHAR_MIN << endl;
	cout << "int: " << INT_MIN << endl;
	cout << "long: " << LONG_MIN << endl;
	cout << "Maximum Values:" << endl;
	cout << "char: " << CHAR_MAX << endl;
	cout << "int: " << INT_MAX << endl;
	cout << "long: " << LONG_MAX << endl;

	cout << "\t" << "-- sizeof: Size of Variables --" << endl;
	int age = 24;
	cout << "age is " << sizeof(age) << " bytes." << endl;
	double wage = 15850.55;
	cout << "wage is " << sizeof(wage) << " bytes." << endl;
	return 0;
}