#include <color_code.h>
#include <gtest/gtest.h>

extern ColorPair colorPair;

Test(Testcase1,testNumberToColorPair)
{
    NumberToColorPair(4, WHITE, BROWN);
    EXPECT_EQ(colorPair.majorColor, WHITE);
    EXPECT_EQ(colorPair.minorColor, BROWN);

    NumberToColorPair(5, WHITE, SLATE);
    EXPECT_EQ(colorPair.majorColor, WHITE);
    EXPECT_EQ(colorPair.minorColor, SLATE);
}

Test(Testcase2,testPairToNumber)
{
    ColorPairToNumber(BLACK, ORANGE, 12);
    EXPECT_EQ(colorPair.pairNumber, 12);

    ColorPairToNumber(VIOLET, SLATE, 25);
    EXPECT_EQ(colorPair.pairNumber, 25);
}


    
    