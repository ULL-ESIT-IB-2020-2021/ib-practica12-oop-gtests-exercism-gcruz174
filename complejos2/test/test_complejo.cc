#include <gtest/gtest.h>

#include "complejo.h"
 
TEST(ComplejoTest, add){
    Complejo c1{5, 2};
    Complejo c2{3, 1};
    Complejo c3{9, 4};

    Complejo result1{Complejo::Add(c1, c2)};
    Complejo result2{Complejo::Add(c2, c3)};

    EXPECT_EQ(true, (result1.GetRealPart() == 8 && result1.GetImaginaryPart() == 3));
    EXPECT_EQ(true, (result2.GetRealPart() == 12 && result2.GetImaginaryPart() == 5));
}

TEST(ComplejoTest, subtract){
    Complejo c1{5, 2};
    Complejo c2{3, 1};
    Complejo c3{9, 4};

    Complejo result1{Complejo::Subtract(c1, c2)};
    Complejo result2{Complejo::Subtract(c2, c3)};

    EXPECT_EQ(true, (result1.GetRealPart() == 2 && result1.GetImaginaryPart() == 1));
    EXPECT_EQ(true, (result2.GetRealPart() == -6 && result2.GetImaginaryPart() == -3));
}

TEST(ComplejoTest, multiply){
    Complejo c1{5, 2};
    Complejo c2{3, 1};
    Complejo c3{9, 4};

    Complejo result1{Complejo::Multiply(c1, c2)};
    Complejo result2{Complejo::Multiply(c2, c3)};

    EXPECT_EQ(true, (result1.GetRealPart() == 13 && result1.GetImaginaryPart() == 11));
    EXPECT_EQ(true, (result2.GetRealPart() == 23 && result2.GetImaginaryPart() == 21));
}