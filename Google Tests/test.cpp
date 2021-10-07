#include "pch.h"

#include "../Google Test Experiment/myFunctions.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

/*
* Discrete tests
*/
TEST(AddFunctionTest, handlesPositiveNumbers) {
	EXPECT_EQ(myAddFunction(1, 1), 2);

	EXPECT_EQ(myAddFunction(1, 2), 3);
	EXPECT_EQ(myAddFunction(2, 1), 3);
}

TEST(AddFunctionTest, handlesAdditionByZero) {
	EXPECT_EQ(myAddFunction(0, 0), 0);

	EXPECT_EQ(myAddFunction(1, 0), 1);
	EXPECT_EQ(myAddFunction(0, 1), 1);
}