//Nama File     : kalkulator.c
//Deskripsi     : Membuat program kalkulator super sederhana
//Pembuat       : Ajeng Nurhaliza Ar Rachman - 24060121140109
//Tgl Pembuatan : 18-03-2022, 10.54


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // kamus
    float iA, iB, i;
    char C;

    // algoritma
    printf("Program Kalkulator Sederhana \n");
    printf("Masukkan Bilangan Pertama: ");
    scanf("%f", &iA);
    printf("Masukkan Bilangan Kedua: ");
    scanf("%f", &iB);
    printf("Operasi Bilangan: \n");
    printf("a : Penjumlahan \n");
    printf("b : Pengurangan \n");
    printf("c : Perkalian \n");
    printf("d : Pembagian \n");
    printf("e : Pembagian Integer (div) \n");
    printf("f : Hasil Pembagian (mod) \n");
    printf("Masukan Operasi Bilangan: ");
    scanf("%s",&C);
    switch (C)
    {
        case 'a':
            i = iA + iB;
            printf("Hasil Operasi Bilangan: %d \n", (int)i);
            break;
        case 'b':
            i = iA - iB;
            printf("Hasil Operasi Bilangan: %d \n", (int)i);
            break;
        case 'c':
            i = iA * iB;
            printf("Hasil Operasi Bilangan: %d \n", (int)i);
            break;
        case 'd':
            i = iA / iB;
            printf("Hasil Operasi Bilangan: %d \n", (int)i);
            break;
        case 'e':
            i = (int)iA/(int)iB;
            printf("Hasil Operasi Bilangan: %d \n", (int)i);
            break;
        case 'f':
            i = (int)iA % (int)iB;
            printf("Hasil Operasi Bilangan: %d \n", (int)i);
            break;
        default:
            printf("Bukan Pilihan Menu yang Benar \n");
            break;
    }

    return 0;
}
