//
//  funcpros.cpp
//  Tubes
//
//  Created by Iyank & Athalla. on 4/3/19.
//  Copyright © 2019 Iyank & Athalla. All rights reserved.
//

#include "funcpros.h"

bool isEmpty(list &L){
    return first(L)==NULL && last(L)==NULL;
}
void createlist(list &L){
    first(L)=NULL;
    last(L)=NULL;
}
void createartikel(address &P, string jdl, string isi, string ta){
    P = new data;
    judul(P)=jdl;
    artik(P)=isi;
    tag(P)=ta;
    next(P)=NULL;
    prev(P)=NULL;
}
void addartikel(list &L, address P){
    if (isEmpty(L)){
        first(L)=P;
        last(L)=P;
    }else{
        prev(P)=last(L);
        next(last(L))=P;
        last(L)=P;
    }
}
void tagterbanyak(list L, string tagart){
    address P = first(L);
    int count = 0;
    while (next(P)!=NULL){
        if (tag(P)==tagart){
            count++;
            P=next(P);
        }else{
            P=next(P);
        }
    }
    cout<<"Tag Terbanyak adalah: "<<tagart<<endl;
    cout<<"Terdapat Tag dengan nama "<<tagart<<count<<endl;
    
}
void cariartik(list L, string art){
    address P = first(L);
    bool found = false;
    while ((next(P)!=NULL)||(found!=true)){
        if (art==judul(P)){
            found = true;
        }else{
            P=next(P);
        }
    }
    if (found==true){
        cout<<judul(P)<<endl;
        cout<<artik(P)<<endl;
        cout<<tag(P)<<endl;
    }else{
        cout<<"Artikel tidak ditemukan"<<endl;
    }
}
void delartikel(list &L, string judl){
    address P = first(L);
    bool found = false;
    while ((next(P)!=NULL)||(found!=true)){
        if (judl==judul(P)){
            found = true;
        }else{
            P=next(P);
        }
    }
    if (found==true){
        next(prev(P))=next(P);
        prev(next(P))=next(prev(P));
        prev(P)=NULL;
        next(P)=NULL;
        delete P;
    }else{
        cout<<"artikel tidak ada"<<endl;
    }
}
void lihatartikel(list L){
    address P = first(L);
    while(next(P)!=NULL){
        cout<<judul(P)<<endl;
        cout<<artik(P)<<endl;
        cout<<tag(P)<<endl;
        P=next(P);
    }
}
