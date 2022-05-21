//Nama File 	: nilaiLulus.c
//Pembuat   	: Fairuz Fachrizal Adyatma - 24060121140121
//Tgl Pembuatan	: 21 Mei 2022
//Deskripsi 	: Membantu Pak Eko Mengelompokkan Nilai

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nama[50];
    char nim[999];
    int nilai;
}mahasiswa;

int main()
{
    mahasiswa Mhs;
    int retval;

    FILE *fileku;
    FILE *filekuA, *filekuB, *filekuC,*filekuD;
    fileku = fopen("RekapNilaiMahasiswa.txt", "r");
    filekuA = fopen("Lulus_A.txt", "w");
    filekuB = fopen("Lulus_B.txt", "w");
    filekuC = fopen("Lulus_C.txt", "w");
    filekuD = fopen("Mengulang.txt", "w");
    retval = fscanf(fileku, "%s %s %d", &Mhs.nama, &Mhs.nim, &Mhs.nilai);

    fprintf(filekuA, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat A\n\n");
    fprintf(filekuB, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat B\n\n");
    fprintf(filekuC, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat C\n\n");
    fprintf(filekuD, "Daftar mahasiswa yang tidak lulus mata kuliah Algoritma Pemrograman dengan predikat D\n\n");
    while(retval != EOF) {
        if(Mhs.nilai>=80) {
            fprintf(filekuA, "%s %s %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else if (Mhs.nilai >=70 && Mhs.nilai <80) {
            fprintf(filekuB, "%s %s %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else if (Mhs.nilai >=60 && Mhs.nilai <70) {
            fprintf(filekuC, "%s %s %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else {
            fprintf(filekuD, "%s %s %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        }

        retval = fscanf(fileku, "%s %s %d", &Mhs.nama, &Mhs.nim, &Mhs.nilai);
    }

    fclose(fileku);
}
