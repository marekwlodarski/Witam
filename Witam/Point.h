#ifndef POINT_H
#define POINT_H

class Point
{
private:
    float x, y;

public:
    Point() {}

    Point(float x, float y);

    float GetX();

    float GetY();
};

#endif // POINT_H
