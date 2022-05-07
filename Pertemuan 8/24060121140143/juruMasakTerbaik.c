/* Nama File 	: juruMasakTerbaik.c */
/* Deskripsi 	: membuat program yang menyelesaikan masalah juru masak terbaik */
/* Pembuat   	: 24060121140143 - Sana Saffanah */
/* Tgl Pembuatan: 29 April 2022 - 11.10 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5], B[5], C[5],i,j,k,n = 5, sum1;
    int D[5], E[5], F[5],x,y,z,v = 5, sum2;

    // algoritma
    // nilai juri pada juru masak pertama
    printf("masukkan nilai juri pada juru masak pertama:\n");
    // masukkan nilai array A
    k=0;
    for(i=1; i<=n; i++) {
        printf("masukkan nilai juri ke-%d: ", i);
        scanf("%d", &A[i]);
        if(A[i]>k) {
            k = A[i];
        }
    }

    printf("\n");

    // nilai juri pada juru masak kedua
    printf("masukkan nilai juri pada juru masak kedua:\n");
    // masukkan nilai array A
    z = 0;
    for(x=1; x<=v; x++) {
        printf("masukkan nilai juri ke-%d: ", x);
        scanf("%d", &D[x]);
        if(D[x]>z) {
            z = D[x];
        }
    }

    //juru masak pertama
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
    printf("\nnilai juru masak pertama:\n");
    for(i=n;i>=1;i--) {
        printf("%d ",B[i]);
    }

    // juru masak kedua
    // step 1, buat array C sebanyak k
    for(x = 0; x <= z; x++) {
        F[x] = 0;
    }

    // step 2, increment berdasar element arr A
    for(y=1; y <= v; y++) {
        F[D[y]] = F[D[y]]+1;
    }

    // step 3, tambah elemen dengan elemen sebelum
    for(x=1;x<=z;x++) {
        F[x] = F[x] + F[x-1];
    }

    for(y=v;y>=1;y--) {
        E[F[D[y]]] = D[y];
        F[D[y]] = F[D[y]] - 1;
    }

    // print sesudah
    printf("\nnilai juru masak kedua:\n");
    for(x=v;x>=1;x--) {
        printf("%d ",E[x]);
    }

    sum1 = B[n] + B[n-1] + B[n-2];
    sum2 = E[v] + E[v-1] + E[v-2];
    printf("\n");
    printf("\njumlah nilai juri pada juru masak pertama adalah %d", sum1);
    printf("\njumlah nilai juri pada juru masak kedua adalah %d", sum2);
    printf("\n");

    if(sum1>sum2) {
        printf("\nkarena nilai juru masak pertama lebih besar, maka juru masak pertama menang\n");
    } else if(sum2>sum1) {
        printf("\nkarena nilai juru masak kedua lebih besar, maka juru masak kedua menang\n");
    } else {
        printf("\nkarena nilai kedua juru masak sama, maka hasilnya seri\n");
    }

    return 0;

}
