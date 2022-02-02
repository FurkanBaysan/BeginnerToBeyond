#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	//Declaring 2 Empty Vectors
	vector<int> firstVector;
	vector <int> secondVector;

	firstVector.push_back(10);
	firstVector.push_back(20);
	cout << "First Vector Size: " << firstVector.size() << endl;
	for (int i = 0; i < firstVector.size(); i++) {
		cout << "Element at index " << i << ":" << firstVector.at(i) << endl;
	}
	cout << endl;

	secondVector.push_back(100);
	secondVector.push_back(200);
	cout << "Second Vector Size: " << secondVector.size() << endl;
	for (int i = 0; i < secondVector.size(); i++) {
		cout << "Element at index " << i << ":" << secondVector.at(i) << endl;
	}

	cout << endl;

	//vector <vector<int>> vector2D = { firstVector,secondVector };
	vector<vector<int>> vector2D;
	vector2D.push_back(firstVector);
	vector2D.push_back(secondVector);
	cout << "-- vector2D before modifying a spesific Element --" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << vector2D.at(i).at(j) << " ";
		}
		cout << "\n";
	}

	cout << endl;

	firstVector.at(0) = 1000;
	cout << "-- vector2D after modifying a spesific Element --" << endl;
	for (int i = 0; i < firstVector.size(); i++) {
		for (int j = 0; j < secondVector.size(); j++) {
			cout << vector2D.at(i).at(j) << " ";
		}
		cout << "\n";
	}

	cout << endl;

	for (int i = 0; i < firstVector.size(); i++) {
		cout << "Element at index " << i << ":" << " " << firstVector.at(i) << endl;
	}

	return 0;
}