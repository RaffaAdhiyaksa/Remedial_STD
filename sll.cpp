#include "sll.h"

void createList(List &L) {
    L.first = nullptr;
}

address createNewElm(infotype x) {
    address p = new elmList;
    p->info = x;
    p->next = nullptr;
    return p;
}

void tambahData(List &L, infotype dataBaru) {
    address p = createNewElm(dataBaru);
    if (L.first == nullptr) {
        L.first = p;
    } else {
        p->next = L.first;
        L.first = p;
    }
}

address panenTerbanyak(List L) {
    if (L.first == nullptr) {
        return nullptr;
    } else {
        address p = L.first;
        address pMax = p;

        while (p != nullptr) {
            if (p->info.jumlah > pMax->info.jumlah) {
                pMax = p;
            }
            p = p->next;
        }
        return pMax;
    }
}

void panenBulanan(List L, string bln) {
    address p = L.first;
    bool ditemukan = false;

    cout << "Hasil panen bulan " << bln << ": ";
    while (p != nullptr) {
        if (p->info.bulan == bln) {
            cout << p->info.nama << " ";
            ditemukan = true;
        }
        p = p->next;
    }

    if (!ditemukan) {
        cout << "Tidak ada data";
    }
    cout << endl;
}
