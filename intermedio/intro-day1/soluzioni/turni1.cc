#include <algorithm>
#include <fstream>

#define MAXN 50

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");
int K, N;
int a[MAXN], b[MAXN];

int main() {
    fin >> K >> N;

    for (int i = 0; i < N; i++) {
        fin >> a[i] >> b[i];
    }

    int fine = 0;
    int cont = 0;
    while (fine < K) {
        int maxFine = 0;
        for (int i = 0; i < N; i++) {
            if (a[i] <= fine && b[i] > maxFine)
                maxFine = b[i];
        }
        maxFine++;
        fine = maxFine;
        cont++;
    }
    fout << cont << endl;

    fin.close();
    fout.close();
}