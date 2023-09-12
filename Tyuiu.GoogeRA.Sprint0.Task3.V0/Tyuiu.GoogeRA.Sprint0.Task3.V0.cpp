
#include <iostream>
#include "../Tyuiu.GoogeRA.Sprint0.Task3.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task3.V0.Lib.cpp"

int main()
{
    ISprint0Task3* date = new Service();
    std::cout << "PetrovCA\n";
    std::cout << "P = a*b*c\n";
    std::cout << "Rezult = " << date->SummV3(3, 4, 5);
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