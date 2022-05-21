/*Nama File 	: program juru masak.c_*/
/*Nama Pembuat  : Georgy Banny Rizky Wasiat
/*NIM           : 24060121140103
/*Deskripsi 	: Membuat program lomba juru masak dengan mengurutkan angka dari terbesar hingga terkecil lalu menjumlahkan 3 nilai terbesar*/


#include <stdio.h> /*header file*/
#include <stdlib.h>



int main(void)
{
    // Kamus Lokal
    int a[] = {5,3,2,1,3};
    int b[] = {8,7,6,9,6};
    int sum1 = 0;
    int sum2 = 0;

    int length = sizeof(a)/sizeof(int);
    int length2= sizeof(b)/sizeof(int);

    // Tampilan hasil nilai juri 1-5
    printf("Penilaian 5 orang juri kepada juru masak 1:");
    for (int i = 0; i < length; i++) {
        printf(" %d",a[i]);
    }

    printf("\nPenilaian 5 orang juri kepada juru masak 2:");
    for (int i = 0; i < length2; i++) {
        printf(" %d",b[i]);
    }

    // Mengurutkan nilai masak 1
    for(int i = 1;i < length ;i++){
        // Deklasrasi elemen bantuan
        int selection = i;
        while(selection > 0){
            if(a[selection] > a[selection-1]){  // > buat descending < buat ascending
                int temp = a[selection];
                a[selection] = a[selection-1];
                a[selection-1] = temp;
            }
            selection--;
        }
    }
    // Sesudah
    printf("\n\nNilai juru masak 1 setelah diurutkan:");
    for(int i = 0; i < length;i++){
        printf(" %d",a[i]);
    }

    // Mengurutkan nilai masak 2
    for(int i = 1;i < length2 ;i++){
        // Deklasrasi elemen bantuan
        int selection = i;
        while(selection > 0){
            if(b[selection] > b[selection-1]){  // > buat descending < buat ascending
                int temp = b[selection];
                b[selection] = b[selection-1];
                b[selection-1] = temp;
            }
            selection--;
        }
    }
    // Sesudah
    printf("\nNilai juru masak 2 setelah diurutkan:");
    for(int i = 0; i < length2 ;i++){
        printf(" %d",b[i]);
    }

// Total Nilai masak 1 //
    for ( int i = 0; i < (length -2); i++ ) {
        sum1 += a[ i ];
    }
    printf("\n\nTotal nilai masak 1 adalah: %d",sum1);

// Total Nilai masak 2 //
    for ( int i = 0; i < (length2 -2); i++ ) {
        sum2 += b[ i ];
    }
    printf("\nTotal nilai masak 2 adalah: %d",sum2);

    // Output hasil penilaian

    /*
    Juru masak 1 = total
    Juru masak 2 = sum
    */

   printf("\n\nHasil pertandingannya adalah :");
    if(sum1 > sum2){
        printf("Juru masak 1 menang!");
    }else if(sum1 < sum2){
        printf("Juru masak 2 menang!");
    }else if(sum1 == sum2){
        printf("Pertandingan seri!");
    }
    return 0;
}


