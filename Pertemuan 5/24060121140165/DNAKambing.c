//Nama file: DNAKambing.c
//Nama : Nanda Farrel Chevalerie
//NIM : 24060121140165
//Tgl Pembuatan: 30 maret 2022
//Deskripsi: mengecek DNA kambing apakah sedarah atau bukan

#include <stdio.h>
#include <stdlib.h>

//main program
int main()
{
    // Kamus
    int x,i,j,k,s,ts;

    // Algoritma
    printf("mengecek kambing");
    printf("\n --------------------------------------------------------");
    printf("\n Masukkan data DNA: ");
    scanf("%d",&x);
    int DNA[x];
    for(i=1;i<=x;i++){
        printf("\n Masukan data %d : ",i);
        scanf("%d",&DNA[i]);//input
    }
    printf("\n --------------------------------------------------------");
    s=0;
    ts=0;
    for(j=x-1;j>=0;j--){
        for(k=0;k<j;k++){
            if(DNA[j]-DNA[k]<3){
                s++;
            }else{
                ts++;
            }
        }
    }printf("\n sedarah : %d",s);
    printf("\n tidak sedarah : %d",ts);
    return 0;
}
