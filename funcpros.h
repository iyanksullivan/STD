//
//  funcpros.h
//  Tubes
//
//  Created by Iyank & Athalla. on 4/3/19.
//  Copyright © 2019 Iyank & Athalla. All rights reserved.
//

#ifndef funcpros_h
#define funcpros_h
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define judul(P) P->judul
#define artik(P) P->artik
#define tag(P) P->tag
#define next(P) P->next
#define prev(P) P->prev
using namespace std;

typedef struct data *address;

struct data{
    string judul;
    string artik;
    string tag;
    address next;
    address prev;
};

struct list{
    address first;
    address last;
};

bool isEmpty(list &L);
void createlist(list &L);
void createartikel(address &P, string jdl, string isi, string ta);
void addartikel(list &L, address P);
void cariartik(list L, string art);
void tagterbanyak(list L, string tagart);
void delartikel(list &L, address &P);
void lihatartikel(list L);
#endif /* funcpros_h */
