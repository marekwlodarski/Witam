#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib>

using namespace std;

class Point
{
public:
    float x, y;
public:
    Point(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
    float getx()
    {
        return x;
    }
    float gety()
    {
        return y;
    }
};

bool Witam(Point x, Point y)
{
    if(x.x != y.x) return x.x < y.x;
    return y.y > x.y;
}

vector <Point> Fun(vector <Point> const & v1, Point x, Point y)
{
    vector <Point> v2;
    for(int i=0; i<v1.size(); i++)
    {
        if(v1[i].x>=x.x&&v1[i].x<=y.x&&v1[i].y<=x.y&&v1[i].y>=y.y) v2.push_back(v1[i]);
    }
    return v2;
}

void Funkcja(list <string>::iterator it1, list<string>::iterator it2)
{
    for(it1; it1 != it2; it1++)
    cout<<*it1<<" ";
}

int main()
{
    srand(time(NULL));
    /*vector <int> witam;

    witam.push_back(0);
    witam.push_back(5);
    witam.push_back(99);
    witam.push_back(3);
    witam.push_back(4);

    for(int i=0; i<witam.size(); i++)
        cout<<witam[i]<<" ";

    list <int> lista;

    for(int i=0; i<15; i++)
        lista.push_front(i);

    for(list <int>::iterator it = lista.begin(); it!=lista.end(); it++)
        cout<<*it<<" ";

    map <string, int> mapa;
    mapa["test"] = 6;
    mapa["inna"] = 8;

    cout<<mapa["test"]<<endl;

    set <string> s;
    s.insert("Witam");
    s.insert("www");

    set <string>::iterator it = s.find("Witam");

    if(it != s.end())
        cout<<"Witam"<<endl;*/

    /*vector <Point> v1;

    //sort(v1.begin(), v1.end());

    for(int i=0; i<10; i++)
        v1.push_back(Point(i*rand()%10, i*rand()%10));

    //for(int i=0; i<v1.size(); i++)
        //cout<<v1[i].getx()<<" "<<v1[i].gety()<<endl;

    sort(v1.begin(), v1.end(), Witam);

    for(int i=0; i<v1.size(); i++)
        cout<<v1[i].getx()<<" "<<v1[i].gety()<<endl;

    Point x(-5, 5);
    Point y(5, -5);

    vector <Point> v2 = Fun(v1, x, y);

    cout<<endl<<"_______________"<<endl;

    for(int i=0; i<v2.size(); i++)
        cout<<v2[i].getx()<<" "<<v2[i].gety()<<endl;*/

    list <string> lista;

    lista.push_back("Witam");
    lista.push_back("Witam1");
    lista.push_back("Witam2");
    lista.push_back("Witam3");
    lista.push_back("Witam4");
    lista.push_back("Witam5");
    lista.push_back("Witam6");

    list <string>::iterator it1 = lista.begin();
    list <string>::iterator it2 = lista.end();

    Funkcja(it1, it2);

    return 0;
}
