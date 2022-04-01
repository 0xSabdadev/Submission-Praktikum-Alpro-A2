/* Nama File     : KelBil.c*/
/* Deskripsi     : Menentukan kelipatan bilangan terkecil, jika diberikan sebuah array integer a sebarang dengan array dinamis*/
/* Pembuat       : <24060121120023-Arynda Anna Salsabiela>*/
/* Tgl pembuatan : Jumat, 1 April 2022 pukul 14.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int sum, i, j, k, n;
    int *kelbild;

    /* Algoritma */
    printf("Masukkan banyaknya bilangan: ");
    scanf("%d",&n);
    sum = 1;
    if(n>0){
        kelbild = (int *)malloc(n*sizeof(int));
        for(i=1;i<=n;i++){
            printf("Masukkan bilangan ke-%d (berurutan dari terkecil - terbesar): ",i);
            scanf("%d",kelbild+i);
        }
        for(j=1;j<=n;j++){
            if(*(kelbild+j)%sum==0){
                sum = *(kelbild+j);
            }
            else{
                sum = sum*(*(kelbild+j));
            }
        }
        printf("Kelipatan terkecilnya adalah %d \n",sum);
    }else{
        printf("Inputan tidak valid");
    }
    return 0;
}
