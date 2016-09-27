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
const std::string PROGRESSBAR_EMPTY = {(char)0xB0};
const std::string PROGRESSBAR_FILLED = {(char)0xDB};

std::string resetColor();

std::string setColor(colors_t foreground, colors_t background);

std::string colorize(colors_t foreground, colors_t background, std::string text);

std::string setTextColor(colors_t foreground);

std::string position(u32 line, u32 column);

std::string repeat(std::string in, u32 times);

std::string draw_progressbar(u32 width, double progress);
#endif //FONT_STRING_UTILS_H
