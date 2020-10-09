#include <iostream>
using namespace std;

int main()
{
    //Initialise base variables
    int rain = 1;
    int snow = 2;

    //Initialise input variables
    int inputWeather;
    int inputTemp;

    //Get weather
    cout << "Please select the current weather:" << endl << rain << ". Raining" << endl << snow << ". Snowing" << endl;
    cin >> inputWeather;

    //Get temperature
    cout << "Please tell me the temperature in celsius: " << endl;
    cin >> inputTemp;

    //Use weather
    if (inputWeather == rain)
    {
        //Output message based on temperature
        if (inputTemp > 15)
        {
            cout << "Wear a light raincoat, you don't want to overheat." << endl;
        }
        else
        {
            cout << "Wear a thick coat, you don't want to be cold." << endl;
        }
    }
    else if (inputWeather == snow)
    {
        //Output message based on temperature
        if (inputTemp > 5)
        {
            cout << "Make sure to wear something warm." << endl;
        }
        else if (inputTemp > 0)
        {
            cout << "Wrap up particularly well, it's pretty cold out there." << endl;
        }
        else
        {
            cout << "It might be best to stay at home." << endl;
        }
    }
    else
    {
        //Catches all other inputs
        cout << "Must be nice weather then! Goodbye!" << endl;
    }
}