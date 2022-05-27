/*Nama File 	: countingSortDesc.c*/
/*Deskripsi 	: Mengurutkan nilai X menggunakan counting sort*/
/*Pembuat   	: 24060121140141 - Muhammad Afiat Yulianto*/
/*Tgl Pembuatan	: 29 April 2022, 09.16*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*Kamus*/
  int A[10];
  int B[10];
  int C[100];
  int i;
  int j;
  int n;
  int k;

  /*Algoritma*/
  k=0;  //max=0;
  printf("Masukkan panjang array : ");
  scanf("%d",&n);

  for(i = 1; i <=n ;i++){
    printf("Masukkan nilai ke - %i = ", i);
    scanf("%d",&A[i]);
    if(A[i] > k){
        k = A[i];
    }
  }

  printf("\n");
  printf("nilai k = %d\n", k);
  printf("===Sebelum===\n");
  for(i = 1; i <= n; i++){
    printf("%d ", A[i]);
  }

  /*Logic*/
  for(i = 0; i <= k; i++){ //langkah 1, buat array c sebanyak k (max) isi 0 semua
      C[i] = 0;
  }
  for(j = 1; j <= n; j++){ //langkah 2, incrememt berdasar elemen arr A
    C[A[j]] = C[A[j]] + 1;
  }
  for(i = 1; i <= k; i++){ //lankgah 3, menjumlahkan elemen dengan elemen sebelumnya
    C[i] = C[i] + C[i - 1];
  }
  for(j = n; j >= 1; j--){ //langkah 4, mengurutkan array A ke array B
    B[C[A[j]]] = A[j];
    C[A[j]] = C[A[j]] - 1;
  }

  /*printf sesudah*/
  printf("\n\n===Sesudah===\n");
  for(i = n; i >= 1; i--){
    printf("%d ",B[i]);
  }
  printf("\n");
  return 0;
}
