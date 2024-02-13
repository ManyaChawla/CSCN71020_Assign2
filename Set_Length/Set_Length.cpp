#include "pch.h"
#include "CppUnitTest.h"

extern "C" int setLength(int input, int* length);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SetLength
{
	TEST_CLASS(SetLength)
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
			int input = 0;
			setLength(input, &length);
			Assert::AreEqual(length, 0);
		}
	};
}
