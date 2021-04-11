#pragma once
#include "Abstract.h"

class Cube :
    public Abstract
{
public:
    void SetA(int);

    int GetA() const;

    Cube();
    Cube(int);
    Cube(Cube&);

    virtual void Print();
    virtual double SurfaceArea();
};

