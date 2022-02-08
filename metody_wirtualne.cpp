#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

class Bryla {
public:
    virtual double pole() {
        cout << "Funkcja liczy pole :)";
        return 0;
    }
    virtual double objetosc() {
        cout << "Funkcja liczy objetosc :)";
        return 0;
    }
    virtual double przekatna() {
        cout << "Funkcja liczy przekatna :)";
        return 0;
    }
};

class Kula : public Bryla {
private:
    double r;

public:
    void set_r(double r){
        this->r = r;
    }

    double pole(){
        return 4 * M_PI * pow(this->r, 3);
    }

    double objetosc(){
        return 4/3 * M_PI * pow(this->r, 3);
    }
};

class Prostopadloscian : public Bryla {
private:
    double a;
    double b;
    double h;

public:
    void set_a(double a){
        this->a = a;
    }
    void set_b(double b){
        this->b = b;
    }

    void set_h(double h){
        this->h = h;
    }

    double przekatna() {
        return sqrt(pow(a, 2) + pow(b, 2) + pow(h, 2));
    }

    double objetosc() {
        return a * b * h;
    }
};

class Ostroslup : public Bryla {
private:
    double a;
    double h;

public:
    void set_a(double a) {
        this->a = a;
    }

    void set_h(double h) {
        this->h = h;
    }

    double pole() {
        return pow(a, 2) + 2 * a * h;
    }

    double objetosc() {
        return 1 / 3 * pow(a, 2) * h;
    }
};

int main() {
    Ostroslup ostr1;
    Kula kula1;
    Prostopadloscian prost1;

    kula1.set_r(10);
    ostr1.set_a(5);
    ostr1.set_h(10);
    prost1.set_a(2);
    prost1.set_b(3);
    prost1.set_h(30);

    cout << "Pole kuli: " << kula1.pole() << endl;
    cout << "Objetosc kuli: " << kula1.objetosc() << endl;
    cout << "Pole ostroslupa: " << ostr1.pole() << endl;
    cout << "Objetosc ostroslupa: " << ostr1.pole() << endl;
    cout << "Przekatna prostopadloscianu: " << prost1.przekatna() << endl;
    cout << "Objetosc prostopadloscianu: " << prost1.objetosc() << endl;
    return 0;
}
