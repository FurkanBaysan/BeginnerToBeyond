#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "\t" << "-- Vowel Scenario --" << endl;
	char vowels[] = { 'a','e','i','o','u' };
	cout << "The First Vowel:" << vowels[0] << endl;
	cout << "The Last Vowel:" << vowels[4] << endl;

	// cin >> vowels[5]; -> Out of Bounds 

	cout << endl;

	cout << "\t" << "-- Temperature Scenario --" << endl;
	double highTemperatures[] = { 90.1, 89.8, 77.5, 81.6 };
	cout << "The First high temperature: " << highTemperatures[0] << endl;
	highTemperatures[0] = 100.7;
	cout << "New First high temperature : " << highTemperatures[0] << endl;

	cout << endl;

	cout << "\t" << "-- Test Score Scenario --" << endl;
	int testScores[5] = { 0 };
	int size = sizeof(testScores) / sizeof(testScores[0]);
	for (int i = 0; i < size; i++) {
		cout << "\b" << i + 1 << "." << " Test Score: " << testScores[i] << "\n";
	}
	testScores[0] = 100;
	testScores[1] = 90;
	testScores[2] = 80;
	testScores[3] = 70;
	testScores[4] = 60;


	cout << endl;

	cout << "\t" << "-- After Accessing and Modifying --" << endl;
	for (int i = 0; i < size; i++) {
		cout << "\b" << i + 1 << "." << " Test Score: " << testScores[i] << endl;
	}
	cout << "\t" << "-- Reading User Input and Modifying Array Elements --" << endl;
	cout << "Enter the Test Score: ";
	cin >> testScores[0];
	cout << "1.Test Score:" << testScores[0] << endl;

	cout << endl;

	cout << "Value of the Array Name: " << testScores << endl;
	/*
	 testScores->Memory(RAM) location / address of the array,
	 actually first element of the array.
	*/
	cout << endl;


	cout << "\t" << "-- Coding Exercise 5: Declaring, Initializing and Accessing an Array --" << endl;
	int arr[10] = { 0 };
	arr[0] = 100;
	arr[9] = 1000;

	return 0;
}