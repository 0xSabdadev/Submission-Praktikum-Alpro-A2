// Nama File    : kalkSS.c
// Nama Pembuat : Fahriant Ekrie
// NIM          : 24060121130071
// Tanggal      : 06 Maret 2022
// Deskripsi    : Melakukan operasi aritmatika sederhana berdasarkan input character pada 2 integer
//                masukkan dan menampilkannya di layar
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

    // Kamus Lokal
    int iA,iB;
    char o;

    // Input Variabel
    printf("Masukkan Bilangan 1 : ");
    scanf("%d",&iA);
    printf("Masukkan Bilangan 2 : ");
    scanf("%d",&iB);
    printf("Masukkan Operan: ");
    scanf(" %c",&o);

    // Algoritma
    if( (o == 'a') || (o == 'b') || (o == 'c') || (o == 'd') || (o == 'e') || (o == 'f') ){
        if(o == 'a'){
            printf("&d",iA + iB);
        }
        else if(o == 'b'){
            printf("%d",iA - iB);
        }
        else if(o == 'c'){
            printf("%d",iA * iB);
        }
        else if(o == 'd'){
            printf("%f",(float)iA / (float)iB);
        }
        else if(o == 'e'){
            printf("%d", iA / iB);
        }
        else if(o == 'f'){
            printf("%d",iA % iB);
        }
    }
    else{
        printf("Masukkan operan tidak tepat");
    }

    return 0;
}
