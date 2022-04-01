//Nama File : kalk-ss.cpp
//Nama      : Muhamad Ridwan ash'shidqi
//NIM       : 24060121130075
//Deskripsi : Membuat program kalkulator
//LAB       : A2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iA;
    int iB;
    int i;
    char pilihan;

    printf("iA = ");
	scanf("%d", &iA);
	printf("iB : ");
	scanf("%d", &iB);
	printf("Pilihan : ");
	scanf(" %c", &pilihan);



    switch(pilihan){
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
			printf("A mod B = %d", i);
			break;
		default :
		    printf(" harap masukkan pilihan yang benar ");
    }
    return 0;
}
