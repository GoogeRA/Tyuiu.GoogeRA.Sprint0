#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task7V2Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task7V2Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* diva2 = new Service2();
			int x = 13246;
			int y = 432456;
			char a, b;
			a = diva2->Rezalt(x);
			b = diva2->Rezalt(y);
		}
	};
}