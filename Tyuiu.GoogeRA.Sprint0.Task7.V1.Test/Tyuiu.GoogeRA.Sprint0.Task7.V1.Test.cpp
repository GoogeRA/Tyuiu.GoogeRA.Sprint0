#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task7V1Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task7V1Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* diva1 = new Service1();
			int x = 1324;
			int y = 43245;
			char a, b;
			a = diva1->Rezalt(x);
			b = diva1->Rezalt(y);
		}
	};
}
