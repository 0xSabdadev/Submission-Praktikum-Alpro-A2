#ifndef MCHAR_H_INCLUDED
#define MCHAR_H_INCLUDED
#endif

#ifndef MARK
#define MARK '.'
#endif

char CC; //definisi states

void START();
//I.S : Sembarang
// F.S : CC adalah karakter pertama pita
//      jika CC == MARK, EOP MENYALA(TRUE)
//      jika CC != MARK, EOP PADAM(FALSE)

void INC();
// I.S : CC!=MARK
// F.S : CC adalah karakter berikutnya
//      jika CC==MARK, EOP MENYALA(TRUE)

void ADV();
// I.S : CC!=MARK
// F.S : CC adalah karakter setelah spasi
//      jika CC==MARK, EOP MENYALA(TRUE)

void GETCC();

int EOP();
// true jika CC==MARK