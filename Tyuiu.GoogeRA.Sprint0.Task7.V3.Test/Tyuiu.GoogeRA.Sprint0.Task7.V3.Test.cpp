#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task7V3Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task7V3Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* diva3 = new Service3();
			int x = 666655;
			int y = 4324654;
			char a, b;
			a = diva3->Rezalt(x);
			b = diva3->Rezalt(y);
		}
	};
}
