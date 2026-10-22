// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int tipoMedalla[50], total, oros = 0, platas = 0, bronces = 0;
    for (int i = 0; i < 50; i++) {
        tipoMedalla[i] = rand() % 4;
        cout << tipoMedalla[i] << " ";
        switch (tipoMedalla[i]) {
            case 1: oros++; break;
            case 2: platas++; break;
            case 3: bronces++; break;
        }
    }
    total = oros + platas + bronces;
    cout << "\nPruebas sin medallas: " << (50 - total) << endl;
    cout << "Total oros: " << oros << endl;
    cout << "Total platas: " << platas << endl;
    cout << "Total bronces: " << bronces << endl;
    cout << "Total medallas: " << total << endl;
    return 0;
}
