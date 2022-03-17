/*Nama File    : kalkulator.c */
/*Deskripsi    : Membuat program kalkulator atau perhitungan sederhana dengan memasukkan
                 dua buah bilangan */
/*Pembuat      : Sana Saffanah - 24060121140143 */
/*Tgl Pembuatan: 13.22, 17-03-2022 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Kamus
    float iA, iB, perhitungan;
    char masukan;

    // Algoritma
    printf("Program Kalkulator Sederhana \n");
    printf("Masukkan bilangan pertama : \n");
    scanf("%f", &iA);
    printf("Masukkan bilangan kedua : \n");
    scanf("%f", &iB);
    printf("Operasi Bilangan :\n");
    printf("a : penjumlahan \n");
    printf("b : pengurangan \n");
    printf("c : perkalian \n");
    printf("d : pembagian \n");
    printf("e : pembagian integer (div) \n");
    printf("f : hasil pembagian (mod) \n");
    printf("Masukan operasi sesuai dengan character yang ditentukan : ");
    scanf("%s",&masukan);
    switch (masukan)
    {
        case 'a':
            perhitungan = iA + iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        case 'b':
            perhitungan = iA - iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        case 'c':
            perhitungan = iA * iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        case 'd':
            perhitungan = iA / iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        case 'e':
            perhitungan = (int)iA/(int)iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        case 'f':
            perhitungan = (int)iA % (int)iB;
            printf("hasil dari operasi berikut adalah : %d \n", (int)perhitungan);
            break;
        default:
            printf("masukan character tidak sesuai \n");
            break;
    }

    return 0;
}
