/*Nama File 	: countingSortDesc.c*/
/*Deskripsi 	: membuat program counting sort descending*/
/*Pembuat   	: 24060121130049 - Kristian David Adi Prasetya*/
/*Tgl Pembuatan	: 28 April 2022 - 17.35*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[15], B[15], C[100],i,j,k,n;

    //algoritma
    k=0;
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

    // print nilai maks
    printf("\n");
    printf("nilai k = %d\n", k);
    printf("\n===sebelum===\n");

    //print array A
    for(i=1; i<=n; i++) {
        printf("%d ", A[i]);
    }

    // step 1, buat array C sebanyak k
    for(i = 0; i <= k; i++) {
        C[i] = 0;
    }

    // step 2, increment berdasar element arr A
    for(j=1; j <= n; j++) {
        C[A[j]] = C[A[j]]+1;
    }

    // step 3, tambah elemen dengan elemen sebelum
    for(i=1;i<=k;i++) {
        C[i] = C[i] + C[i-1];
    }

    for(j=n;j>=1;j--) {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    // print sesudah
    printf("\n\n===sesudah===\n");
    for(i=n;i>=1;i--) {
        printf("%d ",B[i]);
    }
    printf("\n");

    return 0;

}
