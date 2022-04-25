#include <iostream>
#include <string.h>
 
using namespace std;
 

struct osoba {
    string imie;
    string nazwisko;
    int wiek;
    string miasto;

};
 
int main()
{
    osoba a;  
    cout<< "Imie \n";
    cin >> a.imie;
    cout<< "Nazwisko \n";
    cin >> a.nazwisko;
    cout<< "Wiek \n";
    cin >> a.wiek;
    cout<< "Miasto \n";
    cin >> a.miasto;
    
    osoba b;  
    cout<< "Imie \n";
    cin >> b.imie;
    cout<< "Nazwisko \n";
    cin >> b.nazwisko;
    cout<< "Wiek \n";
    cin >> b.wiek;
    cout<< "Miasto \n";
    cin >> b.miasto;
    
    
    osoba c;  
    cout<< "Imie \n";
    cin >> c.imie;
    cout<< "Nazwisko \n";
    cin >> c.nazwisko;
    cout<< "Wiek \n";
    cin >> c.wiek;
    cout<< "Miasto \n";
    cin >> c.miasto;

 
    cout << "Dane: " << a.imie << " " << a.nazwisko << " lat: " << a.wiek << " Mieszka w: " << a.miasto << "\n";
    cout << "Dane: " << b.imie << " " << b.nazwisko << " lat: " << b.wiek << " Mieszka w: " << b.miasto << "\n";
    cout << "Dane: " << c.imie << " " << c.nazwisko << " lat: " << c.wiek << " Mieszka w: " << c.miasto << "\n";
    return 0;
}












