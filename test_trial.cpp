#include<gtest/gtest.h>
#include"maths.h"

// Test functions.
TEST(maths, m_add){
    GTEST_ASSERT_EQ(m_add(2,3), 5);
}

// Calling the above written test.
int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

