//
// Created by lichevsky on 03.09.16.
//

#ifndef FONT_STRING_UTILS_H
#define FONT_STRING_UTILS_H

#include <stdlib.h>
#include <string>
#include <sstream>
#include <3ds.h>

typedef enum {
    COLOR_BLACK = 0,
    COLOR_RED = 1,
    COLOR_GREEN = 2,
    COLOR_YELLOW = 3,
    COLOR_BLUE = 4,
    COLOR_MAGENTA = 5,
    COLOR_CYAN = 6,
    COLOR_WHITE = 7,
} colors_t;

using  namespace std;

string resetColor();

string setColor(colors_t foreground, colors_t background);

string colorize(colors_t foreground, colors_t background, string text);

string colorize(colors_t foreground, string text);

string position(u32 line, u32 column);
#endif //FONT_STRING_UTILS_H
