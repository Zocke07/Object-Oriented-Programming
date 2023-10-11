#include <gtest/gtest.h>

#include "traversal.hpp"

TEST(TraversalTest, TestExampleShouldReturnTrue){
    int arr[] = {2, 0, 1};
    int n = 3;

    int result = traversal(n, arr);

    ASSERT_EQ(result, true);
}

TEST(TraversalTest, TestExampleShouldReturnTrue2) {
    int arr[] = {1, 2, 3, 0};
    int n = 4;

    ASSERT_TRUE(traversal(n, arr));
}

TEST(TraversalTest, TestExampleShouldReturnFalse) {
    int arr[] = {0, 1, 2};
    int n = 3;

    bool result = traversal(n, arr);

    ASSERT_FALSE(result);
}

TEST(TraversalTest, TestExampleShouldReturnFalse2) {
    int arr[] = { 1, 2, 0, 3, 4 };
    int n = 5;

    int result = traversal(n, arr);
    ASSERT_FALSE(result);
}