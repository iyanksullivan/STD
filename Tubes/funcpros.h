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
#include <stdlib.h>
using namespace std;
#define first(L) L.first
#define last(L) L.last
#define judul(P) P->judul
#define artik(P) P->artik
#define next(P) P->next
#define prev(P) P->prev
#define taga(P) P->taga
#define nextTag(T) T->nextTag
#define Ptag(T) T->Ptag;
#define nextLT(TL) TL->nextLT
#define count(LT) LT->count
#define firstPT(PT) PT.firstPT
#define lastPT(PT) PT.lastPT
#define firstT(TA) TA.firstT
#define lastT(TA) TA.lastT

typedef struct data *address;
typedef struct tag *adrPtag;
typedef struct ltag *adrTag;

struct data{
    string judul;
    string artik;
    address next;
    adrPtag taga;
    address prev;
};
struct tag{
    adrPtag nextTag;
    adrTag Ptag;
};
struct ltag{
    string tagartik;
    int count;
    adrTag nextLT;
};
struct list{
    address first;
    address last;
};
struct LPT{
    adrPtag firstPT;
    adrPtag lastPT;
};
struct LT{
    adrTag firstT;
    adrTag lastT;
};
bool isEmpty(list &L);
void clistP(list &L);
void clistPT(LPT &LP);
void clistT(LT &T);
void createartikel(address &P);
//void createTag(adrPtag &PT);
void addartikel(list &L, address P);
//void addtag(LPT);
void cariartik(list L);
void tagterbanyak(list L);
void delartikel(list &L);
void lihatartikel(list L);
#endif /* funcpros_h */
