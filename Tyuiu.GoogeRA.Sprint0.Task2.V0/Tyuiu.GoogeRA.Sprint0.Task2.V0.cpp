// Tyuiu.GoogeRA.Sprint0.Task2.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GoogeRA.Sprint0.Task2.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task2.V0.Lib.cpp"

int main()
{
	ISprint0Task2V0* service = new Service();
	std::cout << "Googe\a\t" << "Robert\t" << "Aleksandrovich\n";
	std::cout << std::endl;
	std::cout << "Rezult 1+2= " << service->Add(1, 2);
	std::cout << std::endl;
}