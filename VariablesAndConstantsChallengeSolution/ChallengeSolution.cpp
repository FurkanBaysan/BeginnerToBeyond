#include <iostream>
using namespace std;

const double taxRate = 0.06;
const int estimateExpiry = 30;

int main() {

	cout << " -- Hello, welcome to Ruby's Carpet Cleaning Service --" << endl;

	int numberOfSmallRooms;
	cout << "\nNumber of Small Rooms requested to be cleaned: ";
	cin >> numberOfSmallRooms;
	int numberOfLargeRooms;
	cout << "Number of Large Rooms requested to be cleaned: ";
	cin >> numberOfLargeRooms;

	cout << "Number of small rooms: " << numberOfSmallRooms << endl;
	cout << "Number of large rooms: " << numberOfLargeRooms << endl;

	double pricePerSmallRoom = 25;
	double pricePerLargeRoom = 35;
	cout << "Price per small room: $" << pricePerSmallRoom << endl;
	cout << "Price per large room: $" << pricePerLargeRoom << endl;

	double cost = (numberOfSmallRooms * pricePerSmallRoom) +
		(numberOfLargeRooms * pricePerLargeRoom);
	cout << "Cost: $" << cost << endl;
	double salesTax = (cost * taxRate);
	cout << "Tax: $" << salesTax << endl;

	cout << "=============" << endl;

	double totalEstimate = cost + salesTax;
	cout << "Total Estimate: $" << totalEstimate << endl;
	cout << "This estimate is valid for " << estimateExpiry << " days" << endl;

	return 0;
}