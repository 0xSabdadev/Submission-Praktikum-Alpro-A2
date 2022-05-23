//Nama File     : nilaiAkhir.c
//Deskripsi     : Membantu Pak Eko merekap nilai akhir mahasiswa
//Pembuat       : Ajeng Nurhaliza Ar Rachman - 24060121140109
//Tgl Pembuatan : 21-05-2022

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
    filekuA = fopen("Lulus_A.txt", "w");
    filekuB = fopen("Lulus_B.txt", "w");
    filekuC = fopen("Lulus_C.txt", "w");
    filekuD = fopen("Lulus_D.txt", "w");
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

    return 0;
}
