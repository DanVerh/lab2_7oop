#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2_7oop/Account.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Account t;
			t.SetNum(0.5);
			double p = t.GetNum();
			Assert::AreEqual(0.5, p);
		}
	};
}
