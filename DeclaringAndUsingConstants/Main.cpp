#include <iostream>
using namespace std;
const double taxRate = 0.06;
const int estimateExpiry = 30;

int main() {
	cout << "\t" << "-- Hello, welcome to Emily's Carpet Cleaning Service --";
	int numberOfRooms;
	cout << "\nNumber of rooms:";
	cin >> numberOfRooms;
	cout << "=============" << endl;
	cout << "Number of rooms: " << numberOfRooms << endl;

	double pricePerRoom = 30;
	cout << "Price per room: $" << pricePerRoom << endl;

	double cost = (numberOfRooms * pricePerRoom);
	cout << "Cost: $" << cost << endl;
	double salesTax = (cost * taxRate);
	cout << "Tax: $" << salesTax << endl;
	double totalEstimate = cost + salesTax;// Declaration Statement
	cout << "Total Estimate: $" << totalEstimate << endl;

	cout << "This estimate is valid for " <<
		estimateExpiry << " days" << endl;

	return 0;
}