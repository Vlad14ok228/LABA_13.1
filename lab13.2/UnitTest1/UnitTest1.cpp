#include "pch.h"
#include "CppUnitTest.h"
#include "../lab13.2/lab13.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x, y, z = N;
			int ABS, SQR = 0, ADD_XY, ADD_XZ;
			char ch;
			do {
#if N >= 1
				if (DO_FIRST_PART(z))
				{

					ADD_XY = FUNC1MIN(x, y);
					ADD_XZ = FUNC2MIN(x, z);

				}
#else
				{
					SQR = FUNC1MAX(x);
					ABS = FUNC2MAX(y, z);

				}
#endif

			} while (ch == 'y');
		}
	};
}
