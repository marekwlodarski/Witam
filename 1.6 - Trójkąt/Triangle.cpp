#include <cmath>
#include "Triangle.h"

Triangle::Triangle(Point a, Point b, Point c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

float Triangle::Distance(Point x, Point y)
{
    return sqrt(pow(x.GetX()-y.GetX(), 2)+pow(x.GetY()+y.GetY(), 2));
}

float Triangle::Perimeter()
{
    return Distance(a, b)+Distance(b, c)+Distance(c, a);
}

float Triangle::Area()
{
    float p=Perimeter()/2;
    return sqrt(p*(p-Distance(a, b))*(p-Distance(b, c))*(p-Distance(c, a)));
}
