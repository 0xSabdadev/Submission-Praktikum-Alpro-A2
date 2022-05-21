/*Nama File 	: kelompokNilai_styleArray.c*/
/*Deskripsi 	: Mengelompokkan nilai berdasarkan kelompok nilai huruf terentu dan dioutputkan dalam file yang berbeda*/
/*Pembuat   	: 24060121120021-Resma Adi Nugroho*/
/*Tgl Pembuatan	: 21 Mei 2022 12.52 WIB*/

/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Program Utama*/
int main(void)
{
    /*Kamus Lokal*/
    int i, capacity;
    int nilai[10], nim[100]; // array nilai dan nim
    char nama[10][255]; // array nama
    char (*name)[100]; // array pointer nama
    int retval;
    FILE *myFILE, *aFile, *bFile, *cFile, *Fail;

    i = 0;
    myFILE = fopen("rekapNilai.txt", "r");
    aFile = fopen("Lulus_A.txt","w");
    bFile = fopen("Lulus_B.txt","w");
    cFile = fopen("Lulus_C.txt","w");
    Fail = fopen("Mengulang.txt","w");

    /*Algoritma*/
    if(!myFILE){
        printf("File tidak ditemukan!"); // Pesan muncul apabila file tidak ditemukan
    } else {
        retval = fscanf(myFILE, "%s %d %d", &nama[0],&nim[0],&nilai[0]);
        while (retval != EOF)
        {
            i++;
            retval = fscanf(myFILE, "%s %d %d", &nama[i],&nim[i], &nilai[i]);
        }
        capacity = i;
        name = malloc(capacity * sizeof(*name)); // alokasi name
        for(int s=0;s<capacity;s++){ // copy list nama dari array nama ke pointer array name
            strcpy(name[s], nama[s]);
        }
        fprintf(aFile, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemrograman dengan predikat A\n");
        fprintf(bFile, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemrograman dengan predikat B\n");
        fprintf(cFile, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemrograman dengan predikat C\n");
        fprintf(Fail, "Daftar Mahasiswa Yang Lulus Mata Kuliah Algoritma Pemrograman yang mengulang\n");
            for(int a=0;a<capacity;a++){ // proses input data ke masing-masing file kelompok nilai
                if(nilai[a] >= 80){
                    fprintf(aFile, "%s %d %d\n", name[a],nim[a],nilai[a]);
                } else if(nilai[a] >= 70 && nilai[a] < 80){
                    fprintf(bFile, "%s %d %d\n", name[a],nim[a],nilai[a]);
                } else if(nilai[a] >= 60 && nilai[a] < 70){
                    fprintf(cFile, "%s %d %d\n", name[a],nim[a],nilai[a]);
                } else {
                    fprintf(Fail, "%s %d %d\n", name[a],nim[a],nilai[a]);
                }
            }

            printf("Nilai berhasil dikelompokkan");
                
            free(name); // membersihkan data pointer name
    }
    return 0;
}