/*Nama File 	: RekapNilaiMhs.c*/
/*Deskripsi 	: Mengelompokkan status predikat mahasiswa berdasarkan nilainya*/
/*Pembuat   	: 24060121130081 - Rizky Akhmad Fahreza*/
/*Tgl Pembuatan	: 21/5/2022*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

// tipe data
typedef struct{
    char Nama[999];
    char NIM[999];
    int Nilai;
}RHMS;

/*Program Utama*/
int main(void){
    // Kamus
    RHMS Mhs;
    int retval;

    FILE *myFILE = fopen("input.txt", "r");
    FILE *LulusA = fopen("Lulus_A.txt", "w");
    FILE *LulusB = fopen("Lulus_B.txt", "w");
    FILE *LulusC = fopen("Lulus_c.txt", "w");
    FILE *Mengulang = fopen("Mengulang.txt", "w");
    retval = fscanf(myFILE, "%s %s %d", &Mhs.Nama, &Mhs.NIM, &Mhs.Nilai);

    // Algoritma
    // Menulis keterangan pada setiap file
    fprintf(LulusA, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat A\n\n");
    fprintf(LulusB, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat B\n\n");
    fprintf(LulusC, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat C\n\n");
    fprintf(Mengulang, "Daftar mahasiswa yang tidak lulus mata kuliah Algoritma Pemrograman dengan predikat D\n\n");
    
    while (retval != EOF)
    {
        if(Mhs.Nilai >= 80){
            fprintf(LulusA, "%s %s %d\n", Mhs.Nama, Mhs.NIM, Mhs.Nilai);
        }
        else if(Mhs.Nilai >= 70 && Mhs.Nilai < 80){
            fprintf(LulusB, "%s %s %d\n", Mhs.Nama, Mhs.NIM, Mhs.Nilai);
        }
        else if(Mhs.Nilai >= 60 && Mhs.Nilai < 70){
            fprintf(LulusC, "%s %s %d\n", Mhs.Nama, Mhs.NIM, Mhs.Nilai);
        }
        else if(Mhs.Nilai < 60){
            fprintf(Mengulang, "%s %s %d\n", Mhs.Nama, Mhs.NIM, Mhs.Nilai);
        }
        retval = fscanf(myFILE, "%s %s %d", &Mhs.Nama, &Mhs.NIM, &Mhs.Nilai);
    }
    

    return 0;
}

