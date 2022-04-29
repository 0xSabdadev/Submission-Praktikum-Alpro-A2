/*Nama File 	: HargaDiskon.c*/
/*Deskripsi 	: membuat kalkulator sederhana dengan dua inputan bilangan dan satu inputan operasi*/
/*Pembuat   	: 24060121130043-Zahid Muhammad Mahfudz*/
/*Tgl Pembuatan	: */

/*header file*/
#include <stdio.h>
#include <stdlib.h>

/*program utama*/
int main()
{
    /*kamus*/
    float HargaA;
    char Diskon;
    float d,A;


    /*algoritma*/
    printf("masukan kode diskon :");
    scanf("%c", &Diskon);
    printf("masukan Harga awal :");
    scanf("%f", &HargaA);

    switch(Diskon){
		case 'A' :
			d = 0.1;
			A = HargaA - (HargaA * d);
			printf("Harga Akhir Produk adalah %.2f", A);
			break;

		case 'B' :
			d = 0.15;
			A = HargaA - (HargaA * d);
			printf("Harga Akhir Produk adalah %.2f", A);
			break;

		case 'C' :
			d = 0.2;
			A = HargaA - (HargaA * d);
			printf("Harga Akhir Produk adalah %.2f", A);
			break;

		default :
			printf("Masukan diskon tidak benar");
	}
    return 0;
}
