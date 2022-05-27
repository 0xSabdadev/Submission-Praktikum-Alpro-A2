/*Nama File 	: DNAKambingDinamis.c*/
/*Deskripsi 	: menentukan kambing yang bersaudara dari kumpulan DNA*/
/*Pembuat   	: 2406012 1130043-Zahid Muhammad Mahfudz*/
/*Tgl Pembuatan	: 29-03-2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int x,y;
    int n;
    int Saudara, Bukansaudara;
    int *DNA;

    //algoritma
    printf("Masukan Jumlah Kambing :");
    scanf("%d", &n);
    DNA=(int *)malloc(n*sizeof(int));

    Saudara=0; Bukansaudara=0;

    if (n>0){
        for(x=0; x<n; x++){
            printf("Masukan DNA Kambing Ke-%d :", x+1);
            scanf("%d", DNA+x);
        }
        for(x=0; x<n; x++){
            for(y=x+1; y<n; y++){
                if(abs(*(DNA+x)-(*(DNA+y)))<3){
                    Saudara++;
                }
                else{
                    Bukansaudara++;
                }
            }
        }
        printf("Jumlah Kambing yang bersaudara adalah :%d \n", Saudara);
        printf("Jumlah kambing yang bukan saudara adalah :%d \n", Bukansaudara);
    }
    else{
        printf("Masukan harus lebih dari nol");
    }
    return 0;
}
