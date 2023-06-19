#include "Canvas.h"
#include "Shapes.h"

int main() {
    //stworzenie tła
    Canvas c(20, 10);

    //stworzenie kształtów
    Triangle triangle(2, 2, 4);
    Rectangle rectangle(14, 3, 6, 3);
    Circle circle(9, 7, 3);

    //narysowanie kształtów na tle
    triangle.draw(c, '@');
    rectangle.draw(c, '$');
    circle.draw(c, '#');
    
    //zapis tła do pliku
    c.print("output.txt");

    return 0;
}