/*Nama File     : DNAKambingDinamis.c*/
/*Deskripsi     : Menentukan apakah kambing tersebut bersadara atau tidak dan menampilkannya pada layar  */
/*Pembuat       : 24060121140097 - Wildan Adji Prabowo*/
/*Tgl Pembuatan : 31 Maret 2022*/


#include<stdio.h>
#include<stdlib.h>


int main(void)
{
/* Kamus */
    int x,y,z,*DNA,saudara = 0,tdksaudara = 0;

/* Algoritma */
    printf("\n Input DNA : ");
    scanf("%d", &x);
    DNA=(int *)malloc(x*sizeof(int));

    if(x>0){
        for(z=0;z<x;z++){
            printf("\n DNA ke-%d : ",z+1);
            scanf("%d",DNA+z);
        }
        for(z=0;z<x-1;z++){
            for(y=z+1;y<x;y++){
               if(abs(*(DNA+z)-(*(DNA+y)))<3){
                    saudara++;
                } else {
                    tdksaudara++;
                }
            }
        }

        printf("\n");
        printf("\n Jumlah Kambing yang bersaudara ada : %d", saudara);
        printf("\n");
        printf("\n Jumlah Kambing yang tidak bersaudara ada : %d", tdksaudara);
    }
    else {
        printf("Angka yang dimasukan tidak boleh < 1");
    }
    printf("\n");
    return 0;
}
