/*  Nama File    :  Kelompok.c*/
/*  Pembuat      :  Ririn Indah Cahyani - 24060121130069*/
/*  Dibuat       :  21 Mei 2022 - 0:38*/
/*  Deskripsi    :  Berisi Sub Program lulusA, lulusB, lulusC, lulusD, tidaklulus*/


#ifndef KELOMPOK_C
#define KELOMPOK_C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Primitif.h"


//SUB PROGRAM LULUS DENGAN NILAI A
void lulusA(char* Arsip1, char* Arsip2){
    //Kamus Lokal
    mahasiswa data;
    FILE *Fileku1;
    FILE *Fileku2;
    int temp;

    //OPEN
    Fileku1 = fopen(Arsip1,"r");
    Fileku2 = fopen(Arsip2,"w");

    //LOGIC
    if(Fileku1 != NULL){
        //temp = fscanf(Fileku1, "%d", data.nilaiakhir);
        fprintf(Fileku2, "Daftar Mahasiswa Yang Lulus Kuliah Algoritma Pemograman dengan predikat A\n\n");
        while(temp != -1){
            if(data.nilaiakhir >= 80){
                fprintf(Fileku2, "%s %s %d\n", data.nama, data.nim, data.nilaiakhir);
            }
            temp = fscanf(Fileku1, "%s %s %d", &data.nama, &data.nim, &data.nilaiakhir); 
            fflush(stdin);
        }
    }

    //CLOSE
    fclose(Fileku1);
    fclose(Fileku2);

}

//SUB PROGRAM LULUS DENGAN NILAI B
void lulusB(char* Arsip1, char* Arsip2){
    //Kamus Lokal
    mahasiswa data;
    FILE *Fileku1;
    FILE *Fileku2;
    int temp;

    //OPEN
    Fileku1 = fopen(Arsip1,"r");
    Fileku2 = fopen(Arsip2,"w");

    //LOGIC
    if(Fileku1 != NULL){
        temp = fscanf(Fileku1, "%d", &data.nilaiakhir);
        fprintf(Fileku2, "Daftar Mahasiswa Yang Lulus Kuliah Algoritma Pemograman dengan predikat B\n\n");
        while(temp != -1){
            if(data.nilaiakhir >= 70 && data.nilaiakhir < 80){
                fprintf(Fileku2, "%s %s %d\n", data.nama, data.nim, data.nilaiakhir);
            }
            temp = fscanf(Fileku1, "%s %s %d", &data.nama, &data.nim, &data.nilaiakhir); 
            fflush(stdin);
        }
    }

    //CLOSE
    fclose(Fileku1);
    fclose(Fileku2);

}


//SUB PROGRAM LULUS DENGAN NILAI C
void lulusC(char* Arsip1, char* Arsip2){
    //Kamus Lokal
    mahasiswa data;
    FILE *Fileku1;
    FILE *Fileku2;
    int temp;

    //OPEN
    Fileku1 = fopen(Arsip1,"r");
    Fileku2 = fopen(Arsip2,"w");

    //LOGIC
    if(Fileku1 != NULL){
        temp = fscanf(Fileku1, "%d", &data.nilaiakhir);
        fprintf(Fileku2, "Daftar Mahasiswa Yang Lulus Kuliah Algoritma Pemograman dengan predikat C\n\n");
        while(temp != -1){
            if(data.nilaiakhir >= 60 && data.nilaiakhir < 70){
                fprintf(Fileku2, "%s %s %d\n", data.nama, data.nim, data.nilaiakhir);
            }
            temp = fscanf(Fileku1, "%s %s %d", &data.nama, &data.nim, &data.nilaiakhir); 
            fflush(stdin);
        }
    }

    //CLOSE
    fclose(Fileku1);
    fclose(Fileku2);

}


//SUB PROGRAM TIDAK LULUS (MENGULANG)
void tidaklulus(char* Arsip1, char* Arsip2){
    //Kamus Lokal
    mahasiswa data;
    FILE *Fileku1;
    FILE *Fileku2;
    int temp;

    //OPEN
    Fileku1 = fopen(Arsip1,"r");
    Fileku2 = fopen(Arsip2,"w");

    //LOGIC
    if(Fileku1 != NULL){
        temp = fscanf(Fileku1, "%d", &data.nilaiakhir);
        fprintf(Fileku2, "Daftar Mahasiswa Yang Tidak Lulus Kuliah Algoritma Pemograman\n\n");
        while(temp != -1){
            if(data.nilaiakhir < 60){
                fprintf(Fileku2, "%s %s %d\n", data.nama, data.nim, data.nilaiakhir);
            }
            temp = fscanf(Fileku1, "%s %s %d", &data.nama, &data.nim, &data.nilaiakhir); 
            fflush(stdin);
        }
    }

    //CLOSE
    fclose(Fileku1);
    fclose(Fileku2);

}

#endif
