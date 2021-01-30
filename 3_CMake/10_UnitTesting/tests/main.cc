#include "gtest/gtest.h"

#include "my_lib.h"

TEST(MyTestSuite, MyTest)
{
    std::int32_t valueA = 10;
    std::int32_t valueB = 20;
    std::int32_t expectedResult = 15;
    std::int32_t result = compute_average(valueA, valueB);

    ASSERT_EQ(expectedResult, result);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
