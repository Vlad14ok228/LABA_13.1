#include "pch.h"
#include "CppUnitTest.h"
#include "../lab13.1/var.h"
#include <iostream>
#include "../lab13.1/sum.h"
using namespace std;
using namespace nsSum;
using namespace nsVar;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			x = x_p;
			while (x <= x_k) {
				sum(); // виклик процедури обчислення суми
				cout << x << " "
					<< s << " "
					<< exp(x) << " "
					<< n << endl; // тут слід використовувати форматний вивід
				x += dx;
			}
			cin.get();
		
		}
	};
}
