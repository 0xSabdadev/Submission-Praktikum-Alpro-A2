/* Nama file	: KelBil.c */
/* Deskripsi    : Menentukan kelipatan faktor terkecil dari suatu array */
/* Pembuat		: 24060121130065 - Raihan Gilang Firdausy */
/* Tanggal      : 1 April 2022, 15.30 WIB */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Program Utama */

int main(){
	
	/* Kamus */
    int *ptr, i, N,j,k,kelipatan;

    /* Algoritma */
    printf("Masukkan banyaknya data: ");
    scanf("%d",&N);
    kelipatan = 1;
    
    if(N>0){
        ptr = (int *)malloc(N*sizeof(int));
        for(i=1;i<=N;i++){
            printf("Urut terkecil ke terbesar, masukkan bilangan ke %d :",i);
            scanf("%d",ptr+i);
        }
        for(j=1;j<=N;j++){
            if(*(ptr+j)%kelipatan==0){
                kelipatan = *(ptr+j);
            }
            else{
                kelipatan = kelipatan*(*(ptr+j));
            }
        }
        printf("Kelipatan terkecilnya adalah %d",kelipatan);
    }else{
        printf("Inputan tidak valid");
    }
    return 0;
}
