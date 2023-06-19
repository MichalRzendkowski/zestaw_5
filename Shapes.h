#ifndef ZESTAW_5_SHAPES_H
#define ZESTAW_5_SHAPES_H
#include "Canvas.h"
#include <cmath>

class Shape {
protected:
    //współżędne kształtu
    u_int x, y;
public:
    Shape(u_int _x, u_int _y);

    //funkcja do rysowania kształtu
    virtual void draw(Canvas &c, char fill){}
};

class Rectangle : Shape{
private:
    //wysokość i szerokość prostokąta
    u_int height, width;
public:
    Rectangle(u_int _x, u_int _y, u_int _width, u_int _height);

    //funkcja do rysowania prostokąta
    void draw(Canvas &c, char fill) override;
};

class Triangle : Shape{
private:
    //długość ramienia trójkąta
    u_int side;
public:
    Triangle(u_int _x, u_int _y, u_int _side);

    //funkcja do rysowania trójkąta
    void draw(Canvas &c, char fill) override;
};

class Circle : Shape{
private:
    //promień koła
    u_int radius;
public:
    Circle(u_int _x, u_int _y, u_int _radius);

    //funkcja do rysowania koła
    void draw(Canvas &c, char fill) override;
};

#endif //ZESTAW_5_SHAPES_H
