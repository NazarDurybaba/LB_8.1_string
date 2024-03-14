#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_8.1_string.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(CountTest)
        {
            string str = "abcababcababc";
            Assert::AreEqual(3, Count(str));
        }

        TEST_METHOD(ChangeTest)
        {
            string str = "abcababcababc";
            string result = Change(str);
            Assert::AreEqual(string("**ab**ab**"), result);
        }
	};
}
