/*Nama File     : KelBilDinamis.c*/
/*Deskripsi     : Menentukan kelipatan bilangan terkecil, jika diberikan sebuah array dan menampilkannya pada layar */
/*Pembuat       : 24060121140097 - Wildan Adji Prabowo*/
/*Tgl Pembuatan : 31 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
/* Kamus */
    int a, b, c, bil, *kelbilangan;

/* Algoritma */
    printf("\n Input banyaknya data: ");
    scanf("%d",&b);
    bil = 1;
    if(b>0){
        kelbilangan = (int *)malloc(b*sizeof(int));
        for(a=1;a<=b;a++){
            printf("\n Bilangan ke- %d : ",a);
            scanf("%d",kelbilangan+a);
        }
        for(c=1;c<=b;c++){
            if(*(kelbilangan+c)%bil==0){
                bil = *(kelbilangan+c);
            }
            else{
                bil = bil*(*(kelbilangan+c));
            }
        }
        printf("\n Kelipatan terkecilnya : %d " ,bil);
    }else{
        printf("\n Inputan tidak valid");
    }
    printf("\n");

    return 0;
}
