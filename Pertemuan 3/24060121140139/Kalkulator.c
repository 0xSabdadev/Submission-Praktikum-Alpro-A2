// Nama File: Kalkulator
// Nama: Thirafi Syahir Saputra
// NIM: 24060121140139
// Lab: A2

#include <stdio.h>
#include <stdlib.h>





int main (){
	//Kamus
	int i1, i2,i;
	char C;

	//Algoritma
	printf("Membuat Program Kalk-SS \n");
	printf("Masukan angka sembarang  : ");
	scanf("%d", &i1);
	printf("Masukan angka sembarang  : ");
	scanf("%d", &i2);
	printf("Masukan Pilihan Operasi  : ");
	scanf(" %c", &C);

	switch(C){
		case 'a' :
			i = (i1 + i2);
			printf("A + B = %d", i);
			break;
		case 'b' :
			i = (i1 - i2);
			printf("A - B = %d", i);
			break;
		case 'c' :
			i = (i1 * i2);
			printf("A x B = %d", i);
			break;
		case 'd' :
			i = ((float)i1 / (float)i2);
			printf("A / B = %d", i);
			break;
		case 'e' :
			i = (i1 / i2);
			printf("A div B = %d", i);
			break;
		case 'f' :
			i = (i1 % i2);
			printf("A mode B = %d", i);
			break;
		default :
			printf("Bukan pilihan Menu yang benar");
	}
	return 0;
}
