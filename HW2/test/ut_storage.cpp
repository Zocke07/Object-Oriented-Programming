#include <gtest/gtest.h>

#include "storage.hpp"

TEST(HW2, test_create_storage_with_vector_should_correctly) {
    Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});

    ASSERT_EQ(storage.Size(), 3);
}

TEST(HW2, test_create_storage_with_array_should_correctly) {
    std::string snacks[] = {"Chips", "Chocolate", "Cookies", "Soda"};
    int n = 4;

    Storage storage(n, snacks);

    ASSERT_EQ(storage.Get(3), "Soda");
}

TEST(HW2, test_get_storage_should_correctly) {
    Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});

    ASSERT_EQ(storage.Get(0), "Chocolate");
    ASSERT_EQ(storage.Get(1), "Doritos");
    ASSERT_EQ(storage.Get(2), "Strawberries Cracker Taiwan");
    ASSERT_EQ(storage.Get(3), "");
}

TEST(HW2, test_add_storage_should_correctly) {
    Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});
    
    storage.Add("Lays");
    ASSERT_EQ(storage.Size(), 4);
    storage.Add("Cake");
    ASSERT_EQ(storage.Size(), 5);
}

TEST(HW2, test_set_storage_should_correctly) {
    Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});

    storage.Set(2, "Cake");
    ASSERT_EQ(storage.Get(2), "Cake");
}

TEST(HW2, test_eat_storage_should_correctly) {
    Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});

    storage.Eat(2);
    ASSERT_EQ(storage.Get(2), "");
}