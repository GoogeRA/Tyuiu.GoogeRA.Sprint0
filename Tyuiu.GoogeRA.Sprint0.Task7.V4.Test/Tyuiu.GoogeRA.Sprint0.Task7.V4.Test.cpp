#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task7V4Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task7V4Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* diva4 = new Service4();
			int x = 6666554;
			int y = 43246544;
			char a, b;
			a = diva4->Rezalt(x);
			b = diva4->Rezalt(y);
		}
	};
}