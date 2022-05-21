/*Nama File 	: countingSortDesc.c*/
/*Deskripsi 	: membuat program mengurutkan angka ( terbesar ke terkecil ) menggunakan counting sort*/
/*Pembuat   	: Rhadiyyah Ariana Saraswati - 24060121140113*/
/*Tgl Pembuatan	: 27-04-2022 */

#include <stdio.h> /*header file*/
  
int main(){    
    //Kamus Lokal 
	int i, j;   
    int arr[] = {8,7,3,9,1,5,2};     
    int temp = 0;    
        
    //Panjang array arr  
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Algoritma   
    printf("===Sebelum=== \n");    
    for (i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    //Logic 
    for (i = 0; i < length; i++) {     
        for (j = i+1; j < length; j++) {     
           if(arr[i] < arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
    printf("\n");  
	  
    //Sesudah   
    printf("===Sesudah===\n");    
    for (i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    