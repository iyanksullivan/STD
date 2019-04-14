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
//define parent list
#define first(L) L.first
#define last(L) L.last
#define judul(P) P->judul
#define artik(P) P->artik
#define next(P) P->next
#define prev(P) P->prev
//define relation list
#define firstPT(L) L.firstPT
#define lastPT(L) L.lastPT
#define nextTag(P) P->nextTag
#define prevTag(P) P->prevTag
#define source(P) P->source
#define PointerTag(P) P->PointerTag
//define child list
#define firstT(L) L.firstT
#define lastT(L) L.lastT
#define tagartik(P) P->tagartik
#define count(P) P->count
#define nextLT(P) P->nextLT
#define prevLT(P) P->prevLT
#define dest(P) P->dest

typedef struct data *address;
typedef struct Ptag *adrPtag;
typedef struct Ltag *adrTag;

struct data{
    string judul;
    string artik;
    address next;
    address prev;
};
struct Ptag{
    adrPtag nextTag;
    adrPtag prevTag;
    adrTag PointerTag;
    address source;
};
struct Ltag{
    string tagartik;
    int count;
    adrTag nextLT;
    adrTag prevLT;
    adrPtag dest;
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
//check function
bool isEmptyP(list &L);
bool isEmptyLP(LPT &L);
bool isEmptyLT(LT &L);
//create list function
void CListParent(list &L);
void CListPointer(LPT &LP);
void CListTag(LT &T);
//create artikel function with insert
void createartikel(list &L);
void createTag(LPT &Q, LT &W);
void addingtag();
//function search
void cariartik(list L);
void tagterbanyak(list L);
//delete function
void delartikel(list &L);
void deleterelation();
//show all function
void viewmosttag();
void viewartikelwithsametag();
void viewartikelandtag();
#endif /* funcpros_h */
