// Nama File 		: juruMasakTerbaik.c
// Nama Pembuat   	: Fairuz Fachrizal Adyatma / 24060121140121
// Deskripsi 		: membuat program juru masak terbaik
// Tgl Pembuatan	: 28 April 2022 - 22.55

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5], B[5], C[5],i,j,k,n = 5, sum1;
    int D[5], E[5], F[5],x,y,z,v = 5, sum2;

    printf("MASUKKAN NILAI UNTUK JURU MASAK PERTAMA (1- 10)\n");

    k=0;
    for(i=1; i<=n; i++) {
        printf("MASUKKAN NILAI JURI KE-%d: ", i);
        scanf("%d", &A[i]);
        if(A[i]>k) {
            k = A[i];
        }
    }

    printf("\n");

    printf("MASUKKAN NILAI UNTUK JURU MASAK KEDUA (1 - 10)\n");

    z = 0;
    for(x=1; x<=v; x++) {
        printf("MASUKKAN NILAI JURI KE-%d: ", x);
        scanf("%d", &D[x]);
        if(D[x]>z) {
            z = D[x];
        }
    }

    // JURU MASAK PERTAMA
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

    printf("\nNILAI JURU MASAK PERTAMA:\n");
    for(i=n;i>=1;i--) {
        printf("%d ",B[i]);
    }


    // JURU MASAK KEDUA
    for(x = 0; x <= z; x++) {
        F[x] = 0;
    }

    for(y=1; y <= v; y++) {
        F[D[y]] = F[D[y]]+1;
    }

    for(x=1;x<=z;x++) {
        F[x] = F[x] + F[x-1];
    }

    for(y=v;y>=1;y--) {
        E[F[D[y]]] = D[y];
        F[D[y]] = F[D[y]] - 1;
    }

    printf("\nNILAI JURU MASAK KEDUA :\n");
    for(x=v;x>=1;x--) {
        printf("%d ",E[x]);
    }

    sum1 = B[n] + B[n-1] + B[n-2];
    sum2 = E[v] + E[v-1] + E[v-2];
    printf("\n");
    printf("\nJUMLAH NILAI JURI UNTUK JURU MASAK PERTAMA %d", sum1);
    printf("\nJUMLAH NILAI JURI UNTUK JURU MASAK KEDUA %d", sum2);
    printf("\n");

    if(sum1>sum2) {
        printf("\nJURU MASAK PERTAMA MENANG\n");
    } else if(sum2>sum1) {
        printf("\nJURU MASAK KEDUA MENANG\n");
    } else {
        printf("\nHASIL SERI\n");
    }

    return 0;

}
