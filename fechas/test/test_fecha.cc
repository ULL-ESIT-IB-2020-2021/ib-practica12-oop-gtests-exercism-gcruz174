#include <gtest/gtest.h>

#include "fecha.h"
 
TEST(FechaTest, greater){
    Fecha d1{2020, 12, 1};
    Fecha d2{2020, 12, 2};
    Fecha d3{2020, 11, 1};

    EXPECT_EQ(true, d2 > d1);
    EXPECT_EQ(false, d3 > d1);
}

TEST(FechaTest, smaller){
    Fecha d1{2020, 12, 1};
    Fecha d2{2020, 12, 2};
    Fecha d3{2020, 11, 1};

    EXPECT_EQ(false, d2 < d1);
    EXPECT_EQ(true, d3 < d1);
}

TEST(FechaTest, equal){
    Fecha d1{2020, 12, 1};
    Fecha d2{2020, 12, 1};

    Fecha d3{2020, 12, 2};
    Fecha d4{2020, 11, 1};
    Fecha d5{2019, 12, 1};

    EXPECT_EQ(true, d1 == d2);
    EXPECT_EQ(false, d1 == d3);
    EXPECT_EQ(false, d1 == d4);
    EXPECT_EQ(false, d1 == d5);
}

TEST(FechaTest, leapYear){
    Fecha d1{1604, 3, 8};
    Fecha d2{2002, 11, 7};

    EXPECT_EQ(true, d1.IsLeapYear());
    EXPECT_EQ(false, d2.IsLeapYear());
}

TEST(FechaTest, year){
    Fecha d1{1604, 3, 8};
    Fecha d2{2002, 11, 7};

    EXPECT_EQ(1604, d1.year());
    EXPECT_EQ(2002, d2.year());
}

TEST(FechaTest, month){
    Fecha d1{1604, 3, 8};
    Fecha d2{2002, 11, 7};

    EXPECT_EQ(3, d1.month());
    EXPECT_EQ(11, d2.month());
}

TEST(FechaTest, day){
    Fecha d1{1604, 3, 8};
    Fecha d2{2002, 11, 7};

    EXPECT_EQ(8, d1.day());
    EXPECT_EQ(7, d2.day());
}

TEST(FechaTest, toString){
    Fecha d1{1604, 3, 8};
    Fecha d2{2002, 11, 7};

    EXPECT_EQ("8/3/1604", ToString(d1));
    EXPECT_EQ("7/11/2002", ToString(d2));
}