

#include <iostream>

#include "Figury.h"

int main()
{

    Kolo    kolo1{2};
    Kwadrat kwadrat1{4};

    std::cout << "Pole kolo1 to: " << kolo1.get() << std::endl;

    std::cout << "Pole kwadrat1 to: " << kwadrat1.get() << std::endl;

    kolo1.id(); 
    kwadrat1.id(); 

    return 0;
};