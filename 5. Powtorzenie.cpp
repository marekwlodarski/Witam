#include <iostream>

using namespace std;

class Polygon{
public:
    struct Point{
        float x,y;
    };
public:
    int x, y;
    Point *points;

public:

    Polygon(){
        y=4;
        x=0;
        points = new Point[y];
    }

    Polygon(int x){
        while(x%4!=0) x++;
        y=x;
        this->x=0;
        points = new Point[x];
    }

    Polygon(const Polygon &polygon)
    {
        this->x=polygon.x;
        this->y=polygon.y;
        points = new Point[y];

        for(int i=x; i>0; i--)
        {
            points[i-1].x=polygon.points[i-1].x;
            points[i-1].y=polygon.points[i-1].y;
        }
    }

    void Metoda1(Point w)
    {
        if(x>=y)
        {
            Point *temp = points;
            y+=4;
            points = new Point[y];
            for(int i=0; i<y-4; i++)
                points[i] = temp[i];
            delete[] temp;
        }

        points[x].x = w.x;
        points[x].y = w.y;
        x++;
    }

    ~Polygon()
    {
        delete[] points;
    }
};

int main()
{
    Polygon::Point e;
    e.x = 10;
    e.y = 11;
    Polygon x = Polygon(5);
    x.points[0].x=1;
    x.points[0].y=3;
    x.x=1;
    cout<<x.points[0].x<<" "<<x.points[0].y<<" "<<x.y;
    Polygon y(x);
    cout<<y.points[0].x<<" "<<y.points[0].y<<" "<<y.y;



    return 0;
}
