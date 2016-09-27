//
// Created by lichevsky on 03.09.16.
//
#include "string_utils.h"
using namespace std;
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

string setTextColor(colors_t foreground){
    std::ostringstream stringStream;
    stringStream << "\x1b[3" << foreground << "m";
    return stringStream.str();
}

string position(u32 line, u32 column){
    std::ostringstream stringStream;
    stringStream << "\x1b[" << line << ";" << column << "H";
    return stringStream.str();
}
string repeat(string in, u32 times){
    string s = "";
    for (u32 i = 0; i < times; ++i) {
        s += in;
    }
    return s;
}
string draw_progressbar(u32 width, double progress){

    if(progress<0){
        return repeat(PROGRESSBAR_FILLED+PROGRESSBAR_EMPTY, (width+1)/2).substr(0, width);
    } else {
        u32 filled = (u32)(width * progress);
        return repeat(PROGRESSBAR_FILLED, filled) + repeat(PROGRESSBAR_EMPTY, (width-filled));
    }

}