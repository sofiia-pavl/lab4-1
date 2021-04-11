#include "Cube.h"

void Cube::SetA(int x)
{
	Abstract::SetA(x);
}

int Cube::GetA() const
{
	return Abstract::GetA();
}

Cube::Cube()
{
	Abstract::SetA(0);
}

Cube::Cube(int a=0)
{
	Abstract::SetA(a);
}

Cube::Cube(Cube& q)
	: Cube(q.GetA())
{}

void Cube::Print()
{
	cout << "     _____________ " << endl;
	cout << "    /|           /|  " << endl;
	cout << "   /_|__________/ |  " << endl;
	cout << "   | |          | |  " << endl;
	cout << "  a| |          | |  " << endl;
	cout << "   | |__________|_|  " << endl;
	cout << "   |/           |/  " << endl;
	cout << "   /____________/  " << endl<<endl;
	cout << "The value of 'a' is equal to: " << GetA() << endl;
}

double Cube::SurfaceArea()
{
	return 6 * (GetA() * GetA());
}