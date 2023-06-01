#include "pch.h"
#include "../Project1/prime-factors.cpp"

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor p;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, p.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, p.of(2));
}

TEST_F(PrimeFixture, Of3) {
	expected = { 3 };
	EXPECT_EQ(expected, p.of(3));
}