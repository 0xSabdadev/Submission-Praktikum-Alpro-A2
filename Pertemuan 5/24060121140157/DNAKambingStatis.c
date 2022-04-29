 /*
 Nama File	: DNAKambingStatis.c
 Deskripsi	: menghitung dan menampilkan jumlah saudara kambing berdasarkan DNA
 Pembuat		: Muhamad Aditya Yusuf Jatikusumo
 Tgl Pembuatan:  28 Maret 2022
*/

//Header File
#include <stdio.h>
#include <stdlib.h>

//Program Utama
int main() {
	//Kamus
	int N,i,j,saudara,bukanSaudara;
	//Algoritma
	saudara = 0;
	bukanSaudara = 0;
	printf("Masukkan Banyaknya DNA Kambing: ");scanf("%d",&N);
	int element[N];
	if (N>0){
		printf("Masukkan DNA Kambing: ");
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