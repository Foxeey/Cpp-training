#include <iostream>
#include <string>

using namespace std;

class Pracownik {
protected:
    string imie, nazwisko, data_zatr, dzial;
    int nip, pensja;

public:
    Pracownik() {
        cout << "Podaj imie: ";
        cin >> this->imie;
        cout << "Podaj nazwisko: ";
        cin >> this->nazwisko;
        cout << "Podaj date zatrudnienia (DD.MM.YYYY): ";
        cin >> this->data_zatr;
        cout << "Podaj dzial pracownika: ";
        cin >> this->dzial;
        cout << "Podaj NIP (10 cyfr): ";
        cin >> this->nip;
        cout << "Podaj pensje (PLN): ";
        cin >> this->pensja;
    }

    void  virtual pracownik_info() {
       cout << "Imie: " << this->imie << endl;
       cout << "Nazwisko: " << this->nazwisko << endl;
       cout << "Data zatrudnienia: " << this->data_zatr << endl;
       cout << "Dzial: " << this->dzial << endl;
       cout << "NIP: " << this->nip << endl;
       cout << "Pensja: " << this->pensja << " PLN" << endl;
    }
};

class Kierownik : public Pracownik {
private:
    int podwladni;
    double dodatek_funk;
    string typ_kier;

public:
    Kierownik() {
        cout << "Podaj ilosc podwladnych: ";
        cin >> this->podwladni;
        cout << "Podaj dodatek funkcyjny (w %): ";
        cin >> this->dodatek_funk;
        cout << "Podaj typ kierownictwa: ";
        cin >> this->typ_kier;
    }

    void pracownik_info() {
        cout << "Imie: " << this->imie << endl;
        cout << "Nazwisko: " << this->nazwisko << endl;
        cout << "Data zatrudnienia: " << this->data_zatr << endl;
        cout << "Dzial: " << this->dzial << endl;
        cout << "NIP: " << this->nip << endl;
        cout << "Pensja: " << this->pensja << " PLN" << endl;
        cout << "Ilosc podwladnych: " << this->podwladni << endl;
        cout << "Dodatek funkcyjny: " << this->dodatek_funk << "%" << endl;
        cout << "Typ kierownictwa: " << this->typ_kier << endl;
    }

    Pracownik przymij_pracownika() {
        cout << "Rozpoczeto przyjmowanie nowego pracownika" << endl;
        cout << "Podaj dane nowego pracownika:" << endl;
        Pracownik nowy = Pracownik();
        return nowy;
    }
};

int main()
{
    Kierownik b = Kierownik();
    b.pracownik_info();
    Pracownik a = b.przymij_pracownika();
    return 0;
}
