//
// Created by lichevsky on 03.09.16.
//
#include "string_utils.h"
string resetColor(){
    return "\x1b[0m";
}

string setColor(colors_t foreground, colors_t background){
    std::ostringstream stringStream;
    stringStream << "\x1b[4" << background << ";3" << foreground << "m";
    return stringStream.str();
}

string colorize(colors_t foreground, colors_t background, string text){
    std::ostringstream stringStream;
    stringStream << setColor(foreground, background) << text << resetColor();
    return stringStream.str();
}

string colorize(colors_t foreground, string text){
    return colorize(foreground, COLOR_BLACK, text);
}

string position(u32 line, u32 column){
    std::ostringstream stringStream;
    stringStream << "\x1b[" << line << ";" << column << "H";
    return stringStream.str();
}