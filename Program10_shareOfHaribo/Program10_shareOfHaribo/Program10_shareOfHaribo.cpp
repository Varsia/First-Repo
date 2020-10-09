#include <iostream>
using namespace std;

int main()
{
    int totalHaribo = 40;
    int studentCount = 14;

    //Calculations
    int studentHaribos = totalHaribo / studentCount;
    int myHaribos = totalHaribo % studentCount;

    //Output results
    cout << "Each student gets " << studentHaribos << " packets of Haribos" << endl;
    cout << "I get " << myHaribos << " packets of Haribos" << endl;
}