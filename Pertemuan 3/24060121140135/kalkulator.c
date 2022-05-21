/*Nama File : kalkulator.c */
/*Deskripsi : Membuat program kalkulator atau perhitungan sederhana dengan memasukkan
              dua buah bilangan */
/*Pembuat   : Alizza Afra Afifah - 24060121140135 */
/*Tanggal   : 18 Maret 2022 14.15*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // kamus
    float iA, iB, perhitungan;
    char masukan;

    // algoritma
    printf("Program Kalkulator Sederhana \n");
    printf("Masukkan bilangan pertama : \n");
    scanf("%f", &iA);
    printf("Masukkan bilangan kedua : \n");
    scanf("%f", &iB);
    printf("Operasi Bilangan :\n");
    printf("+ : penjumlahan \n");
    printf("- : pengurangan \n");
    printf("x : perkalian \n");
    printf(": : pembagian \n");
    printf("d : pembagian integer (div) \n");
    printf("m : hasil pembagian (mod) \n");
    printf("Masukan operasi sesuai dengan character yang ditentukan : ");
    scanf("%s",&masukan);
    switch (masukan)
    {
        case '+':
            perhitungan = iA + iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        case '-':
            perhitungan = iA - iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        case 'x':
            perhitungan = iA * iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        case ':':
            perhitungan = iA / iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        case 'd':
            perhitungan = (int)iA/(int)iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        case 'm':
            perhitungan = (int)iA % (int)iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        default:
            printf("masukan character tidak sesuai \n");
            break;
    }

    return 0;
}
