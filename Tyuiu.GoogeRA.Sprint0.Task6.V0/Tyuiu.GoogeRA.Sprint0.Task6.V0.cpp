// Tyuiu.GoogeRA.Sprint0.Task6.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib.cpp"

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint0Task6* dota = new Service();
    cout << "Googe\a\t" << "Robert\t" << "Aleksandrovich\n";
    cout << endl;
    cout << "Task6.V0\n";
    float x, y;
    cin >> x;
    cout << endl;
    cin >> y;
    cout << endl;
    cout << "Rezult = " << dota->Calculate(x, y);

    cout << endl;
    cout << endl;

    setlocale(LC_ALL, "Russian");
    ISprint0Task6* dota1 = new Service1();
    cout << "Task6.V1\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezult = " << dota1->Calculate(x, y);

    cout << endl;
    cout << endl;

    setlocale(LC_ALL, "Russian");
    ISprint0Task6* dota2 = new Service2();
    cout << "Task6.V2\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezult = " << dota2->Calculate(x, y);

    cout << endl;
    cout << endl;

    setlocale(LC_ALL, "Russian");
    ISprint0Task6* dota3 = new Service3();
    cout << "Task6.V3\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezult = " << dota3->Calculate(x, y);

    cout << endl;
    cout << endl;

    setlocale(LC_ALL, "Russian");
    ISprint0Task6* dota4 = new Service4();
    cout << "Task6.V3\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezult = " << dota4->Calculate(x, y);

    cout << endl;
    cout << endl;
}


