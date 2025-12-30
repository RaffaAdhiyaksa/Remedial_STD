#include "sll.h"

void createList(List &L) {
    L.first = NULL;
}

address createNewElm(infotype x) {
    address p = new elmList;
    p->info = x;
    p->next = NULL;
    return p;
}

void tambahData(List &L, infotype x) {
    address p = createNewElm(x);
    if (L.first == NULL) {
        L.first = p;
    } else {
        p->next = L.first;
        L.first = p;
    }
}

address panenTerbanyak(List L) {
    if (L.first == NULL) {
        return NULL;
    } else {
        address p = L.first;
        address pMax = p;

        while (p != NULL) {
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
    while (p != NULL) {
        if (p->info.bulan == bln) {
            cout << p->info.nama << " ";
        }
        p = p->next;
    }
    cout << endl;
}
