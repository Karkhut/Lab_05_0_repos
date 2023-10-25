#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_1/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		
				double c = g(1, 1) + pow(1 + pow(g(2, 1), 2), 2) / 1 + pow(g(1 + 2, 1), 3);
				Assert::AreEqual(c, 4700.0);

		}
	};
}
