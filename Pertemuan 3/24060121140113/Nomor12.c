/*Nama File 	: tugasNo12.c*/
/*Deskripsi 	: mengerjakan soal dari file kumpulansoalalpro nomor 12*/
/*Pembuat   	: 24060121140113 - Rhadiyyah Ariana Saraswati */
/*Tgl Pembuatan	: 17.03.2022	23:19*/

#include <stdio.h>

int main(void){
	// kamus
  	char operasi;
  	int iA, iB, hasil;
  	
	//algoritma
		printf("Membuat program Kalk-SS \n");
		printf("Masukkan sembarang angka : ");
		scanf("%d", &iA);
		
		printf("Masukkan sembarang angka : ");
		scanf("%d", &iB);
		
		printf("Masukkan pilihan operasi : ");
		scanf("%s", &operasi);
	
	  	switch(operasi) {
	    	case 'a' :
	      		hasil = iA + iB;
	      		printf("A + B = %d", hasil);
	    		break;
	    	case 'b' :
	      		hasil = iA - iB;
				printf("A - B = %d", hasil);
				break;
	    	case 'c' :
	      		hasil = iA * iB;
	      		printf("A x B = %d", hasil);
	    		break;
	    	case 'd' :
	      		hasil = (float)iA / (float)iB;
	      		printf("A / B = %d", hasil);
	    		break;
	    	case 'e' :
	      		hasil = iA / iB;
	      		printf("A div B = %d", hasil);
	    		break;
	    	case 'f' :
	      		hasil = iA % iB;
	      		printf("A mod B = %d", hasil);
	    		break;
	    	default:
	      		printf("Bukan pilihan menu yang benar");
	    	
	  	}
	  	
  	return 0;
}
