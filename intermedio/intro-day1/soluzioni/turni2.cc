#include <algorithm>
#include <fstream>
#include <iostream>

#define MAXN 50

using namespace std;

typedef struct persona {
    int a, b;
} persona;

ifstream fin("input.txt");
ofstream fout("output.txt");
int K, N;
persona v[MAXN];

bool cmp(persona a, persona b) {
    if (a.a < b.a) return true;
    return false;
}

int main() {
    fin >> K >> N;
    for (int i = 0; i < N; i++) {
        fin >> v[i].a >> v[i].b;
    }

    // Ordinamento
    sort(v, v + N, cmp);

    int fine = 0;   // Fine ultimo turno selezionato
    int primo = 0;  // Indice primo turno dopo l'ultimo selezionato. Indica da quale turno iniziare a cercare il prossimo
    int cont = 0;
    while (fine < K) {
        // Cerco il turno, partendo da primo, che inizia prima di fine e ha giorno di fine massimo
        int i = primo;
        int max_fine = i;
        while (v[i].a <= fine) {
            if (v[i].b > v[max_fine].b)
                max_fine = i;
            i++;
        }
        primo = max_fine + 1;
        fine = v[max_fine].b + 1;
        cont++;
    }
    fout << cont << endl;

    fin.close();
    fout.close();
}
