/*Nama File 	: nilaiAkhir.c*/
/*Deskripsi 	: membantu Pak Eko merekap nilai akhir mahasiswa*/
/*Pembuat   	: Maulana Pasya Zefanya*/
/*NIM           : 24060121140175*/
/*Tgl Pembuatan	: 21 Mei 2022*/

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
    fileku = fopen("rekapNilaiMahasiswa.txt", "r");
    filekuA = fopen("lulus_A.txt", "w");
    filekuB = fopen("lulus_B.txt", "w");
    filekuC = fopen("lulus_C.txt", "w");
    filekuD = fopen("lulus_D.txt", "w");
    retval = fscanf(fileku, "%s %d %d", &Mhs.nama, &Mhs.nim, &Mhs.nilai);

    fprintf(filekuA, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat A\n\n");
    fprintf(filekuB, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat B\n\n");
    fprintf(filekuC, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat C\n\n");
    fprintf(filekuD, "Daftar mahasiswa yang tidak lulus mata kuliah Algoritma Pemrograman dengan predikat D\n\n");
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
