/*Nama File     : KalkSS*/
/*Deskripsi     : hasil operasi aritmatika terhadap dua bilangan berdasarkan operasi menggunakan character*/
/*Pembuat       : Alfaya Sayyida - 24060121120009*/
/*Tgl Pembuatan : 15/03/2022 - 00:35*/

#include <stdio.h>
#include <stdlib.h>

/*program utama*/
 int main()
 {
    /*kamus*/
    int iA, iB;
    char inisial;

    /*Algoritma*/
    printf("Masukkan nilai iA : ");
    scanf("%d", &iA);

    printf("Masukkan nilai iB : ");
    scanf("%d", &iB);

    printf("Masukkan inisial : ");
    scanf("%c", &inisial);

    switch (inisial) {
        case 'a' :
            printf("%d", iA + iB);
            break;
        case 'b' :
            printf("%d", iA - iB);
            break;
        case 'c':
            printf("%d", iA * iB);
            break;
        case 'd' :
            printf("%f", (float) iA / (float) iB);
            break;
        case 'e' :
            printf("%d", iA % iB);
            break;
        case 'f' :
            printf("%d", iA / iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
            }
    return 0;
    }


