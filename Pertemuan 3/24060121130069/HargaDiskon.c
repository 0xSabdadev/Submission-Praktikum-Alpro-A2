/* Nama file        : HargaDiskon.c*/
/* Pembuat          : 24060121130069 - Ririn Indah Cahyani*/
/* Tgl Pembuatan    : 16 Maret 2022 - 20:24*/
/* Deskripsi        : Menghitung dan menuliskan di layar besarnya harga setelah diakon. dengan 3 jenis barang
                      yaitu A yang akan mendapatkan diskon 10%, jenis B diskon 15%, jenis C diskon 20% dengan syarat
                      harga antara 200 dan 100000*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Kamus Lokal
    char jenis;
    int harga;

    //Algoritma
    printf("Masukan jenis barang, 'A' atau 'B' atau 'C' : ");
    scanf("%c", &jenis);
    printf("Masukan harga barang : ");
    scanf("%d", &harga);

    if (jenis == 'A' || jenis == 'B' || jenis == 'C'){
        if (harga > 200 && harga < 1000){
            switch (jenis){
                case 'A':{
                    printf("\nHarga setelah diskon = %d\n", (100-10) * harga / 100);
                    break;
                }
                case 'B':{
                    printf("\nHarga setelah diskon = %d\n", (100-15) * harga / 100);
                    break;
                }
                case 'C':{
                    printf("\nHarga setelah diskon = %d\n", (100-20) * harga / 100);
                    break;
                }
            }
        } else {
            printf("\nHarga %d tidak mendapatkan diskon\n", harga);
        }

    }else {
        printf("\nBukan pilihan yang benar\n", jenis);
    }

    return 0;
}
