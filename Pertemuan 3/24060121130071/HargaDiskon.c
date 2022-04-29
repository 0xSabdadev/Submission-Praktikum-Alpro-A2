// Nama File    : HargaDiskon.c
// Nama Pembuat : Fahriant Ekrie
// NIM          : 24060121130071
// Tanggal      : 06 Maret 2022
// Deskripsi    : menghitung dan menampilkan harga setelah diskon suatu
//                produk dengan input harga awal di layar

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

    // Kamus Lokal
    int H;
    char J;

    // Input Variabel
    printf("Masukkan Harga : ");
    scanf("%d",&H);
    printf("Masukkan Jenis Barang : ");
    scanf(" %c",&J);


    // Algoritma
    if( H > 200 & H < 10000){
        if(J == 'A'){
            printf("%f", H - (0.1 * H));
        }
        else if(J == 'B'){
            printf("%f", H - (0.15 * H));
        }
        else if(J == 'C'){
            printf("%f", H - (0.2 * H));
        }
    }
    else{
        printf("%d", H);
    }

    return 0;
}
