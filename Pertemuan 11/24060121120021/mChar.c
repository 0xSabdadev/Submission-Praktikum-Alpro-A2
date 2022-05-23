#ifndef MESINKAR_C
#define MESINKAR_C

#include <stdio.h>
#include "mChar.h"

char pitaKarakter[100] = "pitakarakter.txt";
static FILE *FILEKU;
static int retval; //menyimpan hasil scan berhasiil apa tidak

void START()
{
    FILEKU = fopen(pitaKarakter, "r");
    retval = fscanf(FILEKU, "%c", &CC);
    printf("%c", CC);
}

int EOP()
{ //mengecek apakah benar udah selese (CC==MARK)
    return (CC == MARK);
}

void ADV()
{
    retval = fscanf(FILEKU, " %c", &CC);
    printf("%c", CC);

    if (EOP())
    {
        fclose(FILEKU);
    }
}

void INC(){
    retval = fscanf(FILEKU, "%c", &CC);
    printf("%c", CC);
}


#endif