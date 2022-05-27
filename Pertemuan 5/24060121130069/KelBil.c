/* Nama             : Ririn Indah Cahyani */
/* NIM              : 24060121130069*/
/* Tgl Pembuatan    : 31 Maret 2022*/
/* Nama File        : KelBil.c */
/* Deskripsi        : menghitung dan menampilkan di layar berupa sub program pangkat */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Kamus
    int N, i, j, temp, hasil;

    //Algiritma
    printf("Masukan nilai N : "); scanf("%d", &N);

    int A[N];

    //input array
    for (i=0; i<N; i++){
        printf("Masukan elemen array ke [%d] : ", i);
        scanf("%d", &A[i]);
    }


    //pengururan array
    for(j=0; j<N-1; j++){
        for(i=N-1; i>=j+1; i--){
            if (A[i] < A[i-1]){
                temp = A[i];
                A[i] = A[i-1];
                A[i-1] = temp;
            }
        }
    }


    //KPK
    hasil = 0;

    for (i=0; i<N; i++){
        if (hasil % A[i] == 0){
            hasil = A[i];
        } else {
            hasil = hasil*A[i];
        }
    }

    if (A[0]==2 && hasil%2==0){
        printf("%d", hasil/2);
    } else{
        printf("%d", hasil);
    }

    return 0;
}
