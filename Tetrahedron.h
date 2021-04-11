#pragma once
#include "Abstract.h"
class Tetrahedron :
    public Abstract
{
public:
    void SetA(int);

    int GetA() const;

    Tetrahedron();
    Tetrahedron(int);
    Tetrahedron(Tetrahedron&);

    virtual void Print();
    virtual double SurfaceArea();
};

