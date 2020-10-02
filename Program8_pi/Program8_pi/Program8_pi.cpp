#include <iostream>

int main()
{
    // Initialise constants
    const float pi = 3.14159f;

    // Initialise radius
    float radius = 25.0f;

    //Calculate area
    float area = pi * radius * radius;

    //Output
    std::cout << "The area of a circle with a radius of " << radius << " is " << area << std::endl;

    return 0;
}
