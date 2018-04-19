#include <iostream>
#include <cmath>

using namespace std;

namespace Poly
{
class RegularPolyhedron
{
private:
    double BokPodstawy;
    double PolePodstawy;
    double Wysokosc;
    int IloscBokow;
protected:
    double getPolePodstawy()
    {
        return PolePodstawy;
    }
    double getWysokosc()
    {
        return Wysokosc;
    }
public:
    RegularPolyhedron (double BokPodstawy, int IloscBokow, double Wysokosc)
    {
        this->BokPodstawy = BokPodstawy;
        this->IloscBokow = IloscBokow;
        this->Wysokosc = Wysokosc;
        PolePodstawy = (BokPodstawy*IloscBokow*(BokPodstawy/(2*tan (M_PI/IloscBokow))))/2;
    }
    virtual double volume();
};

class RegularPrism : public RegularPolyhedron
{
public:
    virtual double volume()
    {
        return getPolePodstawy()*getWysokosc();
    }
};

class RegularPyramid : public RegularPolyhedron
{
public:
    virtual double volume()
    {
        return getPolePodstawy()*getWysokosc()/3;
    }
};
}

int main()
{
    using namespace Poly;

    return 0;
}
