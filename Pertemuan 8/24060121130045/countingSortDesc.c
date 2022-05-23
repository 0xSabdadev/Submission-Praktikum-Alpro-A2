/*Nama File 	: countingSortDesc.c*/
/*Deskripsi 	: Membuat program Counting Sort Descending*/
/*Pembuat   	: 240601211130045-Farhan Adka Reynaldi*/
/*Tgl Pembuatan	: 29-04-2022 - 05.00*/

#include <stdio.h> /*header file*/
#include <stdbool.h>

/*Program Utama*/
int main(void)
{ /*Kamus lokal*/
    int A[15],B[15],C[100],i,j,n,k;

  /*Algoritma*/
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

  /*Logic*/
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

  /*printf sesudah*/
  printf("\n\n===sesudah===\n");
  for(i=n;i>=1;i--){
    printf("%d",B[i]);
  }
  printf("\n");
  return 0;
}
