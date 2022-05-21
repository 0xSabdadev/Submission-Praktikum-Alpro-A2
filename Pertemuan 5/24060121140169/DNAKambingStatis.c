/*Nama File     :DNAKambingStatis.c
/*Deskripsi     :Menghitung jumlah kambing yang bersaudara dan tidak bersaudara dengan alokasi statis
/*Pembuat       :Majid Ilham Adhim - 24060121140169
/*Tgl Pembuatan : Selasa,29 Maret 2022 / 20.50 WIB */

#include <stdio.h> //header file
#include <stdlib.h>

int main()
{
    //Kamus
    int N; //batas panjang array
    int i; //counter
    int j; //counter
    int saudara;
    int tidakbersaudara;

    //Algoritma
    printf("Masukan panjang array :");
    scanf("%d", &N);
    saudara=0;
    tidakbersaudara=0;
    if(N>0){
        int DNA[N]; //array
        for(i=1; i<=N; i++){
            printf("Masukan nilai DNA ke [%d] :", i);
            scanf("%d", &DNA[i]);
        }
        for(i=1; i<=N; i++){
            for(j=i+1; j<=N; j++){
                if((DNA[j]-DNA[i])<3){ //selisih kurang dari 3
                    saudara++;
                }else{ //selisih lebih dari 3
                    tidakbersaudara++;
                }
            }
        }
        printf("\nJumlah kambing yang bersaudara adalah %d", saudara);
        printf("\nJumlah kambing yang tidak bersaudara adalah %d\n", tidakbersaudara);
    }else{
        printf("Masukan harus positif");
    }



    return 0;
}
