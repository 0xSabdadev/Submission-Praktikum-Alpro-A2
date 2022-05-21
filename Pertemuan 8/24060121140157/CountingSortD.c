/*
Nama Program  : CountingSortD
Deskripsi     : Mengurutkan data dengan counting sort
Nama Pembuat  : Muhamad Aditya Yusuf Jatikusumo
NIM           : 24060121140157
Tanggal       : 13 April 2022
*/



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[10], B[10],C[100],k,n,j,i;

    // logic
    //Sebelum
    printf("===Sebelum===\n");
    k = 0; // max = 0
    printf("masukkan size array: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("index ke-%d = ",i);
        scanf("%d",&A[i]);
        if(A[i] > k ){
            k = A[i];
        }
    }
    printf("\n");
    printf("nilai k = %d\n",k); 
    //Logic
    for(i = 0;i<=k;i++){ 
        C[i] = 0;
    }
    for(j=1;j<=n;j++){
        C[A[j]] = C[A[j]]+1;
    }
    for(i=1;i<=k;i++){
        C[i] = C[i] + C[i-1];
    }
    for(j=n;j>=1;j--){
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] -1 ;
    }


    //Sesudah
    printf("===Sesudah===\n");
    for(i = n;i>=1;i--){
        printf("index = %d\n",B[i]);
    }
    return 0;
}