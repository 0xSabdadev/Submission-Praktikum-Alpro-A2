#ifndef KKN_C
#define KKN_C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "KKN.h"


char pita_karakter[100];
int idx =0;

void START(){
    idx=0;
    CC = pita_karakter[idx];
}

void INC(){
    idx++;
    CC = pita_karakter[idx];
}

void GETCC(){
    printf("%c", CC);
}

void KKN(char* Arsip1, char* Arsip2){
    //Kamus Lokal
    KKn data;
    FILE *Fileku1;
    FILE *Fileku2;
    int temp;

    //OPEN
    Fileku1 = fopen(Arsip1,"r");
    Fileku2 = fopen(Arsip2,"w");

    START();

#endif