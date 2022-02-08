#include <iostream>

using namespace std;

class Liczba_zesp{
    private:
        float im;
        float re;
    public:
       /* Liczba_zesp(float re, float im){
            this->im = im;
            this->re = re;
        }
        Liczba_zesp(){
            this->im = 5;
            this->re = 109;
        }*/
        float setIM(float im){
            this->im = im;
        }
        float setRE(float re) {
            this->re = re;
        }
        float getIM() {
            return this->im;
        }
        float getRE() {
            return this->re;
        }
        ~Liczba_zesp(){
            delete *im;
            delete *re;
        }
};

void sub_zesp(Liczba_zesp liczba1, Liczba_zesp liczba2) {
    cout << liczba1.getRE() - liczba2.getRE() << " + " << liczba1.getIM() - liczba2.getIM() << "j";
};


int main()
{
    Liczba_zesp a;
    Liczba_zesp b;
    cout << a.getIM() << " " << a.getRE();
    //sub_zesp(b, a);
    a.~Liczba_zesp();
    cout << a.getIM() << " " << a.getRE();
    return 0;
}
