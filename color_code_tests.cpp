#include <color_code.h>
#include <gtest/gtest.h>

extern ColorPair colorPairs;
extern int MAX_COLORPAIR_NAME_CHARS;

Test(Testcase1,testNumberToColorPair)
{
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    
    colorPairs = GetColorFromPairNumber(4);
    EXPECT_EQ(colorPairs.majorColor, WHITE);
    EXPECT_EQ(colorPairs.minorColor, BROWN);
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);

    colorPairs = GetColorFromPairNumber(5);
    EXPECT_EQ(colorPairs.majorColor, WHITE);
    EXPECT_EQ(colorPairs.minorColor, SLATE);
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);

}

Test(Testcase2,testPairToNumber)
{
    int pairnumber
    colorPairs = {{BLACK},{ORANGE}};
    pairnumber = GetPairNumberFromColor(&colorPairs);
    EXPECT_EQ(pairnumber, 12);
    printf("Got pair number %d\n", pairNumber);
    
    colorPairs = {{VIOLET},{SLATE}};
    pairnumber = GetPairNumberFromColor(&colorPairs);
    EXPECT_EQ(pairNumber, 25);
    printf("Got pair number %d\n", pairNumber);
}


    
    