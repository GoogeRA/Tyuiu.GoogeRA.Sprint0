#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task3.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task3V0Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task3V0Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3* date = new Service();
			int a = 3;
			int b = 4;
			int c = 5;
			int d;

			d = date ->SummV3(a, b, c);
			Assert::AreEqual(12, d);
		}
	};
}
