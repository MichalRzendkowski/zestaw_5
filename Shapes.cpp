#include "Shapes.h"

//definicja konstruktora kształtu
Shape::Shape(u_int _x, u_int _y):
        x{_x - 1},
        y{_y - 1}{}

//definicja konstruktora protokąta
Rectangle::Rectangle(u_int _x, u_int _y, u_int _width, u_int _height) :
        Shape(_x, _y),
        height{_height},
        width{_width}{}

//definicja funkcji rysującej prostokąt
void Rectangle::draw(Canvas &c, char fill){
    for(u_int i = 0; i < width; ++i)
        for(u_int j = 0; j < height; ++j)
            c.set(x + i, y + j, fill);
}

//definicja konstruktora trójkąta
Triangle::Triangle(u_int _x, u_int _y, u_int _side) :
        Shape(_x, _y),
        side{_side}{}

//definicja funkcji rysującej trójkąt
void Triangle::draw(Canvas &c, char fill){
    for(u_int i = 0; i < side; ++i){
        for(u_int j = 0; j < side - i; ++j)
            c.set( x + j, y + i, fill);
    }
}

//definicja konstruktora koła
Circle::Circle(u_int _x, u_int _y, u_int _radius) :
        Shape(_x, _y),
        radius{_radius}{}

//definicja funkcji rysującej koło
void Circle::draw(Canvas &c, char fill){
    int r = static_cast<int>(radius);
    int h = static_cast<int>(x), k = static_cast<int>(y);

    for(int i = (h - r) < 0 ? 0 : h - r; i <= h + r; ++i){
        for(int j = (k - r) < 0 ? 0 : k - r; j <= k + r; ++j){
            if(pow((i - h), 2) + pow(j - k, 2) <= pow(r, 2))
                c.set(i, j, fill);
        }
    }
}