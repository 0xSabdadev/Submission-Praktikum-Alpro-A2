/*Nama File     : KelBil*/
/*Deskripsi     : Menentukan dan menampilkab pada layar keipatan dari bilangan terkecil*/
/*Pembuat       : Alfaya Sayyida - 24060121120009*/
/*Tgl Pembuatan : 31/03/2022 - 23:00*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, N,j,k,kelipatan;

    // Algoritma
    printf("Masukkan banyaknya data: ");
    scanf("%d",&N);
    kelipatan = 1;
    if(N>0){
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
        printf("Jadi kelipatan terkecilnya adalah %d",kelipatan);
    }else{
        printf("Inputan tidak valid");
    }
    return 0;
}
