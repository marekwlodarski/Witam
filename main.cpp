#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Villager
{
private:
    string Imie;
    unsigned int Wiek;
    unsigned int Maksymalny_Wiek;
    bool Plec;
    string Men[3]={"Jan", "Adam", "Grzegorz"};
    string Wom[3]={"Alicja", "Olga", "Katarzyna"};

public:
    Villager()
    {
        Plec=rand()%2;
        if(Plec==1) Imie=Wom[rand()%3];
        else Imie=Men[rand()%3];
        Wiek=0;
        Maksymalny_Wiek=rand()%101;
        cout<<"Witamy!"<<endl;
    }

    Villager(string Imie, unsigned int Wiek, int Maksymalny_Wiek, bool Plec):Imie(Imie), Wiek(Wiek), Maksymalny_Wiek(Maksymalny_Wiek), Plec(Plec)
    {
        cout<<"Witamy!"<<endl;
    }

    void Starosc()
    {
        Wiek++;
        if(Wiek==Maksymalny_Wiek) cout<<"Dzisiaj zmarl(a): "<<Imie<<", w wieku: "<<Wiek<<"lat."<<endl;
    }

    unsigned int GetWiek()
    {
        return Wiek;
    }

    unsigned int GetMaksymalny_Wiek()
    {
        return Maksymalny_Wiek;
    }

    ~Villager()
    {

    };
};

class Household: public Villager
{
private:
    unsigned int Ilosc=2;
    Villager *Domownicy = new Villager[Ilosc];
public:
    void Wiek()
    {
        for(int i=0; i<Ilosc; i++)
        {
            Domownicy[i].Starosc();
        }
    }

    Household(Villager x, Villager y)
    {
        Domownicy[0]=x;
        Domownicy[1]=y;
    }
};

int main()
{
    srand(time(NULL));

    Villager Tomek = Villager();
    Villager Romek = Villager();

    Household x = Household (Tomek, Romek);

    while(true)
    {
        x.Wiek();
        if(Tomek.GetWiek()==Tomek.GetMaksymalny_Wiek()) break;
    }

    return 0;
}
