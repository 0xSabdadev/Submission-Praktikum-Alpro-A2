// Nama file    : kalkulator.c
// Deskripsi    : Menghitung bilangan integer pertama dan kedua sesuai dengan
//              opsi yang dipilih
// Pembuat      : Fairuz Fachrizal Adyatma
// Tgl Pembuatan: 16 Maret 2022

#include <stdio.h>
#include <stdlib.h>

// KAMUS
int main(void){
	int iA, iB;
	char opsi;
// ALGORITMA
	printf("Masukkan bilangan pertama: ");
	scanf("%d", &iA);
	printf("Masukkan bilangan kedua: ");
	scanf("%d", &iB);
	printf("Jenis operasi yang dibutuhkan: ");
	scanf(" %c", &opsi);

	switch(opsi){
		case 'a':
			printf("%d", iA + iB);
			break;
		case 'b':
			printf("%d", iA - iB);
			break;
		case 'c':
			printf("%d", iA * iB);
			break;
		case 'd':
			printf("%.1f", (float)iA / (float)iB);
			break;
		case 'e':
			printf("%d", iA / iB);
			break;
		case 'f':
			printf("%d", iA % iB);
			break;
		default:
			printf("Opsi invalid");
	}

	return 0;
}
