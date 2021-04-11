#pragma once
#include <iostream>

using namespace std;

class Abstract
{
private:
	int a;
public:
	void SetA(int);
	int GetA() const;

	virtual double SurfaceArea() = 0;
	virtual void Print() = 0;
};

