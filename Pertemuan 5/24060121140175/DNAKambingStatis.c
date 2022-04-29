/*Nama File 	: DNAKambingStatis.c*/
/*Deskripsi 	: Menghitung jumlah kambing yang bersaudara dan yang tidak dengan array statis*/
/*Pembuat   	: Maulana Pasya Zefanya*/
/*Tgl Pembuatan	: 1 April 2022*/

#include <stdio.h>
#include <stdlib.h>

/*Program Utama*/
int main()
{ /*Kamus*/
    int n; /*nilai yang dimasukkan*/
    int i,j; /*counter*/
    int TB; /*tidak bersaudara*/
    int S; /*bersaudara*/
    int DNA[100]; /*array of integer*/

  /*Algoritma*/
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    TB = 0; S = 0;

    for(i=0; i<n; i++){ /* algoritma */
        scanf("%d", &DNA[i]);
    }
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(DNA[j] - DNA[i] < 3){
                S++;
            }
            else{
                TB++;
            }

        }
    }
    printf("Kambing yang bersaudara ada %d \n", S);
    printf("Kambing yang tidak bersaudara ada %d \n", TB);

  return 0;
}




