#include <iostream>

int main()
{
    // Initialise fahrenheit
    float fahrenheit = 95.0f;

    // Calculate celsius
    float celsius = (fahrenheit - 32) * 0.5556;

    std::cout << fahrenheit << "F is equal to " << celsius << "C." << std::endl;

    return 0;
}
