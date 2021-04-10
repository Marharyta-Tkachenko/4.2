#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab4.2\Lab4.2\Area.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab4.2\Lab4.2\Rectangular_triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangular_triangle C(5, 10);
			int S = C.Square();
			Assert::AreEqual(C.Square(), 25.0);

		}
	};
}
