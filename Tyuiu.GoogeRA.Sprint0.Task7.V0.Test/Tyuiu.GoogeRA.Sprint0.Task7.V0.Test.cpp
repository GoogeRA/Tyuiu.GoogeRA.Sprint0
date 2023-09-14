#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib/Tyuiu.GoogeRA.Sprint0.Task7.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0Task7V0Test
{
	TEST_CLASS(TyuiuGoogeRASprint0Task7V0Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* diva = new Service();
			int x = 132;
			int y = 4324;
			char a, b;
			a = diva->Rezalt(x);
			b = diva->Rezalt(y);
		}
	};
}
