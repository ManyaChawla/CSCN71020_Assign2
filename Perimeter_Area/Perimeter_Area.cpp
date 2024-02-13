#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PerimeterArea
{
	TEST_CLASS(PerimeterArea)
	{
	public:
		
		TEST_METHOD(PERIMETER)
		{
			int length = 1;
			int width = 1;
			int result = 0;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(4, result);
		}
		TEST_METHOD(AREA)
		{
			int length = 1;
			int width = 1;
			int result = 0;
			result = getArea(&length, &width);
			Assert::AreEqual(1, result);
		}
	};
}
