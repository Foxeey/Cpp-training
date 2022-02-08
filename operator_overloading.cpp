#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Lzesp {
private:
    double re, im;
public:
    Lzesp() {
        this->re = 0;
        this->im = 0;
    }
    void real(double re) {
        this->re = re;
    }
    double real() {
        return this->re;
    }
    void imag(double im) {
        this->im = im;
    }
    double imag() {
        return this->im;
    }
};

Lzesp operator+ (Lzesp a, Lzesp b) {

    Lzesp c;
    c.real(a.real() + b.real());
    c.imag(a.imag() + b.imag());
    return c;
}

Lzesp operator- (Lzesp a, Lzesp b) {

    Lzesp c;
    c.real(a.real() - b.real());
    c.imag(a.imag() - b.imag());
    return c;
}

Lzesp operator* (Lzesp a, Lzesp b) { //(a.re + j a.im) * (b.re + j b.im)
    Lzesp c;

    c.real(a.real() * b.real() + (-1) * a.imag() * b.imag());
    c.imag(a.real() * b.imag() + b.real() * a.imag());
    return c;
}

double abs (Lzesp a) {
    double b;
    b = sqrt(pow(a.real(), 2) + pow(a.imag(), 2));
    return b;
}



ostream& operator <<(ostream& os, Lzesp a) {

    return (a.imag() >= 0) ? os << a.real() << " + " << a.imag() << "j" : os << a.real() << " - " << -1 * a.imag() << "j";
}


int main()
{
    Lzesp a;
    Lzesp b;
    Lzesp c;
    a.real(2);
    b.real(3);
    a.imag(-10);
    b.imag(5);
    c.real(5);
    c.imag(7);
    cout << abs(b) << endl;
    return 0;
}
