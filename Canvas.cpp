#include "Canvas.h"

Canvas::Canvas(u_int _width, u_int _height, char _empty) :
        height{_height},
        width{_width},
        empty{_empty}
{
    tab.assign(height, std::string(width, empty));
}

bool Canvas::set(u_int x, u_int y, char fill){
    if(x >= width || y >= height) return false;
    tab[height - y - 1][x] = fill;
    return true;
}

bool Canvas::print(std::string path) {
    std::ofstream out(path, std::ios_base::out);
    if (!out.good()) return false;
    out << '|' << std::string(2 * width, '=') << '|' << '\n';
    for (auto v: tab) {
        out << '|';
        for (auto i: v)
            out << i << ' ';
        out << '|' << '\n';
    }
    out << '|' << std::string(2 * width, '=') << '|';
    return true;
}