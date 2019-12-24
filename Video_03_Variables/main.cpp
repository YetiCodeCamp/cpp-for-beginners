#include <iostream>
#include <stdlib.h>
#include <climits>
#include <cfloat>

int print_data_types();
void PadOutput(int);

int main()
{
    print_data_types();
    return 0;
}

int print_data_types()
{
    system("cls");  // Clear the screen

    std::cout << "Size of various data types and ranges on this platform:\n\n";
    std::cout << "Void:   \t" <<  sizeof(void) << " byte." << std::endl;
    std::cout << "Boolean:\t" <<  sizeof(bool) << " byte." << std::endl;
    std::cout << "Character:\t" <<  sizeof(char) << " byte." << std::endl;
    std::cout << "Wide Char:\t" <<  sizeof(wchar_t) << " byte." << std::endl;
    std::cout << "Short  :\t" <<  sizeof(short) << " bytes.  Range: (" << SHRT_MIN << " to " << SHRT_MAX << ")\n";
    std::cout << "Unsigned Short:\t" <<  sizeof(unsigned short) << " bytes.  Range: (0 to " << USHRT_MAX << ")\n";
    std::cout << "Integer:\t" <<  sizeof(int) << " bytes.  Range: (" << INT_MIN << " to " << INT_MAX << ")\n";
    std::cout << "Unsigned Int:\t" <<  sizeof(unsigned int) << " bytes.  Range: (0 to " << UINT_MAX << ")\n";
    std::cout << "Long:   \t" <<  sizeof(long) << " bytes.  Range: (" << LONG_MIN << " to " << LONG_MAX << ")\n";
    std::cout << "Unsigned Long:\t" <<  sizeof(unsigned long) << " bytes.  Range: (0 to " << ULONG_MAX << ")\n";
    std::cout << "Long long:\t" <<  sizeof(long long) << " bytes.  Range: (" << LLONG_MIN << " to " << LLONG_MAX << ")\n";
    std::cout << "Unsigned LLong:\t" <<  sizeof(unsigned long long) << " bytes.  Range: (0 to " << ULLONG_MAX << ")\n";
    std::cout << "Float:  \t" <<  sizeof(float) << " bytes.  Range: (" << FLT_MIN << " to " << FLT_MAX << ")\n";
    std::cout << "Double: \t" <<  sizeof(double) << " bytes.  Range: (" << DBL_MIN << " to " << DBL_MAX << ")\n";

    PadOutput(5);

    system("pause");    // Pauses until user hits a key

    // std::cout << "Press any key to continue . . . ";
    // std::cin.get();

    return 1;           // Returns 1 to calling program, will be used in later programs
}

void PadOutput(int lines)
{
    for(int i=0; i<lines; i++)
        std::cout << std::endl;
}
