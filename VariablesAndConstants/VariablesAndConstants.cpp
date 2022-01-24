#include <iostream>
using namespace std;
void generateProfileOfNewEmployee();
int main()
{
	cout << "\t" << "-- Declaring and Initializing Variables --" << endl;
	cout << endl;
	//  Variable Declarations -> Udemy Course Scenario
	string courseName;
	string instructorName;
	string competencyLevel;
	string courseLanguage;
	int numberOfRegisteredStudents;
	int numberOfLessons;
	int videoDuration;
	double completionRate;
	bool isLoggedIntoSystemOrNot;
	bool hasSubtitlesOrNot;
	//Initializing and Printing Variables(Attributes in OOP)
	cout << "\t" << "-- Udemy Course Scenario --" << endl;
	courseName = "Object-Oriented Programming with Java";
	instructorName = "Furkan Baysan";
	competencyLevel = "All Levels";
	courseLanguage = "Turkish";
	numberOfRegisteredStudents = 10000;
	numberOfLessons = 100;
	videoDuration = 20;
	completionRate = 43.6;
	isLoggedIntoSystemOrNot = true;
	hasSubtitlesOrNot = true;
	cout << "Course Name: " << courseName << endl;
	cout << "Instructor Name: " << instructorName << endl;
	cout << "Competency Level: " << competencyLevel << endl;
	cout << "Course Language: " << courseLanguage << endl;
	cout << "Number of Students: " << numberOfRegisteredStudents << endl;
	cout << "Number of Lessons: " << numberOfLessons << endl;
	cout << "Video Duration Time: " << videoDuration << endl;
	cout << "Completion Rate: " << completionRate << endl;
	cout << "is Logged Into System Or Not: " << isLoggedIntoSystemOrNot << endl;
	cout << "has Subtitles Or Not: " << hasSubtitlesOrNot << endl;

	cout << endl;

	cout << "\t" << "-- Sample Program: Calculate the Area of a Room --" << endl;
	int width{ 0 };
	int height{ 0 };
	// Remark: Same with -> int width= 0 and int height= 0.
	/*Remark: We initialized, because that's Best-Practice.
	Even if we didn't initialize, the data taking from the user
	is going to assign (put in) to the variables.*/
	cout << "Width:";
	cin >> width;
	cout << "Height:";
	cin >> height;
	int areaOfRoom = width * height;
	cout << "Area of the Room: " << areaOfRoom << " square feet" << endl;

	cout << endl;

	cout << "\t" << "-- Coding Exercise 4: Generate New Employee Profile --" << endl;
	generateProfileOfNewEmployee();
	return 0;
}

void generateProfileOfNewEmployee() {
	double hourlyWage = 23.50;
	string employeeName;
	int employeeAge;
	cout << "Name:";
	cin >> employeeName;
	cout << "Age:";
	cin >> employeeAge;

	cout << "New Employee Profile:" << "	" <<
		"Employee Name:" << " " << employeeName << " " <<
		"Employee Age:" << " " << employeeAge << " " <<
		"Employee Hourly Wage:" << " " << hourlyWage << endl;
}