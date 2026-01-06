#pragma once

#include <iostream>
#include <numbers>

class Figura
{

public:
    // void set(double pole_nowy) { pole = pole_nowy; }

    Figura(double pole_in) : pole{pole_in} {};
    double       get() const { return pole; }
    virtual void id() const { std::cout << "Mój typ to Figura a pole to:" << pole << std::endl; }

private:
    // protected:
    double pole;
};

class Kolo : public Figura
{
public:
    Kolo(double r) : Figura(std::numbers::pi * r * r) {};
    void id() const override { std::cout << "Mój typ to Koło a pole to:" << get() << std::endl; }
};

class Kwadrat : public Figura
{
public:
    Kwadrat(double bok) : Figura(bok * bok) {};
    void id() const override { std::cout << "Mój typ to Kwadrat a pole to:" << get() << std::endl; }
};

void id(const Figura& figura)
{
    figura.id();
}