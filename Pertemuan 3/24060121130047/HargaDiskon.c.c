/*
Nama file   : HargaDiskon.c
Deskripsi   : Memproses 2 buah inputan dengan operasi aritmatika dan menampilkannya dilayar
Pembuat     : Benjamin Franklin Saloom Sipayung - 24060121130047
Tanggal     : 17 Maret 2022
*/

#include<stdlib.h>
#include<stdio.h>


int main(void){
    // Kamus
    int Harga;
    char JenisDiskon;
    // Algoritma
    printf("Masukkan Harga Barang: ");
    scanf("%d",&Harga);
    printf("\n");
    printf("List :\n");
    printf("A = 10%\n");
    printf("B = 15%\n");
    printf("C = 20%\n");
    printf("\n");
    printf("Masukkan Jenis Diskon : ");
    scanf(" %c",&JenisDiskon);
    switch (JenisDiskon){
            case 'A':
                printf("%d", Harga - (Harga*10/100));
                    break;
            case 'B':
                printf("%d", Harga - (Harga*15/100));
                    break;
            case 'C':
                printf("%d", Harga - (Harga*20/100));
                    break;
            default :
                printf("Bukan Jenis Diskon");
            return 0;
        }
    }

