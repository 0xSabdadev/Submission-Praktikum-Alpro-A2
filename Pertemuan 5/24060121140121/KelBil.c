// Nama Pembuat : Fairuz Fachrizal Adyatma 24060121140121
// Tanggal      : 30 Maret 2022
// Nama Program : KelBil.c
/* Deskripsi    : menentukan kelipatan faktor terkecil dari suatu array*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr, a,b,c,d,kelipatan;

    // Algoritma
    printf("Masukkan banyak data: ");
    scanf("%d",&b);
    kelipatan = 1;
    if(b>0){
        ptr = (int *)malloc(b*sizeof(int));
        for(a=1;a<=b;a++){
            printf("Masukkan bilangan ke %d (kecil ke besar)",a);
            scanf("%d",ptr+a);
        }
        for(c=1;c<=b;c++){
            if(*(ptr+c)%kelipatan==0){
                kelipatan = *(ptr+c);
            }
            else{
                kelipatan = kelipatan*(*(ptr+c));
            }
        }
        printf("Kelipatan terkecil adalah %d",kelipatan);
    }else{
        printf("Invalid");
    }
    return 0;
}
