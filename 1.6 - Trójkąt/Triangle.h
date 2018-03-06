#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"

class Triangle
{
private:
    Point a, b, c;

public:
    Triangle() {}

    Triangle(Point a, Point b, Point c);

    float Distance(Point x, Point y);

    float Perimeter();

    float Area();
};

#endif // TRIANGLE_H
