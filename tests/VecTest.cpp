#include "gtest/gtest.h"
#include "../include/math/Vec3.h"

TEST(Vec3Test, DefaultConstructor)
{
    Vec3 v;
    EXPECT_EQ(0, v.x);
    EXPECT_EQ(0, v.y);
    EXPECT_EQ(0, v.z);
}

TEST(Vec3Test, Addition)
{
    Vec3 v1(1, 2, 3);
    Vec3 v2(4, 5, 6);
    Vec3 v3 = v1.add(v2); // https://stackoverflow.com/questions/23718850/is-it-possible-to-add-two-objects-of-same-class-using-operator
    EXPECT_EQ(5, v3.x);
    EXPECT_EQ(7, v3.y);
    EXPECT_EQ(9, v3.z);
}
