#include <iostream>
using namespace std;

int main()
{
	int mySavings = 2000;
	float yourPercentage = 50.0f;
	float yourShare = (mySavings * (yourPercentage / 100.0f));

	cout << "Your share: " << yourShare << endl;

	return 0;
}

