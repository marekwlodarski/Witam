#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{
    Triangle x = Triangle(Point(0, 0), Point(0, 3), Point(4, 0));
    cout<<x.Perimeter()<<" "<<x.Area()<<endl;

    return 0;
}
