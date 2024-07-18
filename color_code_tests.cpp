    #include <color_code.h>
    #include <gtest/gtest.h>

    extern ColorPair colorPair;
    extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber)
    extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber)

Test(Test_1,testNumberToPair)
{
    testNumberToPair(4, WHITE, BROWN);
    EXPECT_EQ(colorPair.majorColor, WHITE);
    EXPECT_EQ(colorPair.minorColor, BROWN);

    testNumberToPair(5, WHITE, SLATE);
    EXPECT_EQ(colorPair.majorColor, WHITE);
    EXPECT_EQ(colorPair.minorColor, SLATE);

}

Test(Test_2,testPairToNumber)
{
    testPairToNumber(BLACK, ORANGE, 12);
    EXPECT_EQ(colorPair.pairNumber, 12);

    testPairToNumber(VIOLET, SLATE, 25);
    EXPECT_EQ(colorPair.pairNumber, 25);
}


    
    