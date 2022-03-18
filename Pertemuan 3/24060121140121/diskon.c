// Nama file    : diskon.c
// Deskripsi    : Menghitung harga setelah mendapatkan diskon
// Pembuat      : Fairuz Fachrizal Adyatma
// Tgl Pembuatan: 16 Maret 2022

#include <stdio.h>
#include <stdlib.h>

int main(){
// KAMUS
    int a;
    char B;

// ALGORITMA
    printf("Masukkan harga: ");
    scanf("%d", &a);
    printf("Masukkan jenis barang a - c: ");
    scanf(" %c", &B);

    switch(B){
        case 'a':
            printf("%d", 90 * a / 100);
            break;
        case 'b':
            printf("%d", (85 * a / 100));
            break;
        case 'c':
            printf("%d", 80 * a / 100);
            break;
    }
    return 0;

}
