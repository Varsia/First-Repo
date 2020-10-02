#include <iostream>

int main()
{
    typedef int cost;
    enum CarMake
    {
        Ford,
        Fiat,
        Tesla,
        VW,
        BMW,
        AstonMartin,
        Honda,
        Nissan,
        Toyota,
        Audi,
        Jaguar,
        Dodge
    };

    cost carValue = 13000;
    CarMake carType = Honda;
    std::cout << "My car's value is: " << carValue << std::endl << "My car's ID is: " << carType << std::endl;

    return 0;
}

