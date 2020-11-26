#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab815
{
	TEST_CLASS(UnitTestLab815)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char lit_r[20] = "ssqSQfqsSWfs";
			char para[] = "SQ";
			char para1[] = "QS";

			bool b = false;
			b = (strstr(lit_r, para));

			Assert::AreEqual(b, true);
		}
	};
}
