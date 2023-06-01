#include "pch.h"
#include "../Project1/prime-factors.cpp"

TEST(TestCaseName, TestName) {
	PrimeFactor p;
	vector<int> expected = {};
	EXPECT_EQ(expected, p.of(1));
}