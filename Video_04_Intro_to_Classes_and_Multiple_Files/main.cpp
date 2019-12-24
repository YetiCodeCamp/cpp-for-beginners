#include <iostream>
#include "Utility.h"

int main()
{

    Utility util;

    std::cout << "Hello world!" << std::endl;
    util.addLine(15);
    std::cout << "Goodbye world!" << std::endl;

    std::cin.get();
    util.dataTypes();

    return 0;
}
