/*Nama Program  : juruMasakTerbaik.c*/
/*Deskripsi     : Menentukan juru masak terbaik dengan total 3 nilai terbesar*/
/*Pembuat   	: 24060121130065 - Raihan Gilang Firdausy*/
/*Tgl Pembuatan	: 29 April 2022 - 10.00*/

#include <stdio.h>
#include <stdlib.h>

/*Program Utama*/
int main()
{
    /*Kamus*/
    int masak1[] = {5,3,2,1,3};
    int masak2[] = {8,7,6,9,6};
    int total = 0;
    int sum = 0;

    /*Tampilan hasil nilai juri 1-5*/
    printf("Penilaian 5 orang juri kepada juru masak 1:");
    for (int i = 0; i < ((sizeof(masak1)/sizeof(int))); i++){
        printf(" %d",masak1[i]);
    }

    printf("\nPenilaian 5 orang juri kepada juru masak 2:");
    for (int i = 0; i < ((sizeof(masak2)/sizeof(int))); i++){
        printf(" %d",masak2[i]);
    }

    /*Mengurutkan nilai masak 1*/
    for(int i = 1;i < ((sizeof(masak1)/sizeof(int)));i++){

        /*Deklarasi elemen bantuan*/
        int selection = i;
        while(selection > 0){
            if(masak1[selection] > masak1[selection-1]){  /*">" untuk descending, "<" untuk ascending*/
                int temp = masak1[selection];
                masak1[selection] = masak1[selection-1];
                masak1[selection-1] = temp;
            }
            selection--;
        }
    }
    /*Sesudah*/
    printf("\n\nNilai juru masak 1 setelah diurutkan:");
    for(int i = 0; i < ((sizeof(masak1)/sizeof(int)));i++){
        printf(" %d",masak1[i]);
    }

    /*Mengurutkan nilai masak 2*/
    for(int i = 1;i < ((sizeof(masak2)/sizeof(int)));i++){

        /*Deklasrasi elemen bantuan*/
        int selection = i;
        while(selection > 0){
            if(masak2[selection] > masak2[selection-1]){  /*">" untuk descending, "<" untuk ascending*/
                int temp = masak2[selection];
                masak2[selection] = masak2[selection-1];
                masak2[selection-1] = temp;
            }
            selection--;
        }
    }
    /*Sesudah*/
    printf("\nNilai juru masak 2 setelah diurutkan:");
    for(int i = 0; i < ((sizeof(masak2)/sizeof(int)));i++){
        printf(" %d",masak2[i]);
    }

    /*Total Nilai masak 1*/
    /* sum contents of array a */
    for ( int i = 0; i < ((sizeof(masak1)/sizeof(int))-2); i++ ){
        total += masak1[ i ];
    } /* end for */
    printf("\n\nTotal 3 nilai terbesar juru masak 1 adalah: %d",total);

    /*Total Nilai masak 2*/
    /* sum contents of array a */
    for ( int i = 0; i < ((sizeof(masak2)/sizeof(int))-2); i++ ){
        sum += masak2[ i ];
    } /* end for */
    printf("\nTotal 3 nilai terbesar juru masak 2 adalah: %d",sum);

    /*Output hasil penilaian*/

    //Juru masak 1 = total//
    //Juru masak 2 = sum//

   printf("\n\nHasil pertandingannya adalah :");
    if(total > sum){
        printf(" Juru masak 1 menang!");
    }else if(total < sum){
        printf(" Juru masak 2 menang!");
    }else if(total == sum){
        printf(" Pertandingan seri!");
    }
    return 0;
}
