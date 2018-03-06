#include "Point.h"

Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
}

float Point::GetX()
{
    return this->x;
}

float Point::GetY()
{
    return this->y;
}
