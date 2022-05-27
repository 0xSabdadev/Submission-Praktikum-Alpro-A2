/*Nama File 	: KelBil.c*/
/*Deskripsi 	: Menentukan kelipatan faktor terkecil dari suatu array*/
/*Pembuat   	: 24060121140141 - Muhammad Afiat Yulianto*/
/*Tgl Pembuatan	: 1 April 2022, 15.52*/

#include <stdio.h> /*header file*/
#include <stdlib.h>
#include <math.h>

/*Program Utama*/
int main()
{
  /*Kamus*/
	int *ptr;
	int N;
	int a;
	int b;
	int c; 
	int kelipatan;

  /*Algoritma*/
    printf("Masukkan jumlah data: "); // input
    scanf("%d",&N);
    kelipatan = 1;
    if(N>0){
    	printf("\nUrutkan dari yang terkecil hingga terbesar!\n");
        ptr = (int *)malloc(N*sizeof(int)); // algoritma
        for(a = 1; a <= N; a++){
            printf("\nMasukkan bilangan ke - %d : ",a);
            scanf("%d", ptr + a);
        }
      for(b = 1; b <= N; b++){
          if(*(ptr + b) % kelipatan == 0){
              kelipatan = *(ptr + b);
          }
          else{
              kelipatan = kelipatan*(*(ptr + b));
          }
      }
      printf("\n------------------------------------------------\n"); // output
      printf("\nKelipatan terkecil : %d", kelipatan);
  }else{
      printf("\nMasukkan anda tidak benar");
  }
  return 0;
}
