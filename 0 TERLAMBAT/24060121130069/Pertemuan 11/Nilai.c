/*  Nama File    :  Nilai.c*/
/*  Pembuat      :  Ririn Indah Cahyani - 24060121130069*/
/*  Dibuat       :  21 Mei 2022 - 0:38*/
/*  Deskripsi    :  Berisi Sub Program lulusA, lulusB, lulusC, lulusD, tidaklulus*/


#ifndef NILAI
#define NILAI
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Primitif.h"


//LULUS DENGAN PREDIKAT A
void lulusA(char* Arsip1, char* Arsip2){
    //Kamus Lokal
    mahasiswa coun;
    FILE *FileInput;
    FILE *FileOutput;
    int Counter;

    //OPEN
    FileInput = fopen(Arsip1,"r");  //membuka FileInput dan mendeklarasikan untuk read
    FileOutput = fopen(Arsip2,"w");  //membuka FileOutput dan mendeklarasikan untuk write

    //LOGIC
    if(FileInput != NULL){;
        fprintf(FileOutput, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemograman dengan predikat A\n\n");
        while(!feof(FileInput)){    //perulangan sampai ketemu khir dari file
            if(coun.nilaiakhir >= 80){
                fprintf(FileOutput, "%s %s %d\n", coun.nama, coun.nim, coun.nilaiakhir);
            }
            Counter = fscanf(FileInput, "%s %s %d", &coun.nama, &coun.nim, &coun.nilaiakhir); 
            fflush(stdin);
        }
    }

    //CLOSE
    fclose(FileInput);
    fclose(FileOutput);

}


//LULUS DENGAN PREDIKAT B
void lulusB(char* Arsip1, char* Arsip2){
    //Kamus Lokal
    mahasiswa coun;
    FILE *FileInput;
    FILE *FileOutput;
    int Counter;

    //OPEN
    FileInput = fopen(Arsip1,"r");  //membuka FileInput dan mendeklarasikan untuk read
    FileOutput = fopen(Arsip2,"w");  //membuka FileOutput dan mendeklarasikan untuk write

    //LOGIC
    if(FileInput != NULL){;
        fprintf(FileOutput, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemograman dengan predikat B\n\n");
        while(!feof(FileInput)){    //perulangan sampai ketemu khir dari file
            if(coun.nilaiakhir >= 70 && coun.nilaiakhir < 80){
                fprintf(FileOutput, "%s %s %d\n", coun.nama, coun.nim, coun.nilaiakhir);
            }
            Counter = fscanf(FileInput, "%s %s %d", &coun.nama, &coun.nim, &coun.nilaiakhir); 
            fflush(stdin);
        }
    }

    //CLOSE
    fclose(FileInput);
    fclose(FileOutput);

}


//LULUS DENGAN PREDIKAT C
void lulusC(char* Arsip1, char* Arsip2){
    //Kamus Lokal
    mahasiswa coun;
    FILE *FileInput;
    FILE *FileOutput;
    int Counter;

    //OPEN
    FileInput = fopen(Arsip1,"r");  //membuka FileInput dan mendeklarasikan untuk read
    FileOutput = fopen(Arsip2,"w");  //membuka FileOutput dan mendeklarasikan untuk write

    //LOGIC
    if(FileInput != NULL){;
        fprintf(FileOutput, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemograman dengan predikat B\n\n");
        while(!feof(FileInput)){    //perulangan sampai ketemu khir dari file
            if(coun.nilaiakhir >= 60 && coun.nilaiakhir < 70){
                fprintf(FileOutput, "%s %s %d\n", coun.nama, coun.nim, coun.nilaiakhir);
            }
            Counter = fscanf(FileInput, "%s %s %d", &coun.nama, &coun.nim, &coun.nilaiakhir); 
            fflush(stdin);
        }
    }

    //CLOSE
    fclose(FileInput);
    fclose(FileOutput);

}


//TIDAK LULUS (MENGULANG)
void tidaklulus(char* Arsip1, char* Arsip2){
    //Kamus Lokal
    mahasiswa coun;
    FILE *FileInput;
    FILE *FileOutput;
    int Counter;

    //OPEN
    FileInput = fopen(Arsip1,"r");  //membuka FileInput dan mendeklarasikan untuk read
    FileOutput = fopen(Arsip2,"w");  //membuka FileOutput dan mendeklarasikan untuk write

    //LOGIC
    if(FileInput != NULL){;
        fprintf(FileOutput, "Daftar Mahasiswa Yang Tidak Lulus Mata Kuliah Algoritma Pemograman\n\n");
        while(!feof(FileInput)){    //perulangan sampai ketemu khir dari file
            if(coun.nilaiakhir < 60){
                fprintf(FileOutput, "%s %s %d\n", coun.nama, coun.nim, coun.nilaiakhir);
            }
            Counter = fscanf(FileInput, "%s %s %d", &coun.nama, &coun.nim, &coun.nilaiakhir); 
            fflush(stdin);
        }
    }

    //CLOSE
    fclose(FileInput);
    fclose(FileOutput);

}


#endif


/*
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
*/



