//Nama File : Kalk-SS.c
//Nama      : Nanda Farrel Chevalerie
//NIM       : 24060121140165
//LAB       : A2

#include <stdio.h>

int main (){
	//Kamus
	int iA, iB, i;
	char x;

	//Algoritma
	printf("Membuat Program Kalk-SS \n");
	printf("Masukan nilai A  : ");
	scanf("%d", &iA);
	printf("Masukan nilai B  : ");
	scanf("%d", &iB);
	printf("Masukan Pilihan Operasi  : ");
	scanf(" %c", &x);

	switch(x){
		case 'a' :
			i = (iA + iB);
			printf("A + B = %d", i);
			break;
		case 'b' :
			i = (iA - iB);
			printf("A - B = %d", i);
			break;
		case 'c' :
			i = (iA * iB);
			printf("A x B = %d", i);
			break;
		case 'd' :
			i = ((float)iA / (float)iB);
			printf("A / B = %d", i);
			break;
		case 'e' :
			i = (iA / iB);
			printf("A div B = %d", i);
			break;
		case 'f' :
			i = (iA % iB);
			printf("A mode B = %d", i);
			break;
		default :
			printf("Bukan pilihan Menu yang benar");
	}
	return 0;
}
