#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cout << "\t"
		<< "-- Declaring Vectors --" << endl;

	cout << endl;

	cout << "\t" << "First Way: Vector Declaration" << endl;

	vector<int> testScores;
	vector<double> interestRates;
	/*
	 Using this way, we create an empty vector that contains
	   no elements.
	 */

	cout << endl;

	cout << "\t" << "Second Way: Vector Declaration " << endl;

	vector<int> numberOfStudents(3);
	cout << "First student at index 0: " << numberOfStudents[0] << endl;

	/*
		Using this way, we still declare a vector, but in this style,
		we specify the number of elements that vector holds and
		automatically assigning 0 to all element of the vector,
		so actually when this way is used, the array is both declared and seems to be initialized.
 */

	cout << endl;

	cout << "\t" << "-- Initiliazing Vectors --" << endl;

	vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
	vector<int> examScores = { 100, 98, 89, 85, 93 };
	vector<double> highTemperatures(365, 80.0);
	cout << "vowel at index 0: " << vowels[0] << endl;
	cout << "exam score at index 2: " << examScores[2] << endl;
	cout << "temperature at index 2: " << highTemperatures[0] << endl;

	cout << endl;

	cout << "\t" << "-- Accessing Vector Elements --" << endl;

	cout << endl;

	cout << "\t" << "First Way: Array Syntax Accessing" << endl;

	vector<string> courses = { "Object-Oriented Programming with Java", "Introduction to Programming with C++" };
	cout << "Course at index 0: " << courses[1] << endl;

	cout << endl;

	cout << "\t" << "Second Way: Accessing with at(elementIndex) method" << endl;

	vector<int> ydsResults = { 92, 87, 45, 44, 41 };
	vector<int> alesResults = { 87, 92, 96, 42, 65 };
	cout << "YDS Result at index 2: " << ydsResults.at(2) << endl;
	cout << "ALES Result at index 0: " << alesResults.at(0) << endl;

	cout << endl;

	cout << "\t" << "-- Changing the Contents of Array Elements (Modiying) --" << endl;

	cout << "Enter the YDS Result: ";
	cin >> ydsResults.at(2);
	cout << "Enter the ALES Result: ";
	cin >> alesResults.at(0);
	cout << "YDS Result at index 2: " << ydsResults.at(2) << endl;
	cout << "ALES Result at index 0: " << alesResults.at(0) << endl;

	cout << endl;

	cout << "\t" << "Scenario: Dynamic Memory Allocation" << endl;
	vector<int> employeeNumbers = { 100, 95, 99 };
	cout << "Vector Size: " << employeeNumbers.size() << endl;
	for (int i = 0; i < employeeNumbers.size(); i++) {
		cout << "Element at index " << i << ":"
			<< " " << employeeNumbers.at(i) << endl;
	}

	employeeNumbers.push_back(10); // Pushing (Adding) 10 to the end of the Vector
	employeeNumbers.push_back(20); // Pushing (Adding) 20 to he end of the Vector
								   // Let's Print the Vector after adding New Elements into it, so prove that we can
								   // successfully pushed(added) to Vector
	cout << "\t"
		<< "After Adding the New Elements" << endl;
	for (int i = 0; i < employeeNumbers.size(); i++) {
		cout << "Element at index " << i << ":"
			<< " " << employeeNumbers.at(i) << endl;
	}
	// Let's see the new size of the Vector and be sure about the adding process
	cout << "New Vector Size: " << employeeNumbers.size() << endl;

	return 0;
}
