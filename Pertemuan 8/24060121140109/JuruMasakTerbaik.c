//Nama File     : JuruMasakTerbaik.c
//Deskripsi     : Membuat program yang menyelesaikan masalah juru masak terbaik
//Pembuat       : Ajeng Nurhaliza Ar Rachman - 24060121140109
//Tgl Pembuatan : 29-04-2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5], B[5], C[5],i,j,k,n = 5, masak1;
    int D[5], E[5], F[5],a,b,c,v = 5, masak2;

    // Algoritma
    // Nilai juri untuk juru masak pertama
    printf("Nilai-nilai juri untuk juru masak pertama \n");
    // Memasukkan nilai array A
    k=0;
    for(i=1; i<=n; i++) {
        printf("masukkan nilai juri ke-%d: ", i);
        scanf("%d", &A[i]);
        if(A[i]>k) {
            k = A[i];
        }
    }

    printf("\n");

    // Nilai juri untuk juru masak kedua
    printf("Nilai-nilai juri pada juru masak kedua \n");
    // Memasukkan nilai array A
    c = 0;
    for(a=1; a<=v; a++) {
        printf("Masukkan nilai juri ke-%d: ", a);
        scanf("%d", &D[a]);
        if(D[a]>c) {
            c = D[a];
        }
    }

    // Juru Masak Pertama
    // Step 1, buat array C sebanyak k
    for(i = 0; i <= k; i++) {
        C[i] = 0;
    }

    // Step 2, increment berdasar element arr A
    for(j=1; j <= n; j++) {
        C[A[j]] = C[A[j]]+1;
    }

    // Step 3, tambah elemen dengan elemen sebelum
    for(i=1;i<=k;i++) {
        C[i] = C[i] + C[i-1];
    }

    for(j=n;j>=1;j--) {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    // Print sesudah
    printf("\nNilai juru masak pertama: ");
    for(i=n;i>=1;i--) {
        printf("%d ",B[i]);
    }

    // Juru Masak Kedua
    // Step 1, buat array C sebanyak k
    for(a = 0; a <= c; a++) {
        F[a] = 0;
    }

    // Step 2, increment berdasar element arr A
    for(b=1; b <= v; b++) {
        F[D[b]] = F[D[b]]+1;
    }

    // Step 3, tambah elemen dengan elemen sebelum
    for(a=1;a<=c;a++) {
        F[a] = F[a] + F[a-1];
    }

    for(b=v;b>=1;b--) {
        E[F[D[b]]] = D[b];
        F[D[b]] = F[D[b]] - 1;
    }

    // Print sesudah
    printf("\nNilai juru masak kedua: ");
    for(a=v;a>=1;a--) {
        printf("%d ",E[a]);
    }

    masak1 = B[n] + B[n-1] + B[n-2];
    masak2 = E[v] + E[v-1] + E[v-2];
    printf("\n");
    printf("Total nilai untuk juru masak pertama : %d\n", masak1);
    printf("Total nilai untuk juru masak kedua : %d\n", masak2);

    if (masak1>masak2){
        printf("Juru masak 1 menang!\n");
    }
    else if(masak1<masak2){
        printf("Juru masak 2 menang!\n");
    }
    else{
        printf("Pertandingan seri.");
    }

    /*
    if(masak1>masak2) {
        printf("\nkarena nilai juru masak pertama lebih besar, sehingga juru masak pertama menang.\n");
    } else if(masak2>masak1) {
        printf("\nkarena nilai juru masak kedua lebih besar, sehingga juru masak kedua menang.\n");
    } else {
        printf("\nkarena nilai kedua juru masak sama, sehingga hasil pertandingan seri.\n");
    }
    */

    return 0;

}
