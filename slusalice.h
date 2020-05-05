#ifndef SLUSALICE_H_INCLUDED
#define SLUSALICE_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"

enum TipSistema{MONO, STEREO};

class Slusalice : public Artikal{
    private:
        TipSistema sistem;
        string frekventniOdziv, povezivanje;
        short precnikZvucnika, osetljivost, impedansa;
        bool mikrofon;
    public:

};


#endif // SLUSALICE_H_INCLUDED
