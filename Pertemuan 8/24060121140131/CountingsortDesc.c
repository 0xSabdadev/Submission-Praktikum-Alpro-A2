/*Nama File     : countingSortDesc.c
  Deskripsi     : membuat program counting sort descending
  Pembuat       : 24060121140131-Muhammad Raihan Ridho
  Tgl Pembuatan    : 29 April 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    int B[10];
    int C[100];
    int i,j,k,n;

    //algoritma
    k = 0;
    printf("masukkan size array: ");
    scanf("%d", &n);

    // masukkan nilai array A
    for(i=1; i<=n; i++) {
        printf("masukkan nilai array: ");
        scanf("%d", &A[i]);
        if(A[i]>k) {
            k = A[i];
        }
    }

    // nilai maks
    printf("\n");
    printf("nilai k = %d\n", k);
    printf("\n==== nilai sebelum ====\n");

    // array A
    for(i=1; i<=n; i++) {
        printf("%d ", A[i]);
    }

    // step 1, array C sebanyak k
    for(i = 0; i <= k; i++) {
        C[i] = 0;
    }

    // step 2, increment dari element array A
    for(j=1; j <= n; j++) {
        C[A[j]] = C[A[j]]+1;
    }

    // step 3, menambah elemen dengan elemen sebelum
    for(i=1;i<=k;i++) {
        C[i] = C[i] + C[i-1];
    }

    for(j=n;j>=1;j--) {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    // print sesudah
    printf("\n\n==== nilai sesudah ====\n");
    for(i=n;i>=1;i--) {
        printf("%d ",B[i]);
    }
    printf("\n");

    return 0;

}

