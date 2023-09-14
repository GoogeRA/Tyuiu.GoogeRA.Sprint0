// Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib.cpp : Defines the functions for the static library.
//


#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"


class Service : public ISprint0Task6
{
public:

	virtual int Calculate(float x, int y)
	{
		return (x / 3 / y + 6);
	}
};
class Service1 : public ISprint0Task6
{

	virtual int Calculate(float x, int y)
	{
		return x * y / (5 + x) + 6;
	}
};
class Service2 : public ISprint0Task6
{

	virtual int Calculate(float x, int y)
	{
		return (5 + (x * y / 3));
	}
};
class Service3 : public ISprint0Task6
{

	virtual int Calculate(float x, int y)
	{
		return (5 * x) / (7 + y);
	}
};
class Service4 : public ISprint0Task6
{

	virtual int Calculate(float x, int y)
	{
		return (x * 8) / y * 2;
	}
};
