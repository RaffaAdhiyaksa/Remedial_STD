#include <iostream>
#include "sll.h"

using namespace std;

int main() {
    List L;
    createList(L);
    infotype data;

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

    cout << "=== DATA PANEN ===" << endl;

    address pMax = panenTerbanyak(L);
    if (pMax != NULL) {
        cout << "Panen Terbanyak: " << pMax->info.nama
             << " (" << pMax->info.jumlah << " kg)" << endl;
    }

    panenBulanan(L, "Maret");
    panenBulanan(L, "Februari");
    panenBulanan(L, "Januari");

    return 0;
}
