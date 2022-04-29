//Nama File : HargaDiskon.c
//Nama      : Nanda Farrel Chevalerie
//NIM       : 24060121140165
//LAB       : A2

#include <stdio.h>

int main (){
	//Kamus
	int i;
	float d,A;
	char x;

	//Algoritma
	printf("Membuat Program Harga Diskon \n");
	printf("Masukkan Harga Awal Produk  : ");
	scanf("%d", &i);
	printf("Masukan Jenis Diskon  : ");
	scanf("%s", &x);

	switch(x){
		case 'A' :
			d = 0.1;
			A = i - (i * d);
			printf("Harga Akhir Produk adalah %.2f", A);
			break;

		case 'B' :
			d = 0.15;
			A = i - (i * d);
			printf("Harga Akhir Produk adalah %.2f", A);
			break;

		case 'C' :
			d = 0.2;
			A = i - (i * d);
			printf("Harga Akhir Produk adalah %.2f", A);
			break;

		default :
			printf("Bukan pilihan Jenis Diskon yang benar");
	}
	return 0;
}
