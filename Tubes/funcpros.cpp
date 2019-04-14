//
//  funcpros.cpp
//  Tubes
//
//  Created by Iyank & Athalla. on 4/3/19.
//  Copyright © 2019 Iyank & Athalla. All rights reserved.
//

#include "funcpros.h"
//check function
bool isEmptyP(list &L){
    return first(L)==NULL && last(L)==NULL;
}
bool isEmptyLP(LPT &L){
    return firstPT(L)==NULL && lastPT(L)==NULL;
}
bool isEmptyLT(LT &L){
    return firstT(L)==NULL && lastT(L)==NULL;
}
//create list function
void CListParent(list &L){
    first(L)=NULL;
    last(L)=NULL;
}
void CListPointer(LPT &LP){
    firstPT(LP)=NULL;
    lastPT(LP)=NULL;
}
void CListTag(LT &T){
    firstT(T)=NULL;
    lastT(T)=NULL;
}
//create artikel
void createartikel(list &L){
    address P = new data;
    string judul,isi;
    cout<<"Menu input artikel"<<endl;
    cout<<endl;
    cout<<"Masukan Judul artikel: ";
    cin>>judul;
    cout<<endl;
    cout<<"Masukan isi artikel: ";
    cin>>isi;
    judul(P)=judul;
    artik(P)=isi;
    next(P)=NULL;
    prev(P)=NULL;
    if (isEmptyP(L)){
        first(L)=P;
        last(L)=P;
    }else{
        next(last(L))=P;
        prev(P)=last(L);
        last(L)=P;
    }
}
void createTag(LPT &Q, LT &W, list L){
    adrPtag P = new Ptag;
    nextTag(P)=NULL;
    prevTag(P)=NULL;
    source(P)=NULL;
    PointerTag(P)=NULL;
    adrTag T = new Ltag;
    string tag;
    cout<<"Menu Add tag"<<endl;
    cout<<endl;
    cout<<"Masukan tag : ";
    cin>>tag;
    tagartik(T)=tag;
    count(T)=1;
    if (isEmptyLT(W)){
        firstT(W)=T;
        lastT(W)=T;
    }else{
        adrTag U = firstT(W);
        bool found = false;
        while(nextLT(U)!=NULL && found == false){
            if (tagartik(U)==tag){
                found = true;
            }else{
                U=nextLT(U);
            }
        }
        if(found==true){
            count(U)=count(U)+count(T);
            if (isEmptyLP(Q)){
                source(P)=last(L);
                PointerTag(P)=U;
                firstPT(Q)=P;
                lastPT(Q)=P;
            }else{
                nextTag(lastPT(Q))=P;
                prevTag(P)=lastPT(Q);
                source(P)=last(L);
                PointerTag(P)=U;
                lastPT(Q)=P;
            }
        }else{
            //TAMBAHIN KALO TAG KAGA ADA (BERARTI LIST TAG/CHILD NAMBAH)
        }
    }
}
