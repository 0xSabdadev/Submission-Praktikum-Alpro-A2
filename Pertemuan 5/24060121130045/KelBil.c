/*Nama File 	: KelBil.c*/
/*Deskripsi 	: mennentukan kelipatan faktor terkecil dari suatu array*/
/*Pembuat   	: 24060121130045-Farhan Adka Reynaldi*/
/*Tgl Pembuatan	: 31-03-2022*/

#include <stdio.h>/*header file*/
#include <stdlib.h>
#include <math.h>

/*Program Utama*/
int main()
{ /*Kamus*/
	int i,N,j,k,kelipatan; 

    /*Algoritma*/
    printf("Masukkan banyaknya data: ");
    scanf("%d",&N);
    kelipatan = 1;
    if(N<=0){/*cek jumlah bilangan kurang dari 1*/
        printf("Jumlah bilangan harus positif");
    }
	else{
    	int Bilangan[N];
        for(i=1;i<=N;i++){
            printf("Masukkan Bilangan ke %d  (urut dari terkecil ke terbesar) ",i);
            scanf("%d",&Bilangan[i]);
        }
        for(j=1;j<=N;j++){
            if(Bilangan[j]%kelipatan==0){
                kelipatan = Bilangan[j];
            }
            else{
                kelipatan = kelipatan*Bilangan[j];
            }
        }
        printf("Kelipatan terkecilnya adalah %d",kelipatan);
    }
    return 0;
}
