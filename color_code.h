#ifndef COLOR_CODE_H
#define COLOR_CODE_H

const int MAX_COLORPAIR_NAME_CHARS = 16;
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

#define numberOfMajorColors  (sizeof(MajorColorNames) / sizeof(MajorColorNames[0]))

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

#define numberOfMinorColors (sizeof(MinorColorNames) / sizeof(MinorColorNames[0]))

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);

void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif // COLOR_CODE_H
