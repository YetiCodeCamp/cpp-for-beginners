#include "utility.h"

utility::utility()
{
    // constructor, called automatically when an utility object is created, we will go over constructors
    // in a later video, for now this is just a placeholder and it does nothing
}

void utility::addLine(int lines)
{
        for(int i=0; i<lines; i++)
        std::cout << std::endl;
}
