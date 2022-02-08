#include <iostream>
#include <cstring>

using namespace std;

class Zwierzatka {
private:
    int wiek;
    int ciezar;
    string imie;
    string gatunek;
    float predkosc;
    float wzrost; //w metrach

    //getters
public:
    int get_wiek() {
        return this->wiek;
    }
    int get_ciezar() {
        return this->ciezar;
    }
    string get_imie() {
        return this->imie;
    }
    string get_gatunek() {
        return this->gatunek;
    }
    float get_predkosc() {
        return this->predkosc;
    }
    float get_wzrost() {
        return this->wzrost;
    }

    //setters

    void set_wiek(int wiek) {
        this->wiek = wiek;
    }
    void set_ciezar(int ciezar) {
        this->ciezar = ciezar;
    }
    void set_imie(string imie) {
        this->imie = imie;
    }
    void set_gatunek(string gatunek) {
        this->gatunek = gatunek;
    }
    void set_predkosc(float predkosc) {
        this->predkosc = predkosc;
    }
    void set_wzrost(float wzrost) {
        this->wzrost = wzrost;
    }

    //constructor

    Zwierzatka() {
        this->wiek = 0;
        this->ciezar = 0;
        this->imie = "undefined";
        this->gatunek = "undefined";
        this->predkosc = 0;
        this->wzrost = 0;

        cout << "Wywolano konstruktor domyslny";
    }

    Zwierzatka(int wiek, int ciezar) {
        this->wiek = wiek;
        this->ciezar = ciezar;
        cout << "Wywolano konstruktor przeciazony z parametrami int" << endl;
        cout << "Pierwszy parametr konstruktora typu int ma wartosc " << get_wiek() << endl;
        cout << "Drugi parametr konstruktora typu int ma wartosc " << get_ciezar() << endl;
    }
    Zwierzatka(string imie, string gatunek) {
        this->imie = imie;
        this->gatunek = gatunek;
        cout << "Wywolano konstruktor przeciazony z parametrami string" << endl;
        cout << "Pierwszy parametr konstruktora typu string ma wartosc " << get_imie() << endl;
        cout << "Drugi parametr konstruktora typu string ma wartosc " << get_gatunek() << endl;
    }
    Zwierzatka(float predkosc, float wzrost) {
        this->predkosc = predkosc;
        this->wzrost = wzrost;
        cout << "Wywojano konstruktor przecizony z parametrami float" << endl;
        cout << "Pierwszy parametr konstruktora typu float ma wartosc " << get_predkosc() << endl;
        cout << "Drugi parametr konstruktora typu float ma wartosc " << get_wzrost() << endl;
    }
};

int main() {

    Zwierzatka pies(10, 12);
    Zwierzatka mis("Albert", "Niedzwiedz brunatny");
    Zwierzatka gepard(120.5f, 0.9f);
    Zwierzatka koala;

}
