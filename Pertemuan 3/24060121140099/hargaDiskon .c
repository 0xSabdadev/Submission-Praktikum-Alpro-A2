/* Nama File    : hargaDiskon.c
   Deskripsi    : Menentukan harga sebuah barang setelah diberi diskon berdasarkan
                  jenis barang ( A, B, dan C ).
   Pembuat      : Satria Bintang Adyatma Putra
   Tanggal      : 16-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // kamus
    int harga;
    int SetelahDiskon;
    char jenis;

    // algoritma
    printf("Menghitung Diskon Berdasarkan Jenis Barang (A, B, dan C) \n");
    printf("Jenis barang : \n");
    scanf("%c", &jenis);
    printf("Harga barang : \n");
    scanf("%d", &harga);

    if (harga > 200 && harga < 10000){
        switch(jenis){
            case 'A' :
                SetelahDiskon = harga - (harga*10/100);
                printf("harga setelah diskon : Rp. %d \n",SetelahDiskon);
                break;
            case 'B' :
                SetelahDiskon = harga - (harga*15/100);
                printf("harga setelah diskon : Rp. %d \n", SetelahDiskon);
                break;
            case 'C' :
                SetelahDiskon = harga - (harga*20/100);
                printf("harga setelah diskon : %d \n", SetelahDiskon);
                break;
            default :
                printf("jenis diskon tidak di temukan \n");
                break;
        }
    }
    else {
        printf("harga barang tidak sesuai dengan ketentuan diskon \n");
    }
    return 0;
}
