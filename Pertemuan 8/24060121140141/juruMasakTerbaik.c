/*Nama File 	: juruMasakTerbaik.c*/
/*Deskripsi 	: Mencari juara masak dengan total nilai terbesar*/
/*Pembuat   	: 24060121140141 - Muhammad Afiat Yulianto*/
/*Tgl Pembuatan	: 29 April 2022, 10.36*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    /*Kamus*/
    int a[] = {5,3,2,1,3};
    int b[] = {8,7,6,9,6};
    int sum1 = 0;
    int sum2 = 0;

    int length = sizeof(a)/sizeof(int);
    int length2= sizeof(b)/sizeof(int);

    /*Algoritma*/

    // Tampilan hasil nilai juri 1 - 5
    printf("Penilaian 5 orang juri kepada juru masak 1:");
    for (int i = 0; i < length; i++) {
        printf(" %d", a[i]);
    }

    printf("\nPenilaian 5 orang juri kepada juru masak 2:");
    for (int i = 0; i < length2; i++) {
        printf(" %d", b[i]);
    }

    // Mengurutkan nilai masak 1
    for(int i = 1; i < length ; i++){
        // Deklarasi elemen bantuan
        int selection = i;
        while(selection > 0){
            if(a[selection] > a[selection - 1]){  // > membuat descending < membuat ascending
                int temp = a[selection];
                a[selection] = a[selection - 1];
                a[selection - 1] = temp;
            }
            selection--;
        }
    }
    // Sebelum
    printf("\n\nNilai juru masak 1 setelah diurutkan:");
    for(int i = 0; i < length; i++){
        printf(" %d", a[i]);
    }

    // Mengurutkan nilai masak 2
    for(int i = 1; i < length2 ; i++){
        // Deklarasi elemen bantuan
        int selection = i;
        while(selection > 0){
            if(b[selection] > b[selection - 1]){  // > membuat descending < membuat ascending
                int temp = b[selection];
                b[selection] = b[selection - 1];
                b[selection - 1] = temp;
            }
            selection--;
        }
    }
    // Sesudah
    printf("\nNilai juru masak 2 setelah diurutkan:");
    for(int i = 0; i < length2 ; i++){
        printf(" %d", b[i]);
    }

    // Total Nilai masak 1 //
    for(int i = 0; i < (length -2); i++ ) {
        sum1 += a[i];
    }
    printf("\n\nTotal nilai masak 1 adalah: %d", sum1);

    // Total Nilai masak 2 //
    for(int i = 0; i < (length2 -2); i++ ) {
        sum2 += b[i];
    }
    printf("\nTotal nilai masak 2 adalah: %d", sum2);

    // Output hasil penilaian

    // Juru masak 1 = total
    // Juru masak 2 = sum

   printf("\n\nHasil pertandingan:");
    if(sum1 > sum2){
        printf(" Juru masak 1 menang!");
    }else if(sum1 < sum2){
        printf(" Juru masak 2 menang!");
    }else if(sum1 == sum2){
        printf("Pertandingan seri!");
    }
    return 0;
}


