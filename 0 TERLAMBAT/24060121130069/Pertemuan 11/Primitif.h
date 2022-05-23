/*  Nama File    :  Kelompok.c*/
/*  Pembuat      :  Ririn Indah Cahyani - 24060121130069*/
/*  Dibuat       :  dari file soal */
/*  Deskripsi    :  file header yang akan menjadi header untuk file Nilai.c*/

#include <stdio.h>
#ifndef Primitif_h

typedef struct{
    char nama[50];
    char nim[15];
    int nilaiakhir;
} mahasiswa;

void lulusA(char* Arsip1, char* Arsip2);
    /*
    input : Arsip-arsip sequential/file txt yang disimpan di dalam array char
    proses : Mengelompokkan mahasiswa yang tidak perlu mengulang mata kuliah di semester 
    berikutnya karena sudah memenuhi kriteria
    output : sebuah arsip dengan data berisi mahasiswa yang Lulus mata kuliah aljabar 
    linear dengan predikat A
    */

void lulusB(char* Arsip1, char* Arsip2);
    /*
    input : Arsip-arsip sequential/file txt yang disimpan di dalam array char
    proses : Mengelompokkan mahasiswa yang tidak perlu mengulang mata kuliah di semester 
    berikutnya karena sudah memenuhi kriteria
    output : sebuah arsip dengan data berisi mahasiswa yang Lulus mata kuliah aljabar 
    linear dengan predikat B
    */

void lulusC(char* Arsip1, char* Arsip2);
    /*
    input : Arsip-arsip sequential/file txt yang disimpan di dalam array char
    proses : Mengelompokkan mahasiswa yang tidak perlu mengulang mata kuliah di semester 
    berikutnya karena sudah memenuhi kriteria
    output : sebuah arsip dengan data berisi mahasiswa yang Lulus mata kuliah aljabar 
    linear dengan predikat C
    */

void tidaklulus(char* Arsip1, char* Arsip2);
    /*
    input : Arsip-arsip sequential/file txt yang disimpan di dalam array char
    proses : Mengelompokkan mahasiswa yang harus mengulang mata kuliah di semester 
    berikutnya karena tidak memnuhi kriteria
    output : sebuah arsip dengan data mahasiswa yang harus mengulang mata kuliah di 
    semester berikutnya karena tidak memenuhi kriteria
    */


#endif // Primitif_h
