
#ifndef SORCERER_C
#define SORCERER_C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Sorcerer.h"



void Sample(char* Arsip1, char* Arsip2){

    //Kamus Lokal
    sorcerer data;
    FILE *Fileku1;
    FILE *Fileku2;
    int temp, temp1[10];

    //OPEN
    Fileku1 = fopen(Arsip1,"r");
    Fileku2 = fopen(Arsip2,"w");

    //LOGIC
    //me write data force ke pita karakter tambahan
    if(Fileku1 != NULL){
        temp = fscanf(Fileku1, "%s %d", &data.nama, &data.force);
        while(temp != EOF){
            temp1[10] = fprintf(Fileku2, "%d\n", data.force);
            temp = fscanf(Fileku1, "%s %d", &data.nama, &data.force); 
            fflush(stdin);
        }
        
    }

    //CLOSE
    fclose(Fileku1);
    fclose(Fileku2);

}

void Sorcerer(char* Arsip1, char* Arsip2){
    sorcerer data;
    FILE *Fileku1;
    FILE *Fileku2;
    int temp, temp1[10];

    //OPEN
    Fileku1 = fopen(Arsip1,"r");
    Fileku2 = fopen(Arsip2,"w");

    if(Fileku1 != NULL){
        temp = fscanf(Fileku1, " %d", &data.force);
        while(temp != EOF){
            temp1[10] = data.force;
            temp = fscanf(Fileku1, "%d", &data.force); 
            fflush(stdin);
        }
        
    }

    for(int i=0; sizeof(temp1); i++){
        printf("%d\n", temp1);
    }

    //CLOSE
    fclose(Fileku1);
    fclose(Fileku2);
}

#endif