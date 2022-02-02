#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	//--  Vector Declaration Types --

	// vector<char> vowels;     // empty
	// vector <int> vowels (5)   //5 character data's initialized to 0.
	// vector<char> testScores (3);     // 3 integer data's initialized to 0.

	// Declaration and Initialization of Vectors
	vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
	cout << vowels[0] << endl;
	cout << vowels[4] << endl;

	// -- Another Declaration and Initialization of Vectors --
	//  vector<int> testScores (3,100);    // Vector holds 3 integer data and each one is initialized to 0.

	vector<int> testScores = { 100, 98, 89 };

	cout << "\nTest Scores using array syntax:" << endl;
	cout << testScores[0] << endl;
	cout << testScores[1] << endl;
	cout << testScores[2] << endl;

	cout << "\nTest Scores using vector syntax:" << endl;
	cout << testScores.at(0) << endl;
	cout << testScores.at(1) << endl;
	cout << testScores.at(2) << endl;
	cout << "\nThere are " << testScores.size() << " scores in the Vector" << endl;

	cout << endl;

	cout << "\t"
		<< "-- Modifying Vector Elements --" << endl;

	cout << "\nEnter 3 Test Scores: ";
	cin >> testScores.at(0);
	cin >> testScores.at(1);
	cin >> testScores.at(2);
	cout << "\t"
		<< "Updated Test Scores" << endl;
	for (int i = 0; i < testScores.size(); i++) {
		cout << "Element at index " << i << ":"
			<< " " << testScores.at(i) << endl;
	}

	cout << "\Enter a Test Score to add to the Vector: ";
	int score;
	cin >> score;
	testScores.push_back(score);
	cout << "\Enter one more Test Score to add the Vector: ";
	cin >> score; // score'a klavyeden girilen yeni bir data assign edilicek, onu tutucak.
	testScores.push_back(score);

	for (int i = 0; i < testScores.size(); i++) {
		cout << "Element at index " << i << ":"
			<< " " << testScores.at(i) << endl;
	}
	cout << "\nThere are now " << testScores.size() << " scores in the vector" << endl;

	cout << endl;

	//  cout << "This should cause an Exception " << testScores.at(10);

	cout << "Scenario: 2D-vectors" << endl;

	vector<vector<int>> movieRatings = { { 1, 2, 3, 4 }, { 1, 2, 4, 4 }, { 1, 3, 4, 5 } };
	// Rows are holded/represented the Reviewers
	// Columns are holded/represented the Movies

	// These rating values are the ratings given to each movie by the first reviewer (Reviewer #1), respectively.
	// Because [0] represent First Reviewer and  [0], [1], [2], [3] represent the movies in order.
	cout << "\nHere are the movie rating values for reviewer #1 using array syntax :" << endl;
	cout << movieRatings[0][0] << endl;
	cout << movieRatings[0][1] << endl;
	cout << movieRatings[0][2] << endl;
	cout << movieRatings[0][3] << endl;

	cout << "\nHere are the movie rating values for reviewer #1 using vector syntax :" << endl;
	cout << movieRatings.at(0).at(0) << endl;
	cout << movieRatings.at(0).at(1) << endl;
	cout << movieRatings.at(0).at(2) << endl;
	cout << movieRatings.at(0).at(3) << endl;

	cout << endl;

	cout << "All the ratings given by all the reviewers for each movie, respectively." << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << movieRatings[i][j] << " ";
		}
		cout << "\n";
	}


	return 0;
}