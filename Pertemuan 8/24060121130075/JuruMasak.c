// Nama file = JuruMasak.c
// Nama = Muhamad Ridwan Ash'shidqi
// NIM = 24060121130075
// LAB = A2

#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    // Kamus Lokal
    int juru1[] = {3,6,7,9,8};
    int juru2[] = {8,9,7,6,3};
    int total = 0;
    int sum = 0;

    // Tampilan hasil nilai juri 1-5
    printf("Penilaian 5 orang juri kepada juru masak 1:");
    for (int i = 0; i < ((sizeof(juru1)/sizeof(*juru1))); i++) {
        printf(" %d",juru1[i]);
    }

    printf("\nPenilaian 5 orang juri kepada juru masak 2:");
    for (int i = 0; i < ((sizeof(juru2)/sizeof(*juru2))); i++) {
        printf(" %d",juru2[i]);
    }

    // Mengurutkan nilai masak 1
    for(int i = 1;i < ((sizeof(juru1)/sizeof(*juru1)));i++){
        // Deklasrasi elemen bantuan
        int selection = i;
        while(selection > 0){
            if(juru1[selection] > juru1[selection-1]){  // > buat descending < buat ascending
                int temp = juru1[selection];
                juru1[selection] = juru1[selection-1];
                juru1[selection-1] = temp;
            }
            selection--;
        }
    }
    // Sesudah
    printf("\n\nNilai juru masak 1 setelah diurutkan:");
    for(int i = 0; i < ((sizeof(juru1)/sizeof(*juru1)));i++){
        printf(" %d",juru1[i]);
    }

    // Mengurutkan nilai masak 2
    for(int i = 1;i < ((sizeof(juru2)/sizeof(*juru2)));i++){
        // Deklasrasi elemen bantuan
        int selection = i;
        while(selection > 0){
            if(juru2[selection] > juru2[selection-1]){  // > buat descending < buat ascending
                int temp = juru2[selection];
                juru2[selection] = juru2[selection-1];
                juru2[selection-1] = temp;
            }
            selection--;
        }
    }
    // Sesudah
    printf("\nNilai juru masak 2 setelah diurutkan:");
    for(int i = 0; i < ((sizeof(juru2)/sizeof(*juru2)));i++){
        printf(" %d",juru2[i]);
    }

    // Total Nilai masak 1
    /* sum contents of array a */
    for ( int i = 0; i < ((sizeof(juru1)/sizeof(*juru1))-2); i++ ) {
        total += juru1[ i ];
    } /* end for */
    printf("\n\nTotal nilai masak 1 adalah: %d",total);

    // Total Nilai masak 2
    /* sum contents of array a */
    for ( int i = 0; i < ((sizeof(juru2)/sizeof(*juru2))-2); i++ ) {
        sum += juru2[i];
    } /* end for */
    printf("\nTotal nilai masak 2 adalah: %d",sum);

    // Output hasil penilaian

    /*
    Juru masak 1 = total
    Juru masak 2 = sum
    */

   printf("\n\nHasil pertandingannya adalah :");
    if(total > sum){
        printf("Juru masak 1 menang!");
    }else if(total < sum){
        printf("Juru masak 2 menang!");
    }else if(total == sum){
        printf("Pertandingan seri!");
    }
    return 0;
}
