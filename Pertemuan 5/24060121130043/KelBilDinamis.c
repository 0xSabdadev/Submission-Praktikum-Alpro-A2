/*Nama File 	: KelBilDinamis.c*/
/*Deskripsi 	: menentukan kelipatan faktor terkecil dari sebuah array*/
/*Pembuat   	: 2406012 1130043-Zahid Muhammad Mahfudz*/
/*Tgl Pembuatan	: 01-04-2022*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //kamus
    int n;
    int x,y;
    int kelipatan;
    int *ptr;

    //algoritma
    printf("tentutakn banyaknya bilangan :");
    scanf("%d", &n);

    kelipatan=1;

    if (n>0){
        ptr = (int *)malloc(n*sizeof(int));
        for (x=1; x<=n; x++){
            printf("masukan bilangan ke- %d (urut dari yang terbesar)", x);
            scanf("%d", ptr+x);
        }
        for(y=1; y<=n; y++){
            if(*(ptr+y)%kelipatan==0){
                kelipatan = *ptr+y;
            }
            else{
                kelipatan = kelipatan*(*(ptr+y));
            }
        }
        printf("Kelipatan terkecilnya adalah :%d", kelipatan);
    }
    else{
        printf("Masukan salah");
    }

    return 0;
}
