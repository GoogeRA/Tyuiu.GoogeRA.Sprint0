
#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task5.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task5V0Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task2V1Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V1* date = new Service();
			float a = 7.5;
			int b = 9;
			int c = 5;
			float d;

			d = date->Summ(a, b, c);
		
		}
	};
}
