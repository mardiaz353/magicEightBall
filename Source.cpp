#include<iostream>
#include<string>
#include<time.h>
#include<cstdlib>

using namespace std;

const int ARRAYLENGTH = 8;

int main() {

	//declarations
	string userResponse;

	srand(time(0));
	string answerArray[ARRAYLENGTH];

	answerArray[0] = "You betcha!";
	answerArray[1] = "It could happen";
	answerArray[2] = "I can't even right now!";
	answerArray[3] = "Leave me alone. No";
	answerArray[4] = "Ask me later";
	answerArray[5] = "That's a hard yes.";
	answerArray[6] = "That's a hard no";
	answerArray[7] = "Was that even question?";

	cout << "Welcome to magic eight ball. Please ask a yes or no question only, or type exit to quit." << endl;
	getline(cin, userResponse);

	//calculation
	while (userResponse != "exit") {
		if (userResponse != "exit") {
			cout << answerArray[rand() % ARRAYLENGTH] << endl;
			cout << "Ask another question or enter quit" << endl;
			//cin >> userResponse;
			getline(cin, userResponse);
		}
	}
	cout << "Nice knowing you. Bye..." << endl;
	//output


	return 0;
}