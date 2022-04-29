/*Nama File     :Kalkulator.c
/*Deskripsi     :Membuat kalkulator sederhana yg diberi 2 buah masukan
/*Pembuat       :Majid Ilham Adhim
/*Tgl Pembuatan :17 Maret 2022 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int iA;
    int iB;
    float iC;
    float iD;
    int tambah,kurang,kali, div, mod ;
    float bagi;
    char operasi;

    //Algoritma
    printf("Pilih Menu Hitung\n");
    printf("a = Penjumlahan\n");
    printf("b = Pengurangan\n");
    printf("c = Perkalian\n");
    printf("d = Pembagian\n");
    printf("e = Div\n");
    printf("f = Mod\n");

    printf("Masukan operasi :");
	scanf ("%c",&operasi);



	switch(operasi){
        case 'a' :
            printf("Masukan Angka Pertama :");
            scanf("%d",&iA);
            printf("Masukan Angka Kedua:");
            scanf("%d",&iB);
            tambah = iA + iB;
            printf("Hasil dari %d + %d = %d\n",iA,iB,tambah);
            break;
        case 'b' :
            printf("Masukan Angka Pertama :");
            scanf("%d",&iA);
            printf("Masukan Angka Kedua:");
            scanf("%d",&iB);
        	kurang = iA - iB;
        	printf("Hasil dari %d - %d = %d\n",iA,iB,kurang);
        	break;
        case 'c' :
            printf("Masukan Angka Pertama :");
            scanf("%d",&iA);
            printf("Masukan Angka Kedua:");
            scanf("%d",&iB);
            kali = iA * iB;
            printf("Hasil dari %d * %d = %d\n",iA,iB,kali);
            break;
        case 'd' :
            printf("Masukan Angka Pertama :");
            scanf("%f",&iC);
            printf("Masukan Angka Kedua:");
            scanf("%f",&iD);
            bagi = iC / iD;
        	printf("Hasil dari %0.f/ %0.f = %.1f\n",iC,iD,bagi);
        	break;
        case 'e' :
            printf("Masukan Angka Pertama :");
            scanf("%d",&iA);
            printf("Masukan Angka Kedua:");
            scanf("%d",&iB);
            div = iA / iB;
            printf("Hasil dari %d div %d = %d\n",iA,iB,div);
            break;
        case 'f' :
            printf("Masukan Angka Pertama :");
            scanf("%d",&iA);
            printf("Masukan Angka Kedua:");
            scanf("%d",&iB);
        	mod =iA % iB;
        	printf("Hasil dari %d mod %d = %d\n",iA,iB,mod);
        	break;
        default :
            printf("Bukan pilihan menu yang benar\n");

    }

    return 0;
}
