// Tyuiu.GoogeRA.Sprint0.Task5.V0.Lib.cpp : Defines the functions for the static library.
//


#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service : public ISprint0Task2V1
{

	virtual int Summ(float a, int b, int c) override
	{
		return a * b * c;
	};

};
class ServiceV1 : public ISprint0Task5
 
{
	virtual int Zadacha(float a, float b, float c)  
	{
		return (a + b) * c;
	};
};
class ServiceV2 : public ISprint0Task5

{
	virtual int Zadacha(float a, float b, float c) 
	{
		return a + b + c;
	};
};
class ServiceV3 : public ISprint0Task2V2 
{

	virtual int SummV2(int a, int b, int c)
	{
		return (a + b + c)+ (a * b) / 2;

	}
};
class ServiceV4 : public ISprint0Task5
	
	
{
	virtual int Zadacha(float a, float b, float c)
	{
		float benz;
		benz = 100 / b;
		return a / benz * c * 2;
	};
};