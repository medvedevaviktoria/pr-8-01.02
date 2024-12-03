#include "pch.h"
#include "CppUnitTest.h"
#include "../kr/dates.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestMethodMonthDays)
		{
			int month = 12;
			int year = 2024;
			int expected = 31;
			int actual = monthDays(month, year);

			Assert::AreEqual(expected, actual);
		}
	};
}
