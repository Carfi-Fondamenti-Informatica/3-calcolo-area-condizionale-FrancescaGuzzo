#include <iostream>
using namespace std;

int main() {
   float a, b, triangolo, quadrato, rettangolo;
    int opzione;
    cout << "inserire due valori reali: " << endl;
    cin >> a >> b;

    cout << "inserire il valore di opzione: ";
    cin >> opzione;

    switch (opzione){
        case 0: 
            triangolo= (a*b)/2;
            cout << triangolo << endl;
            break;
        case 1: 
            quadrato= a*a;
            cout << quadrato << endl;
            break;
        case 2: 
            rettangolo= a*b;
            cout << rettangolo << endl;
            break;
        default:
            cout << "opzione non valida";
    }
   return 0;
}
