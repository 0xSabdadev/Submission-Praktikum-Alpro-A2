/*Nama File 	: JuruMasakTerbaik.c
  Deskripsi 	: membuat program yang menyelesaikan masalah juru masak terbaik
  Pembuat   	: 24060121140171 - Adam Faris Al Abiyyu
  Tgl Pembuatan	: 29 April 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5], B[5], C[5],i,j,k,n = 5, sum1;
    int D[5], E[5], F[5],a,b,c,v = 5, sum2;

    // algoritma
    // nilai juri untuk juru masak ke pertama
    printf("masukkan nilai juri untuk juru masak pertama:\n");
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

    // nilai juri untuk juru masak kedua
    printf("masukkan nilai juri pada juru masak kedua:\n");
    // masukkan nilai array A
    c = 0;
    for(a=1; a<=v; a++) {
        printf("masukkan nilai juri ke-%d: ", a);
        scanf("%d", &D[a]);
        if(D[a]>c) {
            c = D[a];
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
    for(a = 0; a <= c; a++) {
        F[a] = 0;
    }

    // step 2, increment berdasar element arr A
    for(b=1; b <= v; b++) {
        F[D[b]] = F[D[b]]+1;
    }

    // step 3, tambah elemen dengan elemen sebelum
    for(a=1;a<=c;a++) {
        F[a] = F[a] + F[a-1];
    }

    for(b=v;b>=1;b--) {
        E[F[D[b]]] = D[b];
        F[D[b]] = F[D[b]] - 1;
    }

    // print sesudah
    printf("\nnilai juru masak kedua:\n");
    for(a=v;a>=1;a--) {
        printf("%d ",E[a]);
    }

    sum1 = B[n] + B[n-1] + B[n-2];
    sum2 = E[v] + E[v-1] + E[v-2];
    printf("\n");
    printf("total nilai untuk juru masak pertama : %d\n", sum1);
    printf("total nilai untuk juru masak kedua : %d\n", sum2);

    if (sum1>sum2){
        printf("juru masak 1 menang\n");
    }
    else if(sum1<sum2){
        printf("juru masak 2 menang\n");
    }
    else{
        printf("pertandingan seri");
    }

    /*if(sum1>sum2) {
        printf("\nkarena nilai juru masak pertama lebih besar, maka juru masak pertama menang\n");
    } else if(sum2>sum1) {
        printf("\nkarena nilai juru masak kedua lebih besar, maka juru masak kedua menang\n");
    } else {
        printf("\nkarena nilai kedua juru masak sama, maka hasilnya seri\n");
    }*/

    return 0;

}
