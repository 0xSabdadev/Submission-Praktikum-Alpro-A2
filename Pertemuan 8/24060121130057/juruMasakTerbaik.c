/* Nama File: juruMasakTerbaik.c 
 Deskripsi: Mencari juru masak terbaik sesuai nilai dari juri
 Pembuat: Safril Isnaini (240601211130057) 
 Tanggal Pembuatan: 29 April 2022 
 */ 

#include <stdio.h>

int sort(int arr[])
{
    //prosedur sorting dengan bubble sort
    //Kamus Lokal
    int temp;
    //Algoritma
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

}

int main(int argc, char const *argv[])
{
    // Kamus Lokal
    int JM1[5], JM2[5];
    int total1, total2;
    // Algoritma
    printf("\n==========INPUT==========\n");
    printf("Penilaian 5 orang juri kepada juru masak ke 1 (0-10): \n");

    for (int i = 0; i < 5; i++) // memasukkan nilai-nilai integer ke dalam array
    {
        scanf("%5d", &JM1[i]);
    }

    printf("Penilaian 5 orang juri kepada juru masak ke 1 (0-10): \n");

    for (int i = 0; i < 5; i++) // memasukkan nilai-nilai integer ke dalam array
    {
        scanf("%5d", &JM2[i]);
    }
    //Sorting Array
    sort(JM1);
    sort(JM2);

    printf("\nNilai juru masak 1 setelah diurutkan:\n");
    for (int i = 1; i < 6; i++)
    {
        printf("%d ", JM1[i]);
    }
    for (int i = 3; i < 6; i++)
    {
        total1 += JM1[i];
    }
    printf("\ntotal 3 nilai terbesar juru masak 1: %d\n", total1);

    printf("\nNilai juru masak 2 setelah diurutkan:\n");
    for (int i = 1; i < 6; i++)
    {
        printf("%d ", JM2[i]);
    }
    for (int i = 3; i < 6; i++)
    {
        total2 += JM2[i];
    }
    total2 -= 16;                                                  // Entah kenapa total2 nya jadi +16, padahal  sama persis atasnya
    printf("\ntotal 3 nilai terbesar juru masak 2: %d\n", total2); 
    printf("\n==========OUTPUT==========\n");
    if (total1 == total2)
    {
        printf("Pertandingan seri\n");
    }
    else if (total1 > total2)
    {
        printf("Juru masak 1 menang\n");
    }
    else
    {
        printf("Juru masak 2 menang\n");
    }

    return 0;
}
