#include <iostream>
using namespace std;

int main()
{
	//Initialise the input variable
	int input;

	//Print the menu
	cout << "Please select an option:" << endl << "1. Sunny" << endl << "2. Cloudy" << endl << "3. Raining" << endl << "4. Exit" << endl;

	//Get the input from the user
	cin >> input;

	switch (input)
	{
	case 1:
		cout << "Don't forget your sunscreen!" << endl;
		break;
	case 2:
		cout << "Remember a jacket!" << endl;
		break;
	case 3:
		cout << "Best remember an umbrella!" << endl;
		break;
	case 4:
		cout << "Goodbye!" << endl;
		break;
	default:
		cout << "Sorry, I don't recognise that." << endl;
		break;
	}

	return 0;
}
