/*Nama File 	: DNAKambingDinamis*/
/*Deskripsi 	: membuat DNA Kambing dengan array dinamis*/
/*Pembuat   	: Rhadiyyah Ariana Saraswati*/
/*Tgl Pembuatan	: 29 Maret 2022 */

int main(){
    /* Kamus */
    int i,j,N,k,saudara,tidaksaudara;
    int *dna;

    /* Algoritma */
    printf("Masukkan jumlah kambing = ");
    scanf("%d",&N);
    dna = (int *)malloc(N*sizeof(int));
    
    saudara = 0;
    tidaksaudara = 0;
    
    if(N>0){
        for(i=1;i<=N;i++){
            printf("Masukkan Kambing %d : ",i);
            scanf("%d",dna+i);
        }
        for(j=N;j>1;j--){
            for(k=1;k<j;k++){
                if(abs(*(dna+j)-(*(dna+k)))<3){
                    saudara++;
                }
                else{
                    tidaksaudara++;
                }
            }
        }
        printf("Jumlah Kambing yang bersaudara = %d \n", saudara);
        printf("Jumlah Kambing yang tidak bersaudara = %d \n",tidaksaudara);
    } else{
        printf("Input yang dimasukkan tidak benar, masukan input lain");
    }
    return 0;
}
