#include <iostream>
#include "../NumUtil.h"

int main()
{
    NumUtil numUtil;
    std::cout << "Two plus " << std::endl << "one is: " << std::endl
              << numUtil.add(2, 1) << std::endl;
    return 0;
}
