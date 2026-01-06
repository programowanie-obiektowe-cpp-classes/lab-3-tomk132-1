#pragma once

#include <iostream>
#include <numbers>

class Figura
{

public:
    // void set(double pole_nowy) { pole = pole_nowy; }

    Figura(double pole_in) : pole{pole_in}
    {
        std::cout << "KONSTRUKTOR Figura" << std::endl;
        std::cout << this->get() << std::endl;
    };
    virtual ~Figura()
    {

        std::cout << "DESTRUKTOR Figura" << std::endl;
        std::cout << this->get() << std::endl;
    };
    double       get() const { return pole; }
    virtual void id() const { std::cout << "Mój typ to Figura a pole to:" << pole << std::endl; }

private:
    // protected:
    double pole;
};

class Kolo : public Figura
{
public:
    Kolo(double r) : Figura(std::numbers::pi * r * r)
    {

        std::cout << "KONSTRUKTOR Kolo" << std::endl;
        std::cout << this->get() << std::endl;
    };
    ~Kolo()
    {
        std::cout << "DESTRUKTOR Kolo" << std::endl;
        std::cout << this->get() << std::endl;
    };
    void id() const override { std::cout << "Mój typ to Koło a pole to:" << get() << std::endl; }
};

class Kwadrat : public Figura
{
public:
    Kwadrat(double bok) : Figura(bok * bok)
    {
        std::cout << "KONSTRUKTOR Kwadrat" << std::endl;
        std::cout << this->get() << std::endl;
    };
    ~Kwadrat()
    {
        std::cout << "DESTRUKTOR Kwadrat" << std::endl;
        std::cout << this->get() << std::endl;
    };
    void id() const override { std::cout << "Mój typ to Kwadrat a pole to:" << get() << std::endl; }
};

void id(const Figura& figura)
{
    figura.id();
}