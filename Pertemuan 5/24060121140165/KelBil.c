//Nama file: DNAKambing.c
//Nama : Nanda Farrel Chevalerie
//NIM : 24060121140165
//Tgl Pembuatan: 30 maret 2022
//Deskripsi: menghitung KPK dari bilangan yang akan diinput

#include <stdio.h>
#include <stdlib.h>


int main(){
    int N,i,k;

    // Algoritma
    printf("menghitung KPK");
    printf("\n --------------------------------------------------------");
    printf("\n masukan banyak inputan yang diinginkan :");
    scanf("%d",&N);
    printf("\n --------------------------------------------------------\n");
    int Bil[N];
    for(i=1;i<=N;i++){
        printf("Input bilangan urut kecil->besar :",i);
        scanf("%d",&Bil[i]);
        }
    printf("\n --------------------------------------------------------");
    k = 1;
    for(i=1;i<=N;i++){
        if(Bil[i]%k==0){
            k=Bil[i];
        }else{
            k=k*Bil[i];
        }
    }
    printf("\nkelipatan terkecilnya adalah %d",k);
    return 0;
}
