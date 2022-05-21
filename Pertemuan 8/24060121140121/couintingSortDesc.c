// Nama File 		: countingSortDesc.c\
// Nama Pembuat   	: Fairuz Fachrizal Adyatma / 24060121140121
// Deskripsi 		: membuat program counting sort descending
// Tgl Pembuatan	: 28 April 2022 - 22.30

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[15], B[15], C[100],i,j,k,n;

    //algoritma
    k=0;
    printf("MASUKKAN SIZE ARRAY: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        printf("MASUKKAN NILAI ARRAY: ");
        scanf("%d", &A[i]);
        if(A[i]>k) {
            k = A[i];
        }
    }

    printf("\nNILAI K = %d\n", k);
    printf("SEBELUM = ");

    for(i=1; i<=n; i++) {
        printf("%d ", A[i]);
    }

    for(i = 0; i <= k; i++) {
        C[i] = 0;
    }

    for(j=1; j <= n; j++) {
        C[A[j]] = C[A[j]]+1;
    }

    for(i=1;i<=k;i++) {
        C[i] = C[i] + C[i-1];
    }

    for(j=n;j>=1;j--) {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    printf("\nSESUDAH = ");
    for(i=n;i>=1;i--) {
        printf("%d ",B[i]);
    }
    printf("\n");

    return 0;

}
