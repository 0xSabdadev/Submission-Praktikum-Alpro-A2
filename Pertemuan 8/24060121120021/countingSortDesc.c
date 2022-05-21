/*Nama File 	: countingSortDesc.c*/
/*Deskripsi 	: Pengurutan atau sorting data sebuah tabel dengan cara counting secara descending atau dari besar ke kecil*/
/*Pembuat   	: 24060121120021-Resma Adi Nugroho*/
/*Tgl Pembuatan	: 29 April 2022 09.42 WIB*/

/*header file*/
#include<stdio.h>
#include<stdlib.h>

/*Program Utama*/
int main(void){
    /* Kamus */
    int A[15],B[15],C[100],i,j,n,k;
    k=0; // nilai maksimum tabel A

    /* Algoritma */
    printf("=======COUNTING SORT DESCENDING=======\n");
    printf("Masukan size array : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Masukan data ke-%d : ",i);
        scanf("%d",&A[i]);
        if(A[i]>k){
            k=A[i]; // mencari nilai maksimum
        }
    }    
    printf("Nilai maksimum array = %d\n",k);
    printf("---------Sebelum---------\n");
    for(i=1;i<=n;i++){ // print nilai array sebelum diurutkan
        printf("%d ",A[i]);
    }
    // membuat array C dengan panjang k kemudian diinisialisasikan 0
    for(i=0;i<=k;i++){
        C[i] = 0;
    }

    // step 1 melakukan increment pada array C
    for(j=1;j<=n;j++){ 
        C[A[j]]++;
    }

    // step 2 menambahkan elemen berdasarkan elemen sebelumnya
    for(i=k;i>=1;i--){
        C[i-1] = C[i] + C[i-1];
    }

    // step 3 memasukan data ke array B dengan beberapa
    for(j=1;j<=n;j++){
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }    

    /* Output */
    printf("\n---------Sesudah---------\n");
    for(i=1;i<=n;i++){ // print nilai array setelah diurutkan
        printf("%d ",B[i]);
    }
    printf("\n======================================\n");
    return 0;
}