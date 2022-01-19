#include <iostream>
using namespace std;
void printName();
void printTheNumberOfDogs();
void printDateOfBirth();
int main() {
	cout << "\t" << "--Solution:Coding Exercise 1--" << endl;
	printName();
	cout << "\t" << "--Solution:Coding Exercise 2--" << endl;
	printTheNumberOfDogs();
	cout << "\t" << "--Solution:Coding Exercise 3--" << endl;
	printDateOfBirth();
	return 0;
}
void printName() {
	cout << "Hi Furkan!" << endl;
}
void printTheNumberOfDogs() {
	int numberOfDogs = 3;
	cout << "Sally has " << numberOfDogs << " dogs." << endl;
}
void printDateOfBirth() {
	int day;
	int month;
	int year;
	cout << "Enter your Date of Birth of type day/month/year:";
	cin >> day >> month >> year;
	cout << day << " " << month << " " << year << endl;
}