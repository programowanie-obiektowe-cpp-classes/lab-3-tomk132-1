

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

    // rzutowanie statyczne
    Kwadrat kwadrat2{6};
    id(kwadrat2);

    Kwadrat kwadrat3{8};
    kwadrat3.id();

    Figura figura3 = static_cast< Figura >(kwadrat3); 
    figura3.id(); 

    id(figura3); 


    return 0;
};