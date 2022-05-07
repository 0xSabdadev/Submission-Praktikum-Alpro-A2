//Nama file : countingSortDesc.c
//Nama      : Maulana Pasya Zefanya
//NIM       : 24060121140175
//Lab       : A2
//Tanggal   : 29 April 2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int A[15],B[15],C[100],i,j,n,k;
    //Algoritma
        //Input
        k=0;//max=0;
        printf("Masukkan panjang array : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
        scanf("%d",&A[i]);
        if(A[i]>k){
            k=A[i];
            }
        }
          printf("\n");
          printf("nilai k=%d\n",k);
          for(i=1;i<=n;i++){
            printf("%d",A[i]);
          }

        //Algoritma
          for(i=0;i<=k;i++){//step 1, buat array c sebanyak k (max) isi 0 semua
              C[i]=0;
          }
          for(j=1;j<=n;j++){//step 2, incrememt berdasar elemen arr A
            C[A[j]]=C[A[j]]+1;
          }
          for(i=1;i<=k;i++){//step 3, menjumlahkan elemen dengan elemen sebelumnya
            C[i]=C[i]+C[i-1];
          }
          for(j=n; j>=1;j--){//step4, mengurutkan array A ke array B
            B[C[A[j]]]=A[j];
            C[A[j]]=C[A[j]]-1;
          }

        //Output
         printf("\n\n===sesudah===\n");
          for(i=n;i>=1;i--){
            printf("%d",B[i]);
          }
          printf("\n");
    return 0;
}
