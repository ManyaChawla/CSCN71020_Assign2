#include "pch.h"
#include "CppUnitTest.h"
 
extern "C" void setLength(int input, int *length);
extern "C" void setWidth(int input, int *width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LengthWidth
{
	TEST_CLASS(Length)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int length;
			int input = 45;
			setLength(input, &length);
			Assert::AreEqual(length, 45);
		}
		TEST_METHOD(TestMethod2)
		{
			int length;
			int input = 67;
			setLength(input, &length);
			Assert::AreEqual(length, 67);
		}
		TEST_METHOD(TestMethod3)
		{
			int length;
			int input = 1;
			setLength(input, &length);
			Assert::AreEqual(length, 1);
		}
	};
	TEST_CLASS(Width)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int width;
			int input = 70;
			setWidth(input, &width);
			Assert::AreEqual(width, 70);
		}
		TEST_METHOD(TestMethod2)
		{
			int width;
			int input = 20;
			setWidth(input, &width);
			Assert::AreEqual(width, 20);
		}
		TEST_METHOD(TestMethod3)
		{
			int width;
			int input = 99;
			setWidth(input, &width);
			Assert::AreEqual(width, 99);
		}
	};
}
