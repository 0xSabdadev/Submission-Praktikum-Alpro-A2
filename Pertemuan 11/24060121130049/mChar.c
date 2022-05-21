#include <stdio.h>
#include "mChar.h"

char pita_karakter[100] = "pitakarakter.txt";
static FILE *fileku;
static int retval;

void START() {
    fileku = fopen(pita_karakter,"r");
    retval = fscanf(fileku,"%c",&GETCC);
    printf("%c",GETCC);
}

int EOP() {
    return (GETCC==MARK);
}

void INC() {
    retval = fscanf(fileku,"%c",&GETCC);
    printf("%c",GETCC);

    if(EOP()) {
        fclose(fileku);
    }

}
