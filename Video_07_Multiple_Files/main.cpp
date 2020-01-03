#include <iostream>
#include "utility.h"
#include "datatypes.h"

int main()
{
    utility util;                   // Creates an object of the utility class named 'util'.

    std::cout << "This is the first line of the program" << std::endl;

    util.addLine(15);               // Calls the addLine() function from the utility class object util.

    std::cout << "This is the last line of the program" << std::endl;

    util.addLine(2);

    std::cout << "Press enter to continue . . . ";
    std::cin.get();                 // Waits for user input, used here to pause so we can see first half of program

    print_data_types();             // Calls print_data_types function that is enabled via datatypes.h header.

}
