#pragma once

#include <numbers>

class Figura
{

public:
    // void set(double pole_nowy) { pole = pole_nowy; }

    Figura(double pole_in) : pole{pole_in} {};
    double get() const { return pole; }

private:
    // protected:
    double pole;
};

class Kolo : public Figura
{
public:
    Kolo(double r) : Figura(std::numbers::pi * r * r) {};
};

class Kwadrat : public Figura
{
public:
    Kwadrat(double bok) : Figura(bok * bok) {};
};