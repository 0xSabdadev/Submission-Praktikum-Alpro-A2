// Nama File     : nilaiMsw.c
// Nama/NIM      : Fahriant Ekrie / 24060121130071
// Tanggal       : 22 May 2022
// Deskripsi     : Membantu pa eko menyortir nilai

#include <stdio.h> 
#include <stdlib.h>


typedef struct{
    char name[999];
    char NIM[999];
    int nilai;
}nilaiMsw;


int main(void){
    // Kamus Lokal
    nilaiMsw msw;
    int retval;

    FILE *file = fopen("file2.txt", "r");
    FILE *lulusA = fopen("lulusA.txt", "w");
    FILE *lulusB = fopen("lulusB.txt", "w");
    FILE *lulusC = fopen("lulusC.txt", "w");
    FILE *mengulang = fopen("mengulang.txt", "w");
    retval = fscanf(file, "%s %s %d", &msw.name, &msw.NIM, &msw.nilai);

    // Algoritma
    
    fprintf(lulusA, "Daftar mahasiswa dengan predikat A\n\n");
    fprintf(lulusB, "Daftar mahasiswa dengan predikat B\n\n");
    fprintf(lulusC, "Daftar mahasiswa dengan predikat C\n\n");
    fprintf(mengulang, "Daftar mahasiswa yang mengulang D\n\n");

    while (retval != EOF)
    {
        if(msw.nilai >= 80){
            fprintf(lulusA, "%s %s %d\n", msw.name, msw.NIM, msw.nilai);
        }
        else if(msw.nilai >= 70 && msw.nilai < 80){
            fprintf(lulusB, "%s %s %d\n", msw.name, msw.NIM, msw.nilai);
        }
        else if(msw.nilai >= 60 && msw.nilai < 70){
            fprintf(lulusC, "%s %s %d\n", msw.name, msw.NIM, msw.nilai);
        }
        else if(msw.nilai < 60){
            fprintf(mengulang, "%s %s %d\n", msw.name, msw.NIM, msw.nilai);
        }
        retval = fscanf(file, "%s %s %d", &msw.name, &msw.NIM, &msw.nilai);
    }


    return 0;
}
