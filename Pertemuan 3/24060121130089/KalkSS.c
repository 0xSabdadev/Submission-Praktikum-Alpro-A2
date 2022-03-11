// Nama Program : KalkSS.c
/* Deskripsi    : memroses dua buah inputan dengan opsi operasi aritmatika terhadap dua bilangan tersebut dan menampilkan ke layar*/
// Pembuat      : Axelliano Rafael Situmeang - 24060121130089
// Tanggal      : 8 Maret 2022 -  19.20


#include <stdio.h>
#include <stdlib.h>
int main(){
    //Kamus
    int iA,iB;
    char inisial;

    //Algoritma
    printf("Masukkan bilangan pertama: ");
    scanf("%d",&iA);
    printf("Masukkan bilangan kedua : ");
    scanf("%d",&iB);
    printf("Masukkan inisialisasi a - f : ");
    scanf(" %c",&inisial);
    switch (inisial){
        case 'a' :
            printf("%d",iA + iB);
            break;
        case 'b' :
            printf("%d",iA - iB);
            break;
        case 'c':
            printf("%d",iA * iB);
            break;
        case 'd':
            printf("%f",(float)iA / (float)iB);
            break;
        case 'e':
            printf("%d",iA % iB);
            break;
        case 'f':
            printf("%d",iA / iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
            }
    return 0;
}
