#ifndef COLOR_CODE_H
#define COLOR_CODE_H


enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

#define numberOfMajorColors (sizeof(MajorColorNames) / sizeof(MajorColorNames[0]))
#define numberOfMinorColors (sizeof(MinorColorNames) / sizeof(MinorColorNames[0]))

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
    int pairNumber;
} ColorPair;

int GetPairNumberFromColor(const ColorPair* colorPair);
ColorPair GetColorFromPairNumber(int pairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);

#endif // COLOR_CODE_H
