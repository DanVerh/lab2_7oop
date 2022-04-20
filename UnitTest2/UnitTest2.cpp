#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2_7oop/Account.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Account t("a", 1010, 0.5, 1234);
			int p = t.GetNum();
			Assert::AreEqual(1010, p);
		}
	};
}
