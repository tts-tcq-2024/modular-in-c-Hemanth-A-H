#ifndef COLOR_CODE_H
#define COLOR_CODE_H


enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[5];
extern const char* MinorColorNames[5];

#define numberOfMajorColors (sizeof(MajorColorNames) / sizeof(MajorColorNames[0]))
#define numberOfMinorColors (sizeof(MinorColorNames) / sizeof(MinorColorNames[0]))

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
    int pairNumber;
} ColorPair;

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif // COLOR_CODE_H
