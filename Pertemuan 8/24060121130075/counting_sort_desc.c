// nama file = counting_sort_desc.c
// Nama = Muhamad Ridwan Ash'shidqi
// NIM = 24060121130075
// LAB = A2

#include <stdio.h>
#include <stdlib.h>

int main()
{ /*Kamus lokal*/
    int A[15];
    int B[15];
    int C[100];
    int i,j,n,k;

  /*Algoritma*/
  k=0;//max=0;
  printf("Masukkan panjang array : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    printf("masukkan anggota ke %i = ",i);
    scanf("%d",&A[i]);
    if(A[i]>k){
        k=A[i];
    }
  }
  printf("\n");
  printf("nilai k = %d\n",k);
  printf("===sebelum===\n");
  for(i=1;i<=n;i++){
    printf("%d ",A[i]);
  }

  /*Logic*/
  for(i=0;i<=k;i++){//langkah 1, buat array c sebanyak k (max) isi 0 semua
      C[i]=0;
  }
  for(j=1;j<=n;j++){//langkah 2, incrememt berdasar elemen arr A
    C[A[j]]=C[A[j]]+1;
  }
  for(i=1;i<=k;i++){//lankgah 3, menjumlahkan elemen dengan elemen sebelumnya
    C[i]=C[i]+C[i-1];
  }
  for(j=n; j>=1;j--){//langkah 4, mengurutkan array A ke array B
    B[C[A[j]]]=A[j];
    C[A[j]]=C[A[j]]-1;
  }

  /*printf sesudah*/
  printf("\n\n===sesudah===\n");
  for(i=n;i>=1;i--){
    printf("%d ",B[i]);
  }
  printf("\n");
  return 0;
}
