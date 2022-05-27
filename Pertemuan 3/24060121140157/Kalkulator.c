/* 
Nama File:Kalkulator.c
Deskripsi: Membuat program kalkulator dengan bahasa c
Pembuat: 24060121140157 - Muhamad Aditya Yusuf Jatikusumo
Tgl Pembuatan:12 Maret 2022
*/

// Header file
#include <stdio.h>
#include <stdlib.h>

// Program Utama
int main(void){
    // Kamus lokal
    int iA,iB;
    char character;
    // Algoritma
    printf("\nMasukkan input (character): ");
    scanf("%c",&character);
    printf("Masukkan input (iA): ");
    scanf("%d",&iA);
    printf("\nMasukkan input (iB): ");
    scanf("%d",&iB);
    switch (character)
    {
    case 'a':
        /* code */
        printf("Hasilnya adalah: %d \n",iA + iB);
        break;
    case 'b':
        /* code */
        printf("Hasilnya adalah: %d\n", iA - iB);
        break;
    case 'c':
        /* code */
        printf("Hasilnya adalah: %d\n",iA * iB);
        break;
    case 'd':
        /* code */
        printf("hasilnya adalah: %f\n", iA / (float)iB);
        break;
    case 'e':
        /* code */
        printf("Hasilnya adalah: %d",iA / iB);
        break;
    case 'f':
        /* code */
        printf("Hasilnya adalah: %d",iA % iB);
        break;
    default:
        printf("Bukan pilihan yang benar!\n");
        break;
    }
    return 0;
}