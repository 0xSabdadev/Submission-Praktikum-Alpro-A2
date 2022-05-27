// Nama file    : HargaDiskon
// Deskripsi    : Menghitung dan menampilkan besar harga yang didapat
//                setelah diskon
// Pembuat      : Muhammad Dzaki Prasetyo
// Tgl Pembuatan: 15 Maret 2022, Jam 11.00 PM
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int i;
    char J;

    //Algoritma
    printf("Masukkan harga barang : ");
    scanf("%d", &i);
    printf("Masukkan jenis barang antara A - C : ");
    scanf(" %c",&J);
    switch (J){
        case 'A' :
            printf("%d", 90 * i / 100);
            break;
        case 'B' :
            printf("%d",(85* i / 100));
            break;
        case 'C' :
            printf("%d", 80* i / 100);
            break;
    }
    return 0;
}
