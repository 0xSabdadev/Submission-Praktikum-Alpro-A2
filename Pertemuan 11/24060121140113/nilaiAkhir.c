/*Nama File 	: nilaiAkhir.c*/
/*Deskripsi 	: mengerjakan soal nomor 2 dari soal pdf lab alpro A2 : Tolong Bantu Pak Eko Mengelompokkan Nilai */
/*Pembuat   	: Rhadiyyah Ariana Saraswati - 24060121140113*/
/*Tgl Pembuatan	: Sabtu, 21 Mei 2022*/

/*header file*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nama[255][255];
    int nim;
    int nilai;
}RMHS;

int main()
{
    RMHS Mhs;
    int retval;

    FILE *fileku;
    FILE *filekuA, *filekuB, *filekuC,*filekuD;
    fileku = fopen("RekapNilaiMahasiswa.txt", "r");
    filekuA = fopen("Lulus_A.txt", "w");
    filekuB = fopen("Lulus_B.txt", "w");
    filekuC = fopen("Lulus_C.txt", "w");
    filekuD = fopen("Mengulang.txt", "w");
    retval = fscanf(fileku, "%s %d %d", &Mhs.nama, &Mhs.nim, &Mhs.nilai);

    fprintf(filekuA, "Daftar Mahasiswa yang Lulus Mata Kuliah Algoritma Pemrograman dengan Predikat A\n\n");
    fprintf(filekuB, "Daftar Mahasiswa yang Lulus Mata Kuliah Algoritma Pemrograman dengan Predikat B\n\n");
    fprintf(filekuC, "Daftar Mahasiswa yang Lulus Mata Kuliah Algoritma Pemrograman dengan Predikat C\n\n");
    fprintf(filekuD, "Daftar Mahasiswa yang Tidak Lulus Mata Kuliah Algoritma Pemrograman dengan Predikat D\n\n");
    while(retval != EOF) {
        if(Mhs.nilai>=80) {
            fprintf(filekuA, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else if (Mhs.nilai >=70 && Mhs.nilai <80) {
            fprintf(filekuB, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else if (Mhs.nilai >=60 && Mhs.nilai <70) {
            fprintf(filekuC, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else {
            fprintf(filekuD, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        }

        retval = fscanf(fileku, "%s %d %d", &Mhs.nama, &Mhs.nim, &Mhs.nilai);
    }

    fclose(fileku);
}