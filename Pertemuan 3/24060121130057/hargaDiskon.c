/*Nama File: hargaDiskon.c
Deskripsi: Program mengolah harga setelah didiskon berdasarkan barang yang dipilih
Pembuat: Safril Isnaini (24060121130057)
Tanggal Pembuatan: 18 Maret 2022*/

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    /*Kamus*/
    int harga, hargaDiskon; /*integer harga masukan dan harga setelahh didiskon*/
    char jenis; /*masukan jenis barang*/

    /*Algoritma*/
    printf("Masukkan jenis barang: ");
    scanf("%c", &jenis);
    printf("Masukkan harga barang: ");
    scanf("%d", &harga);
    switch (tolower(jenis))
    {
    case 'a':
        hargaDiskon = (9 * harga) / 10 ; 
        break;
    case 'b':
        hargaDiskon = (17 * harga) / 20;
        break;
    case 'c':
        hargaDiskon = (4 * harga) / 5 ;
        break;
    default:
        printf("bukan termasuk jenis barang");
        break;
    }
    printf("harganya sebesar %d", hargaDiskon);
    return 0;
}
