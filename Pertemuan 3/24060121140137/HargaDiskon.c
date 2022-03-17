/*
Nama file   : HargaDiskon.C
Deskripsi   : Menghitung besarnya harga setelah diberikan diskon
Pembuat     : Angga Syaputra - 24060121140137
Tanggal     : 17 Maret 2022
*/

#include<stdlib.h>
#include<stdio.h>

int main(void){
    // Kamus
    int D;
    char H;

    // Algoritma
    printf("Masukan Harga barang : ");
    scanf("%d",&D);
    printf("Masukan jenis diskon : ");
    scanf(" %c",&H);
    
    switch (H){
        case 'A':
            printf("%d", D - (D*10/100));
            break;
        case 'B':
            printf("%d", D - (D*15/100));
            break;
        case 'C':
            printf("%d", D - (D*20/100));
            break;
        default :
            printf("Bukan Jenis Diskon");
        return 0;
        }
}
