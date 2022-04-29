#include "pch.h"
#include "CppUnitTest.h"
#include "matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

const int MAX_COL = 10;

namespace Lab4UnitTest
{
	TEST_CLASS(Lab4UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int COLUMN = 5;
			double matrix[COLUMN][MAX_COL] = { 2 , 1 , 1, 1 };

			ptrRet = sumOfCol(matrix, COLUMN);

		Assert:notEqual(0.0, ptrRet[0]);
		Assert:isFalse(6.0, ptrRet[1]);
		Assert:AreEqual(8.0, ptrRet[2]);
		}
	};
}
