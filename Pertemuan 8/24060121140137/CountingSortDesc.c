/*
Nama File       : CountingSortDesc.c
Deskripsi       : Membuat program counting sort descending
Pembuat         : Angga Syaputra - 24060121140137
Tgl Pembuatan   : 28 April 2022
*/

#include<stdlib.h>
#include<stdio.h>

int main(void){
    // Kamus Lokal
    int A[15], B[15], C[100],i,j,n,k;

    // Algoritma
    k = 0; // max = 0;
    printf("Masukkan size array : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){ //Masukkan nilai array A
        scanf("%d", &A[i]);
        if(A[i]>k){
            k = A[i];
        }
    }
    printf("\n");
    printf("Nilai k = %d\n", k); //print nilai max
    printf("\n==== nilai sebelum ====\n");

    for(i = 1; i <= n; i++){ //print array A
        printf("%d ", A[i]);
    }

    //logic
    for(int i=0;i<=k;i++){ //step 1, buat array c sebanyak K(max) isi 0 semua
        C[i]=0;
    }
    for(j=1;j<=n;j++){// step 2, incremen berdasar element arr A
        C[A[j]] = C[A[j]]+1;
    }
    for(i=1;i<=k;i++){// step 3, tambah element dengan element sebelum
        C[i] = C[i] + C[i-1];
    }
    for(j=n;j>=1;j--){
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] -1;
    }
    //printf sesudah
    printf("\n===sesudah===\n");
    for(i=n;i>=1;i--){
        printf("%d ",B[i]);
    }
    printf("\n");
    return 0;
}
