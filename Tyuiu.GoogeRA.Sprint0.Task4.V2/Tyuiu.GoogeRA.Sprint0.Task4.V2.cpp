// Tyuiu.GoogeRA.Sprint0.Task4.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GoogeRA.Sprint0.Task4.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task4.V0.Lib.cpp"


int main()
{
	ISprint0Task4* service = new Service();
	std::cout << "Googe\a\t" << "Robert\t" << "Aleksandrovich\n";
	std::cout << std::endl;
	std::cout << "Task2.V0\n";
	std::cout << "Rezult (6/2*3)/9 = " << service->Calculate(6, 2, 3, 9);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

}