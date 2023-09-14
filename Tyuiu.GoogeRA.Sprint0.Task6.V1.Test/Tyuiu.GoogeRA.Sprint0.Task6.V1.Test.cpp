#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task6V1Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task6V1Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* service1 = new  Service1();
			float x, y;
			x = 7;
			y = 32;
			int a;
			a = service1->Calculate(x, y);

		};
	};
}