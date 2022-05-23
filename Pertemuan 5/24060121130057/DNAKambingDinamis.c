/* Nama File: DNAKambingStatis.c
 Deskripsi: menentukan jumlah saudara dari array dna kambing dengan array dinamis
 Pemnbuat: Safril Isnaini (240601211130057)
 Tanggal Pembuatan: 31 March 2022
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Kamus
    int N;
    int temp;
    int bukansaudara;
    int *dnas;

    // Algoritma
    printf("===========Program DNA Kambing============\n");
    printf("Masukkan jumlah kambing:\n");
    scanf("%d", &N);
    dnas = (int *)malloc(N*sizeof(int));
    for (int i = 0; i < N; i++)
    {
        printf("Masukkan DNA ke %d: \n", i + 1);
        scanf("%d", dnas+i);
    }
    for (int i = 0; i < N-1; i++)
    {
        if (abs(*(dnas+i + 1) - (*dnas+i)) > 3)
        {
            bukansaudara++;
        }
        
    }
    printf("Jumlah kambing bersaudara: %d\n", N - bukansaudara);
    printf("Jumlah kambing yang tidak bersaudara: %d", bukansaudara);
    return 0;
}
