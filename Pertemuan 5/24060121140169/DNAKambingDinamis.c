/*Nama File     :DNAKambingDinamis.c
/*Deskripsi     :Menghitung jumlah kambing yang bersaudara dan tidak bersaudara dengan alokasi dinamis
/*Pembuat       :Majid Ilham Adhim - 24060121140169
/*Tgl Pembuatan : Kamis,31 Maret 2022 / 18.25 WIB */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int *ptr;
    int N; //batas panjang array
    int i; //counter
    int j; //counter
    int saudara;
    int tidakbersaudara;

    //Algoritma
    printf("Masukan panjang array :");
    scanf("%d", &N);
    ptr=(int *)malloc(N*sizeof(int));
    saudara=0;
    tidakbersaudara=0;
    if(N>0){
        for(i=1; i<=N; i++){
            printf("Masukan nilai DNA ke [%d] :", i);
            scanf("%d", ptr+i);
        }
        for(i=1; i<=N; i++){
            for(j=i+1; j<=N; j++){
                if((ptr[j]-ptr[i])<3){ //selisih kurang dari 3
                    saudara++;
                }else{ //selisih lebih dari 3
                    tidakbersaudara++;
                }
            }
        }
        printf("\nJumlah kambing yang bersaudara adalah %d", saudara);
        printf("\nJumlah kambing yang tidak bersaudara adalah %d\n", tidakbersaudara);
    }else{
        printf("Masukan harus positif\n");
    }
    return 0;
}
