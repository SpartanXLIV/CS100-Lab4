#include <iostream>

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

using namespace std;

TEST(ConstrTestW, DefaultWidthCheck){
	Rectangle r1;
	EXPECT_EQ(1, r1.getWidth());
}

TEST(ConstrTestH, DefaultHeightCheck){
	Rectangle r1;
	EXPECT_EQ(1, r1.getHeight());
}

TEST(ConstrParaTest, CorrectParameters){
	Rectangle r1(3, 5);
	EXPECT_EQ(3, r1.getWidth());
	EXPECT_EQ(5, r1.getHeight());
}

TEST(PerimeterTest, CorrectPerimeter){
	Rectangle r1(3, 5);
	EXPECT_EQ(16, r1.perimeter());
}

TEST(AreaTest, CorrectArea){
	Rectangle r1(2, 2);
	EXPECT_EQ(4, r1.area());
}

int main(int ac, char *av[]) {
  ::testing::InitGoogleTest(&ac, av);
//  ::testing::InitGoogleMock(&ac, av);
  return RUN_ALL_TESTS();
}
