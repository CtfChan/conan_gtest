#include <gtest/gtest.h>
#include <iostream>

#include "bar.hpp"

TEST(BarTest, CreateBarStringTest){
    EXPECT_EQ(createBarString(), "Bar");
}