#ifndef MESINABSTRAK_C
#define MESINABSTRAK_C

#include <stdio.h>
#include "MesinAbstrak.h"

char PitaKarakter[255] = "input.txt";
static FILE *myFile;
static int retval;
char String[255];
int i=0;

void START()
{
    myFile = fopen(PitaKarakter, "r");
    retval = fscanf(myFile, "%c", &CC);
    
}

int EOP()
{ //mengecek apakah benar udah selesai (CC==MARK)
    return (CC == MARK);
}

void GETCC()
{
    String[0] = CC;
    printf("%c", String[0]);
    i++;
}

void INC()
{
    retval = fscanf(myFile, "%c", &CC);
    // printf("%c", CC);

    if (EOP())
    {
        fclose(myFile);
    }
}


#endif