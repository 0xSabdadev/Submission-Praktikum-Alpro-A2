/*Nama File 	: DNAKambingStatis.c*/
/*Deskripsi 	: mennentukan banyak kambing yang bersaudara dan tidak bersaudara*/
/*Pembuat   	: 24060121130045-Farhan Adka Reynaldi*/
/*Tgl Pembuatan	: 31-03-2022*/

#include <stdio.h>/*header file*/
#include <stdlib.h>
#include <math.h>

/*Program Utama*/
int main(){
	/*Kamus*/
    int *ptr,i, N,j,k,bersaudara,tidakbersaudara;

    /*Algoritma*/
    printf("Masukkan banyaknya data DNA: ");
    scanf("%d",&N);
    bersaudara = 0;
    tidakbersaudara =0;
    if(N<=0){
        printf("Inputan tidak valid");
    }
	else{
    	ptr = (int *)malloc(N*sizeof(int));
        for(i=1;i<=N;i++){
            printf("Masukkan DNA ke %d ",i);
            scanf("%d",ptr+i);
        }
        for(j=N;j>1;j--){
            for(k=1;k<j;k++){
                if(*(ptr+j)-*(ptr+k)<3){
                    bersaudara++;
                }
                else{
                    tidakbersaudara++;
                }
            }
        }
        free(ptr);
        printf("Jumlah Kambing Bersaudara adalah %d dan yang Tidak bersaudara %d",bersaudara,tidakbersaudara);
    }
    return 0;
}
