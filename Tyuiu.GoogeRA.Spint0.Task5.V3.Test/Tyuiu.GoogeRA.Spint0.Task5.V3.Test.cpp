#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task5.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task5V3Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task5V3Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V2* date = new ServiceV3();
			int a = 4;
			int b = 5;
			int c = 6;
			int d;

			d = date->SummV2(a, b, c);

			Assert::AreEqual(15, d);
		}

	};
}
