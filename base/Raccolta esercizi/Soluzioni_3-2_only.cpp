/*
Soluzione di:
3.2) Scrivere un programma che dica se un numero inserito da tastiera è primo
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;

    cout << "Inserire un numero intero: ";
    cin >> n;

    bool divisoreTrovato = false;

    // controllo tutti i numeri da 2 alla radice di n (compresa). Se trovo un divisore
    // allora posso uscire dal ciclo perchè il numero non è primo, altrimenti
    // controllo i numeri successivi.
    for(int i = 2; i <= sqrt(n) && !divisoreTrovato; i++){
        // se il numero è un divisore di n, segno che ho trovato un divisore
        if(n % i == 0){
            divisoreTrovato = true;
        }
    }

    // se termino il ciclo con divisoreTrovato == false, il numero è primo
    if(divisoreTrovato){
        cout << "Il numero è composto" << endl;
    } else {
        cout << "Il numero è primo" << endl;
    }

    return 0;
}
