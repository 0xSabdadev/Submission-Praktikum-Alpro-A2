// Nama File      : countingSortDesc.c
//Dekscripsi      : Pengurutan array dari yang terbesar hingga yang terjecil menggunakan
//                  berbagai metode yaitu Bubble, Exchange, Counting, Selection, Insertion.
//Pembuat         : 24060121130069 - Ririn Indah Cahyani
//Tgl Pembuatanan : 


#include <stdio.h>
#include <stdlib.h>

//KAMUS GLOBAL
int N, i, j, temp;

//Catatan: untuk menampilkan sub programnya bisa di uncomment 
//deklrasasi subprogram pada main di bawah

//SUB PROGRAM BUBBLE SORTING
int BubbleSort(int N, int A[]){

    //Algoritma
    printf("\n=== BUBBLE SORTING ===");
    printf("\n--- Sebelum ---\n");
    for (i=0; i<N; i++){
        printf("%d ", A[i]);
    }

    //Logic
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            if(A[j] < A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }

        printf("\n\n--- Langkah ---\n");
        for (i=0; i<N; i++){
            printf("%d ", A[i]);
        }

    }

    printf("\n--- Setelah ---\n");
    for (i=0; i<N; i++){
        printf("%d ", A[i]);
    }

}


//SUB PROGRAM EXCHANGE SORTING
int ExchangeSort(int N, int B[]){

    //Algoritma
    printf("\n\n=== EXCHANGE SORTING ===");
    printf("\n--- Sebelum ---\n");
    for (i=0; i<N; i++){
        printf("%d ", B[i]);
    }

    //Logic
    for (i=0; i<N-1; i++){
        for (j=i+1; j<N; j++){
            if(B[i] < B[j]){
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    printf("\n--- Setelah ---\n");
    for (i=0; i<N; i++){
        printf("%d ", B[i]);
    }

}


//SUB PROGRAM COUNTING SORTING
int CountingSort(int N, int A[]){
    //Kamus Lokal
    int k=0;

    //Algoritma
    printf("\n\n=== COUNTING SORTING ===");
    printf("\n--- Sebelum ---\n");
    for (i=0; i<N; i++){
        printf("%d ", A[i]);
    }

    for(i=1; i<=N; i++){
        if(A[i] > k){
            k = A[i];
        }
    }

    //logic
    int B[15], C[100];

    //step 1
    for (j=1; j<=k; j++){
        C[j] = 0;
    }

    //step2
    for (i=1; i<=N; i++){
        C[A[i]] = C[A[i]] +1;
    }

    //step3s
    for (j=1; j<=k; j++){
        C[j] += C[j-1];
    }

    //step4
    for (i=0; i<N; i++){
        B[C[A[i]]] = A[i];
        C[A[i]] = C[A[i]] - 1;
    }


    printf("\n--- Setelah ---\n");
    for (j=0; j<N; j++){
        printf("%d ", B[j]);
    }

}


//SUB PROGRAM SELECTION SORTING
int SelectionSort(int N, int A[]){
    //Kamus Lokal
    int Select;

    //Algoritma
    printf("\n\n=== SELECTION SORTING ===");
    printf("\n--- Sebelum ---\n");
    for (i=0; i<N; i++){
        printf("%d ", A[i]);
    }

    //Logic
    for (i=0; i<N-1; i++){
        Select = i;
        for (j=i; j<N; j++){
            if (A[Select] < A[j]){
                Select = j;
            }
        }

        temp = A[i];
        A[i] = A[Select];
        A[Select] = temp;
    }

    printf("\n--- Setelah ---\n");
    for (j=0; j<N; j++){
        printf("%d ", A[j]);
    }
}


//SUB PROGRAM INSERTION SORTING
int InsertionSort(int N, int A[]){

    //Algoritma
    printf("\n\n=== INSERTION SORTING ===");
    printf("\n--- Sebelum ---\n");
    for (i=0; i<N; i++){
        printf("%d ", A[i]);
    }

    //Logic
    for (i=0; i<N; i++){
        for (j=i; j>0; j--){
            if (A[j] > A[j-1]){
                temp = A[i];
                A[i] = A[j-1];
                A[j-1] = temp;
            }
        }
        
    }

    printf("\n--- Setelah ---\n");
    for (j=0; j<N; j++){
        printf("%d ", A[j]);
    }
}

int main(void){

    //Algoritma
    printf("Masukan nilai N sebagai indeks : ");
    scanf("%d", &N);

    //Kamus Lokal
    int Arr[N];

    for (i=0; i<N; i++){
        printf("Masukan nilai [%d] : ", i);
        scanf("%d", &Arr[i]);
    }

    //Deklarasi Sub Program
    BubbleSort(N, Arr);
    //ExchangeSort(N, Arr);
    //CountingSort(N, Arr);
    //SelectionSort(N, Arr);
    //InsertionSort(N, Arr);

    return 0;
}