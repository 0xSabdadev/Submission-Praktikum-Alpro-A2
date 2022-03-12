/*Nama File :  HargaDiskon.c*/
/*Nama Pembuat : Resma Adi Nugroho */
/*Tanggal : 11 Maret 2022 */
/*Deskripsi : menghitung harga sebuah barang setelah diberi diskon berdasarkan aturan pemberian diskonnya*/

// Header File
#include<stdio.h>
#include<stdlib.h>

// Program Utama
int main(void){
    // Kamus
    int harga,hargaDiskon;
    char jenis;
    
    // ALgoritma
    printf("================================================\n");
    printf("==============Program Harga Diskon==============\n");
    printf("Masukan jenis barang: ");
    scanf("%c",&jenis); // Input
    printf("Masukan harga barang: ");
    scanf("%d",&harga); // Input
    if(harga>200 && harga<10000){
        switch (jenis)
        {
        case 'A':
            hargaDiskon = harga-(harga*10/100);
            printf("Harga setelah diskon : Rp. %d\n",hargaDiskon); // Output
            break;
        case 'B':
            hargaDiskon = harga-(harga*15/100);
            printf("Harga setelah diskon : Rp. %d\n",hargaDiskon); // Output
            break;
        case 'C':
            hargaDiskon = harga-(harga*20/100);
            printf("Harga setelah diskon : Rp. %d\n",hargaDiskon); // Output
            break;
        default:   
            printf("Jenis tidak ditemukan\n"); // Output
            break;
        }
    } else {
        printf("Harga kurang atau melebihi batas\n"); // Output
    }
    printf("================================================");
    return 0;
}