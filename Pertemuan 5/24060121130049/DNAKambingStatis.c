/*Nama File 	: DNAKambingStatis.c*/
/*Deskripsi 	: membuat program yang menentukan banyak kambing yang bersaudara dan tidak dari DNA yang diberikan*/
/*Pembuat   	: Kristian David Adi Prasetya - 24060121130049*/
/*Tgl Pembuatan	: 29 Maret 2022 - 20.22*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int N,i,j,k,b = 0,tb = 0;

    // Algoritma
    printf("Masukkan banyaknya data DNA: ");
    scanf("%d",&N);

    if(N>0){
        int DNA[N];
        for(i=1;i<=N;i++){
            printf("Masukkan DNA ke %d: ",i);
            scanf("%d",&DNA[i]);
        }

        for(j=0; j <= N; j++){
            for(k=1; k < j; k++) {
                if(abs(*(DNA+j)-*(DNA+k))>=3) {
                    tb = tb + 1;
                    printf("%d - %d = tidak bersaudara \n", *(DNA+j), *(DNA+k));

                } else {
                    b = b + 1;
                    printf ("%d - %d = bersaudara \n", *(DNA+j), *(DNA+k));
                    break;

                }

            }

        }

        printf("Jumlah Kambing Bersaudara adalah %d dan yang Tidak bersaudara %d",b,tb);
    } else{
        printf("masukan tidak tepat");
    }
    return 0;
}
