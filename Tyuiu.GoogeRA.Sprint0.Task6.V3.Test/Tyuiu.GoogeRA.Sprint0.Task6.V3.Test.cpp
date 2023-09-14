#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task6.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task6V3Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task6V3Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* service3 = new  Service3();
			float x, y;
			x = 8;
			y = 65;
			int a;
			a = service3->Calculate(x, y);

		};
	};
}
