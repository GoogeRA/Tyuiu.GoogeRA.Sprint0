#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task5.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task5V2Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task5V4Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new ServiceV4();
			float a = 67;
			float b = 8.5;
			float c = 6.5;
			int d;

			d = date->Zadacha(a, b, c);

			Assert::AreEqual(74, d);
		}
		
	};
}