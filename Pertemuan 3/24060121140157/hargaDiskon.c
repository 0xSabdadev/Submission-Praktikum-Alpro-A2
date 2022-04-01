/* 
Nama File: hargaDiskon.c
Deskripsi: membuat program hargaDiskon dengan c
Pembuat: 24060121140157 - Muhamad Aditya Yusuf Jatikusumo
Tgl Pembuatan: 12 Maret 2022
*/

// Header file
#include <stdio.h>
#include <stdlib.h>

// Program Utama
int main(void){
    // Kamus lokal
    char barang;
    int harga;
    float hbersih; // harga bersih(setelah dikurangi diskon)
    // Algoritma
    printf("Masukkan input (barang): ");
    scanf("%c",&barang);
    printf("Masukkan input (harga): ");
    scanf("%d",&harga);
    if(harga < 200 ){ // karena harga dari > 200 dan < 10.000
        printf("Harap masukkan harga >= 200!\n");
    }else{
        switch (barang)
        case 'a':
            /* code */
            hbersih = harga - (10/(float)100) * harga;
            printf("Harganya adalah: %f\n",hbersih );
            break;
        
        case 'b':
            /* code */
            hbersih = harga - (15/(float)100) * harga;
            printf("Harganya adalah: %f\n",hbersih);
            break;

        case 'c':
            /* code */
            hbersih = harga - (20/(float)100) * harga;
            printf("Harganya adalah: %f\n",hbersih);
            break;
        default :
            printf("Input tidak valid\n");
            break;
        }
    }
    return 0;
}

