// Tyuiu.GoogeRA.Sprint0.Task7.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib.cpp"
#include <math.h>
#include <string>

using  namespace std;

int main()
{
    {
        setlocale(LC_ALL, "RUSSIAN");
        cout << "Googe\a\t" << "Robert\t" << "Aleksandrovich\n";
        ISprint0Task7* diva = new Service();
        cout << "Task7.V0n";
        int x, n;
        cout << "������� ���������� �����: ";
        cin >> x;
        if (diva->Rezalt(x) == true)
        {
            cout << "������� ����� �� ��������: ";
            cin >> n;
            string sx = to_string(x);
            string sn = to_string(n);
            if (sx.find(sn) < 3)
            {
                cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
            }
            else
            {
                cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
            }
        }
        else
        {
            cout << "����� " + to_string(x) + " �� �����������.\n";
        }
        cout << endl;
        cout << endl;
    };
    {
        ISprint0Task7* diva1 = new Service1();
        cout << "Task7.V1\n";
        int x, n;
        cout << "������� ������� ������� �����: ";
        cin >> x;
        if (diva1->Rezalt(x) == true)
        {
            cout << "������� ����� �� ��������: ";
            cin >> n;
            string sx = to_string(x);
            string sn = to_string(n);
            if (sx.find(sn) < 4)
            {
                cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
            }
            else
            {
                cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
            }
        }
        else
        {
            cout << "����� " + to_string(x) + " �� ��������������.\n";
        }
        cout << endl;
        cout << endl;
    };
    { 
        ISprint0Task7* diva2 = new Service2();
        cout << "Task7.V2\n";
        int x, n;
        cout << "������� ����������� �����: ";
        cin >> x;
        if (diva2->Rezalt(x)  == true)
        {
            cout << "������� ����� �� ��������: ";
            cin >> n;
            string sx = to_string(x);
            string sn = to_string(n);
            if (sx.find(sn) < 5)
            {
                cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
            }
            else
            {
                cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
            }
        }
        else
        {
            cout << "����� " + to_string(x) + " �� �����������.\n";
        }
        cout << endl;
        cout << endl;
    };
    {
        ISprint0Task7* diva3 = new Service3();
        cout << "Task7.V3\n";
        int x, n;
        cout << "������� ������������ �����: ";
        cin >> x;
        if (diva3->Rezalt(x) == true)
        {
            cout << "������� ����� �� ��������: ";
            cin >> n;
            string sx = to_string(x);
            string sn = to_string(n);
            if (sx.find(sn) < 6)
            {
                cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
            }
            else
            {
                cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
            }
        }
        else
        {
            cout << "����� " + to_string(x) + " �� ������������.\n";
        }
        cout << endl;
        cout << endl;
    };
    {
        ISprint0Task7* diva4 = new Service4();
        cout << "Task7.V4\n";
        int x, n;
        cout << "������� ����������� �����: ";
        cin >> x;
        if (diva4->Rezalt(x) == true)
        {
            cout << "������� ����� �� ��������: ";
            cin >> n;
            string sx = to_string(x);
            string sn = to_string(n);
            if (sx.find(sn) < 7)
            {
                cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
            }
            else
            {
                cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
            }
        }
        else
        {
            cout << "����� " + to_string(x) + " �� �����������.\n";
        }
        cout << endl;
        cout << endl;
    };
};

