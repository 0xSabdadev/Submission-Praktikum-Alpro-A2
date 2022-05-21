/*Nama File 	: CountingsortDesc.c*/
/*Deskripsi 	: mengurutkan array masukan dari besar ke kecil*/
/*Pembuat   	: 24060121130043-Zahid Muhammad Mahfudz*/
/*Tgl Pembuatan	: 28-04-2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int A[15], B[15], c[100], i,j,n,k;

    //algoritma
    k=0; // max = 0
    printf("Masukan size array : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &A[i]);
        if(A[i]>k){
            k=A[i];
        }
    }
    printf("\n");
    printf("nilai k = %d\n", k);
    for(i=1; i<=n; i++){
        printf("%d", A[i]);
    }
    //logic
    for(int i=0; i<=k; i++){ //step 1, buat array c sebanyak k(max) dengan isi nol semua
        c[i]=0;
    }
    for(j=1;j<=n;j++){ // step 2, increment berdasar elemen array A
        c[A[j]] = c[A[j]]+1;
    }
    for(i=1;i<=k;i++){ //step 3, tambah elemen dengan elemen sebelumnya
        c[i] = c[i] + c[i-1];
    }
    for(j=n; j>=1; j--){
        B[c[A[j]]] = A[j];
        c[A[j]] = c[A[j]] -1;
    }
    //print sesudah
    printf("\n\n===sesudah===\n");
    printf("\n\n===descending===\n");
    for(i=n;i>=1;i--){
        printf("%d", B[i]);
    }
    printf("\n");
    printf("\n\n===ascending===\n");
    for(i=1;i<=n;i++){
        printf("%d", B[i]);
    }
    printf("\n");
    return 0;
}
