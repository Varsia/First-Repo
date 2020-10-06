#include <iostream>

int main()
{
    char play_again;

    std::cout << "Would you like to play again? [y or n]" << std::endl;
    std::cin >> play_again;

    switch (play_again)
    {
    case 'y':
        std::cout << "You chose to play again.";
        break;
    case 'n':
        std::cout << "Goodbye.";
        break;
    default:
        std::cout << "That's not 'y' or 'n'.";
        break;
    }
}