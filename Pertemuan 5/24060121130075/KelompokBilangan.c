//Nama File 	: KelompokBilangan.c
//Deskripsi 	: mennentukan kelipatan faktor terkecil dari suatu array
//Pembuat   	: Muhamad Ridwan Ash'shidqi
//Tgl Pembuatan	: 1 april 2022

#include <stdio.h>/*header file*/
#include <stdlib.h>
#include <math.h>

/*Program Utama*/
int main()
{ /*Kamus*/
	int i;
	int N;
	int j;
	int k;
	int kelipatan;

    /*Algoritma*/
    printf("Masukkan bilangan : ");
    scanf("%d",&N);
    kelipatan = 1;
    if(N<=0){
        printf("bilangan harus positif");
    }
	else{
    	int Bilangan[N];
        for(i=1;i<=N;i++){
            printf("Masukkan Bilangan ke %d = ",i);
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
        printf("Kelipatan terkecilnya adalah %d",kelipatan);
    }
    return 0;
}
