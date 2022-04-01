// Nama file     : KalkSS
// Deskripsi     : Menghitung dan menampilkan sebuah operasi aritmatika
//                 dengan pilihan operasi dua bilangan
// Pembuat       : Muhammad Dzaki Prasetyo / 24060121140127
// Tgl Pembuatan : 15 Maret 2022, jam 10.30 PM
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int iA,iB;
    char inisial;

    //Algoritma
    printf("Masukkan program a - f : ");
    scanf("%c",&inisial);
    printf("Masukkan bilangan pertama: ");
    scanf("%d",&iA);
    printf("Masukkan bilangan kedua : ");
    scanf("%d",&iB);
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
            printf("Bukan pilihan program yang benar");
            }
    return 0;
}
