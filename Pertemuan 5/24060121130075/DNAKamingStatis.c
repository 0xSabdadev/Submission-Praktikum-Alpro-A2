//Nama File :  DNAKambingStatis.c
//Nama Pembuat : Muhamad Ridwan Ash'shidqi
//Tanggal : 1 April 2022
//Deskripsi : Menentukan berapa banyak kambing yang bersaudara dan tidak bersaudara dari selisih kumpulan DNA Kambing

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main()
{ /*Kamus*/
    int N;
    int i;
    int j;
    int solo;
    int Squad;
    int DNA[100];

  /*Algoritma*/
    printf("Masukkan nilai n: ");
    scanf("%d", &N);
    solo = 0; S = 0;

    for(i=0; i<N; i++){ /* algoritma */
        scanf("%d", &DNA[i]);
    }
    for(i=0; i<N-1; i++){
        for(j=i+1; j<N; j++){
            if(DNA[j] - DNA[i] < 3){
                Squad++;
            }
            else{
                solo++;
            }

        }
    }
    printf("Kambing bersaudara = %d \n", Squad);
    printf("Kambing tidak bersaudara = %d \n", solo);

  return 0;
}




