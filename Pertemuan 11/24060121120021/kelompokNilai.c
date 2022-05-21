/*Nama File 	: kelompokNilai.c*/
/*Deskripsi 	: Mengelompokkan nilai berdasarkan kelompok nilai huruf terentu dan dioutputkan dalam file yang berbeda*/
/*Pembuat   	: 24060121120021-Resma Adi Nugroho*/
/*Tgl Pembuatan	: 21 Mei 2022 12.52 WIB*/

/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{ // tipe bentukan mahasiswa yang berisi nama, nim, dan nilai
    char nama[255][255];
    int nim;
    int nilai;
}mahasiswa;

/*Program Utama*/
int main(void)
{
    /*Kamus Lokal*/
    mahasiswa MHS;
    int retval;
    
    FILE *myFILE, *aFile, *bFile, *cFile, *Fail;

    myFILE = fopen("rekapNilai.txt", "r");
    aFile = fopen("Lulus_A.txt","w");
    bFile = fopen("Lulus_B.txt","w");
    cFile = fopen("Lulus_C.txt","w");
    Fail = fopen("Mengulang.txt","w");

    /*Algoritma*/
    if(!myFILE){
        printf("File tidak ditemukan!"); // apabila file kandidat.txt tidak ditemukan maka akan memunculkan pesan ini
    } else {
        fprintf(aFile, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemrograman dengan predikat A\n");
        fprintf(bFile, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemrograman dengan predikat B\n");
        fprintf(cFile, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemrograman dengan predikat C\n");
        fprintf(Fail, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemrograman yang mengulang\n");
        retval = fscanf(myFILE, "%s %d %d", &MHS.nama,&MHS.nim,&MHS.nilai);
        while (retval != EOF)
        {
            if(MHS.nilai >= 80){ // Proses pengelompokan nilai berdasarkan kriteria 
                fprintf(aFile, "%s %d %d\n", MHS.nama,MHS.nim,MHS.nilai);
            } else if(MHS.nilai >= 70 && MHS.nilai < 80){
                fprintf(bFile, "%s %d %d\n", MHS.nama,MHS.nim,MHS.nilai);
            } else if(MHS.nilai >= 60 && MHS.nilai < 70){
                fprintf(cFile, "%s %d %d\n", MHS.nama,MHS.nim,MHS.nilai);
            } else {
                fprintf(Fail, "%s %d %d\n", MHS.nama,MHS.nim,MHS.nilai);
            }
            retval = fscanf(myFILE, "%s %d %d", &MHS.nama,&MHS.nim,&MHS.nilai);
        }
        printf("Nilai berhasil dikelompokkan");
        fclose(myFILE);
                
    }
    return 0;
}