//Nama File 	: juruMasakTerbaik.c
//Deskripsi 	: Membuat program dan menemukan siapa juru masak terbaik
//Pembuat   	: Muhammad Dzaki Prasetyo
//Nim           : 24060121140127
//Tgl Pembuatan	: 29 April 2022 - 13.00

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5], B[5], C[5],i,j,k,n = 5, sum1;
    int D[5], E[5], F[5],x,y,z,m = 5, sum2;

    // algoritma
    // nilai juri pada juru masak pertama
    printf("Masukkan nilai juri pada juru masak pertama:\n");
    k=0;
    for(i=1; i<=n; i++){
        printf("Masukkan nilai juri ke-%d: ", i);
        scanf("%d", &A[i]);
        if(A[i]>k){
            k = A[i];
        }
    }

    // nilai juri pada juru masak kedua
    printf("Masukkan nilai juri pada juru masak kedua:\n");
    z = 0;
    for(x=1; x<=m; x++){
        printf("Masukkan nilai juri ke-%d: ", x);
        scanf("%d", &D[x]);
        if(D[x]>z) {
            z = D[x];
        }
    }

    //juru masak pertama
    for(i = 0; i <= k; i++){
        C[i] = 0;
    }
    for(j=1; j <= n; j++){
        C[A[j]] = C[A[j]]+1;
    }
    for(i=1;i<=k;i++){
        C[i] = C[i] + C[i-1];
    }
    for(j=n;j>=1;j--){
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    //sesudah
    printf("\nNilai juru masak pertama:\n");
    for(i=n;i>=1;i--){
        printf("%d ",B[i]);
    }

    // juru masak kedua
    for(x = 0; x <= z; x++){
        F[x] = 0;
    }
    for(y=1; y <= m; y++){
        F[D[y]] = F[D[y]]+1;
    }
    for(x=1;x<=z;x++){
        F[x] = F[x] + F[x-1];
    }
    for(y=m;y>=1;y--){
        E[F[D[y]]] = D[y];
        F[D[y]] = F[D[y]] - 1;
    }

    //sesudah
    printf("\nNilai juru masak kedua:\n");
    for(x=m;x>=1;x--) {
        printf("%d ",E[x]);
    }

    sum1 = B[n] + B[n-1] + B[n-2];
    sum2 = E[m] + E[m-1] + E[m-2];
    printf("\n");
    printf("\nJumlah nilai juri pada juru masak pertama adalah %d", sum1);
    printf("\nJumlah nilai juri pada juru masak kedua adalah %d", sum2);
    printf("\n");

    if(sum1>sum2){
        printf("\nkarena nilai juru masak pertama lebih besar, maka juru masak pertama menang\n");
    } else if(sum2>sum1){
        printf("\nKarena nilai juru masak kedua lebih besar, maka juru masak kedua menang\n");
    } else{
        printf("\nKarena nilai kedua juru masak sama, maka hasilnya seri\n");
    }
    return 0;
}
