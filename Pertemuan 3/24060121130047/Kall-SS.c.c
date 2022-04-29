/*
Nama file   : Kall-SS.CPP
Deskripsi   : Memproses 2 buah inputan dengan operasi aritmatika dan menampilkannya dilayar
Pembuat     : Benjamin Franklin Saloom Sipayung - 24060121130047
Tanggal     : 17 Maret 2022
*/

#include<stdlib.h>
#include<stdio.h>


int main(void){
    // Kamus
    int iA, iB;
    char X;
    // Algoritma
    printf("Masukkan Bilangan Pertama: ");
    scanf("%d",&iA);
    printf("Masukkan Bilangan Kedua : ");
    scanf("%d",&iB);
    printf("\n");
    printf("List :\n");
    printf("a = +\n");
    printf("b = -\n");
    printf("c = *\n");
    printf("d = /\n");
    printf("e = divisi\n");
    printf("f = modulus\n");
    printf("\n");
    printf("Masukkan a-f :");
    scanf(" %c",&X);
    switch (X){
            case 'a':
                printf("%d", iA + iB);
                    break;
            case 'b':
                printf("%d", iA - iB);
                    break;
            case 'c':
                printf("%d", iA * iB);
                    break;
            case 'd':
                printf("%f", (float)iA / (float) iB);
                    break;
            case 'e':
                printf("%d", iA % iB);
                    break;
            case 'f':
                printf("%d", iA / iB);
                    break;
            default :
                printf("Bukan pilihan menu yang benar");
            return 0;
        }
    }

