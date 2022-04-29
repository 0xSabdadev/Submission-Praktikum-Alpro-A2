//Nama file         : kalkulator.c
//Deskripsi         : Soal Alpro nomor 12
//Pembuat           : 24060121140175 - Maulana Pasya Zefanya
//Tgl Pembuatan     : 13 Maret 2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    float a,b,result;
    int resultdiv;
    char o;
    //Algoritma
    printf("Masukkan input bilangan pertama: ");
    scanf("%f",&a);

    printf("Masukkan input bilangan kedua: ");
    scanf("%f",&b);

    printf("Masukkan opsi operasi: ");
    scanf("%s",&o);

    switch(o){
    case 'a' :
        result = a+b;
        printf("%.1f",result);
        break;
    case 'b' :
        result = a-b;
        printf("%.1f",result);
        break;
    case 'c' :
        result = a*b;
        printf("%.1f",result);
        break;
    case 'd' :
        result = a/b;
        printf("%.1f",result);
    case 'e' :
        resultdiv = a/b;
        printf("%d",resultdiv);
        break;
    case 'f' :
        result = fmod(a,b);
        printf("%.1f",result);
        break;

    default :
        printf("Bukan pilihan menu yang tepat.");
    }
    return 0;
}
