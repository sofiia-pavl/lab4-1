#include "Ball.h"

void Ball::SetA(int x)
{
	Abstract::SetA(x);
}

int Ball::GetA() const
{
	return Abstract::GetA();
}

Ball::Ball()
{
	Abstract::SetA(0);
}

Ball::Ball(int a = 0)
{
	Abstract::SetA(a);
}

Ball::Ball(Ball& q)
	: Ball(q.GetA())
{}

void Ball::Print()
{
	cout << "The radius of the sphere: " << GetA() << endl;
}

double Ball::SurfaceArea()
{
	return 4 * 3.14 * (GetA() * GetA());
}