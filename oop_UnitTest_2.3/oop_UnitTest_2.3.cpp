#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_2.3/Fraction.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest23
{
	TEST_CLASS(oopUnitTest23)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction c;
			c.set_a(900);
			Assert::AreEqual(900, c.get_a());
		}
	};
}
