

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

    //// rzutowanie statyczne
    //Kwadrat kwadrat2{6};
    //id(kwadrat2);

    //Kwadrat kwadrat3{8};
    //kwadrat3.id();

    //Figura figura3 = static_cast< Figura >(kwadrat3);
    //figura3.id();

    //id(figura3);

    //// zadanie 12

    //Figura* kwadrat4 = new Kwadrat{8};
    //Figura* kwadrat5 = new Kwadrat{10};

    //Kwadrat* kwad6 = dynamic_cast< Kwadrat* >(kwadrat4);

    //Kolo* kolo7 = dynamic_cast< Kolo* >(kwadrat5);

    //id(*kwad6);

    //if (kolo7 == nullptr) {
    //    std::cout << "Kolo7 to nullptr" << std::endl;
    //}
    //else {
    //    id(*kolo7);
    //}

    //kwad6->id();

    //if (kolo7 == nullptr) {
    //    std::cout << "Kolo7 to nullptr" << std::endl;
    //}
    //else {
    //    kolo7->id();
    //    ;
    //}

    //// destruktor zad13

    //Figura* f = new Kwadrat{20};
    //delete f;

    //delete kwadrat4;
    //delete kwadrat5;

    //// Zadania 15-19 Heterogeniczny kontener
    //WektorFigur wf;

    //wf.push(new Kolo{3});
    //wf.push(new Kwadrat{5});
    //wf.push(new Figura{6});

    //wf.pop();
    //wf.pop();
    //wf.pop();

    // Wizytator

    WektorFigur wf2;
    wf2.push(new Kolo{10});
    wf2.push(new Kwadrat{20});
    wf2.push(new Kwadrat{30});

    WizytatorDrukujacy w;
    wf2.wizytujWszystkie(w);

    wf2.pop();
    wf2.pop();
    wf2.pop();

    return 0;
};