#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2_7oop/Money.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod3)
		{
			Money b(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			double a = b.Sum();
			Assert::AreEqual(1000.0, a);
		}
	};
}