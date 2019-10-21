/*
Soluzione di:
1.3) Scrivere un programma che inserito un numero di 4 cifre, stampi le migliaia, le centinaia, 
     le decine e le unità dalle quali è composto. (E volendo stampi la somma delle cifre del numero).
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Inserire un numero intero composto da 4 cifre: ";
    cin >> num;
    int migliaia, centinaia, decine, unita;

    unita = num % 10;  // ritorna il resto della divisione num/10
    num = num / 10;  // essendo num un intero e 10 anche, num / 10 esegue la divisione intera, quindi il resto viene troncato.
    
    decine = num % 10;
    num /= 10;  // è equivalente a scrivere: "num = num / 10;"

    centinaia = num % 10;
    num /= 10;

    migliaia = num;

    cout << "migliaia: " << migliaia << endl;
    cout << "centinaia: " << centinaia << endl;
    cout << "decine: " << decine << endl;
    cout << "unità: " << unita << endl;

    return 0;
}
