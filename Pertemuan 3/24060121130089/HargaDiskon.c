// Nama Program : HargaDiskon.c
/* Deskripsi    : menampilkan harga diskon dari barang yang terdiri dari jenis A, B, dan C. Barang jenis A dikenakan diskon 10% , Barang jenis B dikenakan diskon 15% dan Barang jenis C dikenakan  diskon 20%*/
// Pembuat      : Axelliano Rafael Situmeang - 24060121130089
// Tanggal      : 8 Maret 2022 19.29


#include <stdio.h>
#include <stdlib.h>
int main(){
    //Kamus
    int harga;
    char jenis;

    //Algoritma
    printf("Masukkan jenis barang antara A - C : ");
    scanf(" %c",&jenis);
    printf("Masukkan harga barang : ");
    scanf("%d", &harga);
    switch (jenis){
        case 'A' :
            printf("%d", 90 * harga / 100);
            break;
        case 'B' :
            printf("%d",(85* harga / 100));
            break;
        case 'C' :
            printf("%d", 80* harga / 100);
            break;
    }
    return 0;
}
