/*Nama File 	: kalkulator.c*/
/*Deskripsi 	: membuat kalkulator sederhana yang menjalankan operasi aritmatika */
/*Pembuat   	: Kristian David - 24060121130049*/
/*Tgl Pembuatan	: 12 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pil;
    int iA, iB;

    printf("masukan pilihan operasi: ");
    scanf("%c", &pil);

    printf("masukan nilai a: ");
    scanf("%d", &iA);

    printf("masukan nilai b: ");
    scanf("%d", &iB);


    switch (pil){
        case 'a' :
            printf("%d",iA + iB);
            break;
        case 'b' :
            printf("%d",iA - iB);
            break;
        case 'c':
            printf("%d",iA * iB);
            break;
        case 'd':
            printf("%f",(float)iA / (float)iB);
            break;
        case 'e':
            printf("%d",iA % iB);
            break;
        case 'f':
            printf("%d",iA / iB);
            break;
        default:
            printf("Bukan pilihan program yang benar");
    }
    return 0;
}
