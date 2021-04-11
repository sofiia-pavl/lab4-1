#include "Tetrahedron.h"

void Tetrahedron::SetA(int x)
{
	Abstract::SetA(x);
}

int Tetrahedron::GetA() const
{
	return Abstract::GetA();
}

Tetrahedron::Tetrahedron()
{
	Abstract::SetA(0);
}

Tetrahedron::Tetrahedron(int a = 0)
{
	Abstract::SetA(a);
}

Tetrahedron::Tetrahedron(Tetrahedron& q)
	: Tetrahedron(q.GetA())
{}

void Tetrahedron::Print()
{
	cout << "The value of 'a' is equal to: " << GetA() << endl;
}

double Tetrahedron::SurfaceArea()
{
	return  sqrt(3)* (GetA() * GetA());
}