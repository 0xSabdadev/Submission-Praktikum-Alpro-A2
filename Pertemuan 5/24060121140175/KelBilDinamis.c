// Nama Program : KelBil.c
// Deskripsi    : menentukan kelipatan faktor terkecil dari suatu array*/
// Nama         : Maulana Pasya Zefanya*/
// Tanggal      : 1 April 2022
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr,i,n,j,k,kelipatan;

    // Algoritma
    printf("Masukkan banyaknya data: ");
    scanf("%d",&n);
    kelipatan = 1;
    if(n>0){
        ptr = (int *)malloc(n*sizeof(int));
        for(i=1;i<=n;i++){
            printf("Masukkan Bilangan ke %d  (urut dari terkecil ke terbesar) ",i);
            scanf("%d",ptr+i);
        }
        for(j=1;j<=n;j++){
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
