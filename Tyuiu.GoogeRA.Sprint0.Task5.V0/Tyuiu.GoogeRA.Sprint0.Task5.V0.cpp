// Tyuiu.GoogeRA.Sprint0.Task5.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GoogeRA.Sprint0.Task5.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task5.V0.Lib.cpp"


int main()
{
	ISprint0Task2V1* service = new Service();
	std::cout << "Googe\a\t" << "Robert\t" << "Aleksandrovich\n";
	std::cout << std::endl;
	std::cout << "Task5.V0\n";
	std::cout << "Rezult 7,5*9*5= " << service->Summ(7.5, 9, 5);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;


	ISprint0Task5* serviceV1 = new ServiceV1();
	std::cout << std::endl;
	std::cout << "Task5.V1\n";
	std::cout << "Rezult (2.75+0.5)*7= " << serviceV1->Zadacha(2.75, 0.5, 7.0);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	ISprint0Task5* serviceV2 = new ServiceV2();
	std::cout << std::endl;
	std::cout << "Task5.V2\n";
	std::cout << "Rezult 5.45+3.0+2.5=  " << serviceV2->Zadacha(5.45, 2.5, 3.0);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;


	ISprint0Task2V2* serviceV3 = new ServiceV3();
	std::cout << std::endl;
	std::cout << "Task5.V3\n";
	std::cout << "Rezult 5.45+3.0+2.5=  " << serviceV3->SummV2(4, 5, 6);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	ISprint0Task5*  serviceV4 = new ServiceV4();
	std::cout << std::endl;
	std::cout << "Task5.V4\n";
	std::cout << "Rezult =  " << serviceV4->Zadacha(67, 8.5, 6.5);

	std::cout << std::endl;
	std::cout << std::endl;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
