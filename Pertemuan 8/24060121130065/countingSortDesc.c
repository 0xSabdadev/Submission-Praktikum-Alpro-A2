/*Nama File 	: countingSortDesc.c*/
/*Deskripsi 	: Mengurutkan data(Counting Sort) dari besar ke kecil(Descending)*/
/*Pembuat   	: 24060121130065 - Raihan Gilang Firdausy*/
/*Tgl Pembuatan	: 29 April 2022 - 10.00*/

#include <stdio.h>
#include <stdlib.h>

/*Program Utama*/
int main()
{
    /*Kamus*/
    int A[10];
    int B[10];
    int C[100];
    int i,j,k,n;

    /*Algoritma*/
    k = 0;
    printf("Masukkan size array: ");
    scanf("%d", &n);

    /*Masukkan nilai array A*/
    for(i=1; i<=n; i++){
        printf("Masukkan nilai array: ");
        scanf("%d", &A[i]);
        if(A[i]>k){
            k = A[i];
        }
    }

    /*Urutan awal*/
    printf("\n");
    printf("nilai k = %d\n", k);
    printf("\n==== Urutan Awal ====\n");

    /*array A*/
    for(i=1; i<=n; i++){
        printf("%d ", A[i]);
    }

    /*Array C sebanyak k*/
    for(i = 0; i <= k; i++){
        C[i] = 0;
    }

    /*Increment dari element array A*/
    for(j=1; j <= n; j++){
        C[A[j]] = C[A[j]]+1;
    }

    /*Menambah elemen dengan elemen sebelum*/
    for(i=1;i<=k;i++){
        C[i] = C[i] + C[i-1];
    }

    for(j=n;j>=1;j--){
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    /*Urutan setelah diurutkan*/
    printf("\n\n==== Setelah Diurutkan ====\n");
    for(i=n;i>=1;i--) {
        printf("%d ",B[i]);
    }
    printf("\n");

    return 0;
}
