/*Nama File 	: DNAKambingStatis.c*/
/*Deskripsi 	: menentukan kambing yang bersaudara dari kumpulan DNA*/
/*Pembuat   	: 2406012 1130043-Zahid Muhammad Mahfudz*/
/*Tgl Pembuatan	: 29-03-2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int DNA[100];
    int x,y;
    int Saudara, BukanSaudara;
    int n;

    //algoritma
    printf("Masukan Jumlah kambing :");
    scanf("%d", &n);

    Saudara=0; BukanSaudara=0;

    for (x=0; x<n; x++){
        scanf("%d", &DNA[x]);
    }
    for (x=0; x<n-1; x++){
        for(y=x+1; y<n; y++){
            if(DNA[x]-DNA[y]<3){
                Saudara++;
            }
            else{
                BukanSaudara++;
            }
        }
    }
    printf("Jumlah kambing yang bersaudara adalah : %d \n", Saudara);
    printf("Jumlah kambing yang bukan bersaudara adalah : %d \n", BukanSaudara);

    return 0;
}
