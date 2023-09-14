#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task6V2Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task6V2Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* service2 = new  Service2();
			float x, y;
			x = 27;
			y = 62;
			int a;
			a = service2->Calculate(x, y);

		};
	};
}