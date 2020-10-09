#include <iostream>
using namespace std;

int main()
{
	//Initialise and define constants
	const char TEACHER = 't';
	const char STUDENT = 's';
	const char OTHER = 'o';

	//Initialise variables
	char userType;
	int userGame;

	//Get user type
	cout << "Please tell me which of these fits your current status:" << endl << TEACHER << ": teacher" << endl << STUDENT << ". student" << endl << OTHER << ". other" << endl;
	cin >> userType;

	//Get user's game value
	cout << "Please tell me the value of the game you would like." << endl;
	cin >> userGame;

	//Calculate discount
	if (userGame == 1 && (userType == TEACHER || userType == STUDENT))
	{
		//Student/teacher discount
		cout << "You are entitled to a 20% discount!" << endl;
	}
	else if (userGame == 2 && (userType == TEACHER || userType == STUDENT))
	{
		//Student/teacher discount
		cout << "You are entitled to a 10% discount!" << endl;
	}
	else
	{
		//No discount - default
		cout << "Sorry, you are not entitled to a discount." << endl;
	}

	return 0;
}