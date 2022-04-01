/*Nama File 	: DNAKambingDinamis.c*/
/*Deskripsi 	: Menghitung jumlah kambing yang bersaudara dan yang tidak bersaudara dengan array dinamis*/
/*Pembuat   	: 24060121140141 - Muhammad Afiat Yulianto*/
/*Tgl Pembuatan	: 1 April 2022, 10.23*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main()
{ 
  /*Kamus*/
  int N; // nilai yang dimasukkan
  int a,b; // counter
  int S = 0; // bersaudara
  int TS = 0; // tidak bersaudara
  int *DNA;

  /*Algoritma*/
  printf("Masukkan nilai DNA : "); // input
  scanf("%d", &N);
  DNA = (int *)malloc(a*sizeof(int));
  
  printf("\n");
  
  if(N > 0){
      for(b = 0; b < N; b++){ // algoritma
          printf("DNA ke - %d : ", b + 1);
          scanf("%d", DNA + b);
      }
  }
      for(b = 0; b < N - 1; b++){
          for(a = b + 1; a < N; a++){
              if(abs(*(DNA + b) - (*(DNA + a))) < 3){
                  S++;
              }
              else{
                  TS++;
              }

          }
      
      }
  printf("\n");
  printf("Kambing bersaudara : %d \n", S); // output
  printf("Kambing tidak bersaudara : %d", TS);

  return 0;
}
