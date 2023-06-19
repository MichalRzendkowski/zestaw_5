#ifndef ZESTAW_5_CANVAS_H
#define ZESTAW_5_CANVAS_H

#include <vector>
#include <string>
#include <fstream>

class Canvas {
private:
    //wymiary tła
    u_int height, width;
    //znak zapełniający tło
    char empty;
    //tablica znaków tła
    std::vector<std::string> tab;

public:
    Canvas(u_int _width, u_int _height, char _empty = ' ');
    bool set(u_int x, u_int y, char fill);
    bool print(std::string path);
};

#endif //ZESTAW_5_CANVAS_H