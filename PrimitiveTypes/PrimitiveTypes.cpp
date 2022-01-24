#include <iostream>
using namespace std;

int main()
{
	char middleInitial = 'B';
	cout << "My Middle Initial is " << middleInitial << endl;
	unsigned short examScore = 95;
	cout << "My Exam Score: " << examScore << endl;
	int representedCountries{ 65 };
	cout << "There  were " << representedCountries << " countries represented in my meeting" << endl;
	long peopleInFlorida{ 20610000 };
	cout << "There are about " << peopleInFlorida << " people in Florida" << endl;
	long long peopleOnEarth{ 7'600'000'000 };
	cout << "There are " << peopleOnEarth << " people on Earth" << endl;
	float carPayment = 401.23;
	cout << "Car Payment: " << carPayment << endl;
	double pi = 3.14159;
	cout << "PI is: " << pi << endl;
	bool gameOver = false;
	cout << "The value of gameOver is " << gameOver << endl;
	cout << "\t" << "--Overflow Issue --" << endl;
	short firstNumber{ 30000 };
	short secondNumber{ 1000 };
	// short product = firstNumber * secondNumber;
	int product{ firstNumber * secondNumber };
	cout << "Sum of " << firstNumber << " and " << secondNumber << " is " << product << endl;
}