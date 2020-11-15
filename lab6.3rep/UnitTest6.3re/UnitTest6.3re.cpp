#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3rep/lab6.3rep.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63re
{
	TEST_CLASS(UnitTest63re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 4;
			int i = 2;
			int S = 3;
			int r[n] = { 20, 1, -5, 6 };
			t = Sum(r, n, i, S);
			Assert::AreEqual(t, 9);

		}
	};
}
