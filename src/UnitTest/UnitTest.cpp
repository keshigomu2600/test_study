#include "pch.h"
#include "CppUnitTest.h"
#include "../include/StaticLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//西暦1年はうるう年ではない
			Assert::AreEqual(false, is_leap_year(1));
			//2024年はうるう年である
			Assert::AreEqual(true, is_leap_year(2024));
			//2100年はうるう年ではない
			Assert::AreEqual(false, is_leap_year(2100));
			//2000年はうるう年である
			Assert::AreEqual(true, is_leap_year(2000));
		}
	};
}
