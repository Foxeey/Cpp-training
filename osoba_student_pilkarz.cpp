#include <iostream>
#include <string>

using namespace std;

class Osoba {
protected:
    string imie, nazwisko, data_ur;

public:
    Osoba() {
        this->imie = " ";
        this->nazwisko = " ";
        this->data_ur = " ";
    }

    void set_imie(string name) {
        this->imie = name;
    }
    void set_nazw(string surname) {
        this->nazwisko = surname;
    }
    void set_dataur(string bday) {
        this->data_ur = bday;
    }

    void virtual WypiszInfo() {
        cout << "Imie: " << this->imie << endl;
        cout << "Nazwisko: " << this->nazwisko << endl;
        cout << "Data urodzenia: " << this->data_ur << endl;
    }
};

class Student : public Osoba {
private:
    int rok, nr_indeksu;
    string grupa;

public:
    Student() {
        this->rok = 0;
        this->nr_indeksu = 0;
        this->grupa = " ";
    }

    void set_rok(int rok) {
        this->rok = rok;
    }
    void set_nrind(int nrind) {
        this->nr_indeksu = nrind;
    }
    void set_grupa(string gr) {
        this->grupa = gr;
    }

    void WypiszInfo() {
        cout << "Imie: " << this->imie << endl;
        cout << "Nazwisko: " << this->nazwisko << endl;
        cout << "Data urodzenia: " << this->data_ur << endl;
        cout << "Rok: " << this->rok << endl;
        cout << "Numer indeksu: " << this->nr_indeksu << endl;
        cout << "Grupa: " << this->grupa << endl;
    }
};

class Pilkarz : public Osoba {
private:
    string pozycja, klub;
    int l_goli;

public:
    Pilkarz() {
        this->pozycja = " ";
        this->klub = " ";
        this->l_goli = 0;
    }

    void set_pozycja(string pozycja) {
        this->pozycja = pozycja;
    }
    void set_klub(string klub) {
        this->klub = klub;
    }
    void set_lgoli(int gole) {
        this->l_goli = gole;
    }

    void WypiszInfo() {
        cout << "Imie: " << this->imie << endl;
        cout << "Nazwisko: " << this->nazwisko << endl;
        cout << "Data urodzenia: " << this->data_ur << endl;
        cout << "Pozycja: " << this->pozycja << endl;
        cout << "Klub: " << this->klub << endl;
        cout << "Liczba goli: " << this->l_goli << endl;
    }

    void strzel_gola() {
        this->l_goli++;
    }
};

int main()
{
    Osoba osoba1 = Osoba() ;
    Student student1 = Student();
    Pilkarz pilkarz1 = Pilkarz();

    osoba1.set_imie("Jan");
    osoba1.set_nazw("Kowalski");
    osoba1.set_dataur("02.04.2005");
    osoba1.WypiszInfo();
    cout << endl << endl << endl;

    student1.set_imie("Michal");
    student1.set_nazw("Matuszewski");
    student1.set_dataur("22.01.1993");
    student1.set_rok(2);
    student1.set_grupa("3I1");
    student1.set_nrind(213769);
    student1.WypiszInfo();
    cout << endl << endl << endl;

    pilkarz1.set_imie("Robert");
    pilkarz1.set_nazw("Lewandowski");
    pilkarz1.set_dataur("21.08.1988");
    pilkarz1.set_pozycja("Napastnik");
    pilkarz1.set_klub("FC Bayern Monachium");
    for(int i=0; i<2137; i++){
        pilkarz1.strzel_gola();
    }
    pilkarz1.WypiszInfo();
}
