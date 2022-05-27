/* Nama file        : KalkulatorSederhana.c*/
/* Pembuat          : 24060121130069 - Ririn Indah Cahyani*/
/* Tgl Pembuatan    : 16 Maret 2022 - 19:37*/
/* Deskripsi        : Menghitung dan menuliskan kalkulator Super Dederhana, yang memerima 2 masukan nilai dan 1 masukan operasi
                      dengan a sebagai operasi +, b sebagai operasi -, c sebagai operasi *, d sebagai operasi /, e sebagai operasi div,
                      f sebagai operasi mod, dan keluaran "Bukan pilihan menu yang benar" untuk operasi selain diatas */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int iA, iB;
    char operasi;

    printf("List operasi:\n");
    printf("a untuk +\n");
    printf("b untuk -\n");
    printf("c untuk *\n");
    printf("d untuk /\n");
    printf("e untuk div\n");
    printf("f untuk mod\n\n");

    printf("Masukan operator yang diinginkan : ");
    scanf("%c", &operasi);
    printf("Masukan nilai untuk operand ke-1 : ");
    scanf("%d", &iA);
    printf("Masukan nilai untuk operand ke-2 : ");
    scanf("%d", &iB);


    //perulangan menggunakan switch
    if (operasi == 'a' || operasi == 'b' || operasi == 'c' || operasi == 'd' || operasi == 'e' || operasi == 'f'){
        switch (operasi){
            case 'a':{
                    printf("%d + %d = %d\n", iA, iB, iA + iB);
                    break;
                }
            case 'b':{
                    printf("%d - %d = %d\n", iA, iB, iA - iB);
                    break;
                }
            case 'c':{
                    printf("%d * %d = %d\n", iA, iB, iA * iB);
                    break;
                }
            case 'd':{
                    printf("%d / %d = %.2f\n", iA, iB, (float)iA / (float)iB);
                    break;
                }
            case 'e':{
                    printf("%d div %d = %d\n", iA, iB, iA / iB);
                    break;
                }
            case 'f':{
                    printf("%d mod %d = %d\n", iA, iB, iA % iB);
                    break;
                }
        }
    } else {
        printf("Bukan pilihan yang benar");
    }


    return 0;
}


