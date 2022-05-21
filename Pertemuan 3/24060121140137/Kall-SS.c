/*
Nama file   : Kall-SS.C
Deskripsi   : Memproses 2 buah inputan dengan operasi aritmatika dan menampilkannya dilayar
Pembuat     : Angga Syaputra - 24060121140137
Tanggal     : 17 Maret 2022
*/

#include<stdlib.h>
#include<stdio.h>


int main(void){
    // Kamus
    int iA;
    int iB;
    char X;
    
    // Algoritma
    prinf("Masukan bilangan pertama : ");
    scanf("%d",&iA);
    prinf("Masukan bilangan kedua : ");
    scanf("%d",&iB);
    prinf("Masukan X : ");
    scanf(" %c",&X);

    switch(X){
        case 'a':
            printf("d", iA + iB);
            break;
        case 'b':
            printf("d", iA - iB);
            break;
        case 'c':
            printf("d", iA * iB);
            break;
        case 'd':
            printf("f", (float)iA / (float)iB);
            break;
        case 'e':
            printf("d", iA % iB);
            break;
        case 'f':
            printf("d", iA / iB);
            break;
        default :
            printf("Bukan pilihan menu yang benar");
    }
}
