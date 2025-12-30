#include <iostream>
#include "sll.h"

using namespace std;

int main() {
    List L;
    infotype data;

    createList(L);

    data = {"Wortel", "Januari", 500};
    tambahData(L, data);

    data = {"Padi", "Februari", 850};
    tambahData(L, data);

    data = {"Labu", "Maret", 550};
    tambahData(L, data);

    data = {"Jagung", "Maret", 790};
    tambahData(L, data);

    data = {"Padi", "Februari", 1000};
    tambahData(L, data);

    address hasil = panenTerbanyak(L);
    if (hasil != NULL) {
        cout << "Panen Terbanyak: " << hasil->info.nama
             << " (" << hasil->info.jumlah << " kg)" << endl;
    }

    cout << "Panen Bulan Maret: ";
    panenBulanan(L, "Maret");

    cout << "Panen Bulan Februari: ";
    panenBulanan(L, "Februari");

    return 0;
}
