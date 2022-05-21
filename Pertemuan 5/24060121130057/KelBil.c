/* Nama File: KelBil.c 
 Deskripsi: Menghitung kelipatan terkecil dari beberapa bilangan integer sembarang terurut
 Pembuat: Safril Isnaini (240601211130057) 
 Tanggal Pembuatan: 01 April 2022 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *bil, i, N, j, k, kpk;

    // Algoritma
    printf("Masukkan banyaknya bilangan :\n ");
    scanf("%d", &N);
    kpk = 1;
    if (N > 0)
    {
        bil = (int *)malloc(N * sizeof(int));
        for (i = 1; i <= N; i++)
        {
            printf("Masukkan urutan bilangan ke %d\n", i);
            scanf("%d", bil + i);
        }
        for (j = 1; j <= N; j++)
        {
            if (*(bil + j) % kpk == 0)
            {
                kpk = *(bil + j);
            }
            else
            {
                kpk = kpk * (*(bil + j));
            }
        }
        printf("Kelipatan terkecilnya adalah %d", kpk);
    }
    else
    {
        printf("Inputan tidak valid");
    }
    return 0;
}
