#include <iostream>
using namespace std;

int main() {
    int hari;
    cin >> hari;
    int sisi1[hari];
    int sisi2[hari];
    int jawaban[hari];
    int total = 0; 

    for (int i = 0; i < hari; ++i) { 
        cin >> sisi1[i];
        cin >> sisi2[i];
    }

    for (int i = 0; i < hari; ++i) { 
        if (sisi1[i] <= sisi2[i]) {
            jawaban[i] = sisi1[i] * sisi1[i];
        } else {
            jawaban[i] = sisi2[i] * sisi2[i];
        }
    }

    for (int i = 0; i < hari; ++i) {
        cout << jawaban[i] << endl;
        total += jawaban[i];
    }
    cout << total;
}