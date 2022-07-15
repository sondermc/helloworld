#include <gtest/gtest.h>>

// Demonstrate some basic assertions.
TEST(hello_test, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("Hello", "World!");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

// main(int argc, char **argv) {
//  ::testing::InitGoogleTest(&argc, argv);
//  printf("test");
//  return RUN_ALL_TESTS();
//