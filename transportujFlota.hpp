#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj

    unsigned int TransportSuma{0}; 

    //utworzenie fabryki
    Stocznia s; 

    unsigned int licznik_zaglowiec{0}; 


    while (TransportSuma < towar && towar != 0)
    {
    
    Statek* StatekLive = s();      

    if (dynamic_cast< Zaglowiec* > (StatekLive) != nullptr) {
        licznik_zaglowiec++;
    }; 

    TransportSuma = TransportSuma + StatekLive->transportuj(); 



    delete StatekLive; 



    }; 



    return licznik_zaglowiec;
}