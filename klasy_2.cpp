#include <iostream>
#include<cstring>

using namespace std;

class Pracownik {
public:
    int ID;
    string imie;
    string naziwsko;
};

class Manager: public Pracownik{
public:
    int pracownicy;
};

class Programista: public Pracownik{
public:
    int czas_pracy;
};

int main() {
    Pracownik prac1;
    Manager manago1;
    Programista prog1;
    prac1.ID = 1;
    prac1.imie = "Jan Pawe³";
    prac1.naziwsko = "drugi";
    manago1.ID = 2;
    manago1.imie = "Andrzej";
    manago1.naziwsko = "Golota";
    manago1.pracownicy = 2;
}
