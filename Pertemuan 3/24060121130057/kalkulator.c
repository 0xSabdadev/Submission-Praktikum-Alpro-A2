/*Nama File: kalkulator.c
Deskripsi: program menjalankan kalkulator sederhana: mengolah 2 integer dengan jenis operator yang sudah dipilih
Pembuat: Safril Isnaini (24060121130057)
Tanggal Pembuatan: 18 Maret 2022*/

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    /*Kamus*/
    int iA, iB; /*Masukan 2 integer*/
    float resultf; /* hasil jika berupa real */
    int result; /*hasil jika berupa integer */
    char operator; /*masukan jenis operator*/
    
    /*Algoritma*/
    printf("Masukkan jenis operator: ");
    scanf("%c", &operator);
    printf("Masukkan integer pertama: ");
    scanf("%d", &iA);
    printf("Masukkan integer kedua: ");
    scanf("%d", &iB);
    
    switch (tolower(operator))
    {
    case 'a':
        result = iA + iB;
        printf("%d", result);
        break;
    case 'b':
        result = iA - iB;
        printf("%d", result);
        break;
    case 'c':
        result = iA * iB;
        printf("%d", result);
        break;
    case 'd':
        resultf = (float) iA / (float) iB;
        printf("%f", resultf);
        break;
    case 'e':
        result = iA / iB;
        printf("%d", result);
        break;
    case 'f':
        result = iA % iB;
        printf("%d", result);
        break;
    default:
        printf("Masukan bukan operator yang tepat");
        break;
    }
    
    return 0;
}
