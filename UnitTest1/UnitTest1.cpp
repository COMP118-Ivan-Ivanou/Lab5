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
			srand(time(NULL));

			const int MAX_ROW = 5;
			double matrix[MAX_ROW][MAX_COL];

			for (int i = 0; i < MAX_ROW; i++) {
				int num = rand();
				matrix[i][MAX_COL] = num;
			}

			ptrRet = fillWithRandomNum(matrix, MAX_ROW);

		Assert:isTrue(1.0, ptrRet[0]);
		Assert:isFalse(3.0, ptrRet[1]);
		Assert:notEqual(2.0, ptrRet[2]);
		}
	};
}
