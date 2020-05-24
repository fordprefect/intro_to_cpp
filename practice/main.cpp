#include <iostream>

// forward declaration: needed so that main.cpp knows add() is a function.
int add(int x, int y);

int main()
{
    std::cout << "One plus " << std::endl << "one is: " << std::endl
              << add(1, 1) << std::endl;
    return 0;
}
