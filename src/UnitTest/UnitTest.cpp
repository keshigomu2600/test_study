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
			//����1�N�͂��邤�N�ł͂Ȃ�
			Assert::AreEqual(false, is_leap_year(1));
			//2024�N�͂��邤�N�ł���
			Assert::AreEqual(true, is_leap_year(2024));
			//2100�N�͂��邤�N�ł͂Ȃ�
			Assert::AreEqual(false, is_leap_year(2100));
			//2000�N�͂��邤�N�ł���
			Assert::AreEqual(true, is_leap_year(2000));
		}
	};
}
