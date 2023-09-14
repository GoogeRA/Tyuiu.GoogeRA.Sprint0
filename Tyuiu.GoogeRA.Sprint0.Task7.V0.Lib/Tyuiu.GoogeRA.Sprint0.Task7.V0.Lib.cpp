// Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include <string>
using namespace std;


    class Service : public ISprint0Task7
    {

        virtual float Rezalt(int a) override
        {
            int c = a; 
            string s = to_string(c);
            int b = s.length();
            if (b == 3)
            {
                return true;
            }
            else
            {
                return false;
            }
        };
    };
    class Service1 : public ISprint0Task7
    {

        virtual float Rezalt(int a) override
        {
            int c = a;
            string s = to_string(c);
            int b = s.length();
            if (b == 4)
            {
                return true;
            }
            else
            {
                return false;
            }
        };
    };
    class Service2 : public ISprint0Task7
    {

        virtual float Rezalt(int a) override
        {
            int c = a;
            string s = to_string(c);
            int b = s.length();
            if (b == 5)
            {
                return true;
            }
            else
            {
                return false;
            }
        };
    };
    class Service3 : public ISprint0Task7
    {

        virtual float Rezalt(int a) override
        {
            int c = a;
            string s = to_string(c);
            int b = s.length();
            if (b == 6)
            {
                return true;
            }
            else
            {
                return false;
            }
        };
    };
    class Service4 : public ISprint0Task7
    {

        virtual float Rezalt(int a) override
        {
            int c = a;
            string s = to_string(c);
            int b = s.length();
            if (b == 7)
            {
                return true;
            }
            else
            {
                return false;
            }
        };
    };