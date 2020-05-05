#ifndef HDD_H_INCLUDED
#define HDD_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"

enum TipHardDiska{INTERNI, EKSTERNI};

enum TipKonekcije{IDE, _SATA, SCSI};

class HDD : public Artikal{
    private:
        TipHardDiska tip;
        TipKonekcije konekcija;
        string format;
        short kapacitet, brojObrtaja, bafer;
    public:


};


#endif // HDD_H_INCLUDED
