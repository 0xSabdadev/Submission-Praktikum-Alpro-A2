
//Nama File : HargaDiskon.c
//Nama      : Muhamad Ridwan Ash'shidqi
//NIM       : 24060121130075
//Deskripsi : Membuat harga diskon barang
//LAB       : A2
#include <stdio.h>

int main (){
	//Kamus
	int harga;
	float d;
	float A;
	char diskon;

	//Algoritma

	printf("Harga Awal = ");
	scanf("%d", &harga);
	printf("Jenis Diskon = ");
	scanf("%s", &diskon);

	switch(diskon){
		case 'A' :
			d = 0.1;
			A = harga - (harga * d);
			printf("Harga setelah diskon = %.2f", A);
			break;

		case 'B' :
			d = 0.15;
			A = harga - (harga * d);
			printf("Harga setelah diskon = %.2f", A);
			break;

		case 'C' :
			d = 0.2;
			A = harga - (harga * d);
			printf("Harga setelah diskon =  %.2f", A);
			break;

		default :
			printf("masukkan jenis diskon yang sesua");
	}
	return 0;
}

