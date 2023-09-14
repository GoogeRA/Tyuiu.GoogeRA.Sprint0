#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task6V0Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task6V0Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* service = new  Service();
			float x, y;
			x = 5;
			y = 42;
			int a;
			a = service->Calculate(x, y);

		};
	};
}