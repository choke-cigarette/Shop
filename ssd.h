#ifndef SSD_H_INCLUDED
#define SSD_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"

enum TipInterfejsa{SATA, PCIE, USB, MSATA, M2};

class SSD : public Artikal{
    private:
        TipInterfejsa interfejs;
        string format, NANDflash, kontroler;
        short kapacitet, brzineCitanja, brzinaPisanja, debljina;
    public:
};


#endif // SSD_H_INCLUDED
