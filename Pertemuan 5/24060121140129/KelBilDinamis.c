/* Deskripsi    : Mennentukan kelipatan faktor terkecil dari suatu array*/
/* Nama         : Andre Fitara Agun Ni'am Muta'ali*/
/*NIM 			: 24060121140129*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr, i, N,j,k,kelipatan;

    // Algoritma
    printf("Masukkan banyaknya data: ");
    scanf("%d",&N);
    kelipatan = 1;
    if(N>0){
        ptr = (int *)malloc(N*sizeof(int));
        for(i=1;i<=N;i++){
            printf("Masukkan Bilangan ke %d  (urut dari terkecil ke terbesar) ",i);
            scanf("%d",ptr+i);
        }
        for(j=1;j<=N;j++){
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
