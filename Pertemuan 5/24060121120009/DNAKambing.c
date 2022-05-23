/*Nama File     : DNAKambing*/
/*Deskripsi     : menentukan dan menampilkan pada layar banyaknya saudara dan bukan saudara dari kumpulan DNA kambing*/
/*Pembuat       : Alfaya Sayyida - 24060121120009*/
/*Tgl Pembuatan : 31/03/2022 - 23:00*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	//Kamus
	int N,i,j,saudara,bukanSaudara;
	//Algoritma
	saudara = 0;
	bukanSaudara = 0;
	printf("Masukkan Banyaknya DNA Kambing: ");scanf("%d",&N);
	int element[N];
	if (N>0){
		printf("Masukkan DNA KAmbing: ");
		for (i=1;i<=N;i++){
			scanf("%d", &element[i-1]);
		}
		for (i=1;i<=N;i++){
			for (j=i+1;i<=N;i++){
				if(element[j-1]-element[i-1]<3){
					saudara +=1;
				}else{
					bukanSaudara +=1;
				}
			}
		}
		printf("Saudara : %d",saudara);
		printf("\nBukan Saudara : %d",bukanSaudara);
	}else {
		printf("Masukan N Harus Positif");
	}

	return 0;
}
