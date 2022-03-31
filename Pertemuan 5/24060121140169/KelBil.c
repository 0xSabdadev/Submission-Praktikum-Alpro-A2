/*Nama File     :KelBil.c
/*Deskripsi     :Menentukan kelipatan bilangan terkecil, jika diberikan sebuah array integer A sebarang secara dinamis
/*Pembuat       :Majid Ilham Adhim - 24060121140169
/*Tgl Pembuatan : Kamis,31 Maret 2022 / 21.00 WIB */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N;
    int i,j,Kelipatan;
    int *ptr;

    //Algoritma
    printf("Masukan panjang array :");
    scanf("%d", &N);
    Kelipatan = 1;
    ptr=(int *)malloc(N*sizeof(int));

    for(i=1; i<=N; i++){
        printf("Masukan nila bilang ke [%d] :", i);
        scanf("%d", ptr+i);
    }
    for(j=1; j<=N; j++){
        if(ptr[j] % Kelipatan == 0 ){
            Kelipatan = ptr[j];
        }
        else{
            Kelipatan = Kelipatan*ptr[j];
        }
    }
    printf("Kelipatan terkecilnya adalah %d\n", Kelipatan);

    return 0;
}
