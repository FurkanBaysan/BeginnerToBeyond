#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	vector<int> vec = { 10,20,30,40,50 };
	cout << "Vector Size: " << vec.size() << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << " ";
	}
	vec.at(0) = 100;
	vec.at(vec.size() - 1) = 1000;

	cout << endl;

	cout << "Vector Size: " << vec.size() << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << " ";
	}

	return 0;
}