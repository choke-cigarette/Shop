#ifndef RAM_H_INCLUDED
#define RAM_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"

enum TipRAMa{_DDR1, _DDR2, _DDR3, _DDR4};

class RAM : public Artikal{
    private:
        TipRAMa memorija;
        short kapacitet, maksimalnaFrekvencija, latencija;
        float voltaza;
    public:
        RAM();
        RAM(TipRAMa, short, short, short, float, float, string, string, short, bool, bool, FILE *);
        RAM(RAM &);
        TipRAMa getMemorija()const;
        short getKapacitet()const;
        short getFrekvencija()const;
        short getLatencija()const;
        float getVoltaza()const;
        void setMemorija(TipRAMa);
        void setKapacitet(short);
        void setFrekvencija(short);
        void setLatencija(short);
        void setVoltaza(float);
};

RAM::RAM() : Artikal(){
    memorija = _DDR3;
    kapacitet = 0;
    maksimalnaFrekvencija = 0;
    latencija = 0;
    voltaza = 0;
}

RAM::RAM(TipRAMa m, short k, short fr, short l, float v, float c, string ma, string na, short a, bool sa, bool da, FILE *f) : Artikal(c, ma, na, a, sa, da, f){
    memorija = m;
    kapacitet = k;
    maksimalnaFrekvencija = fr;
    latencija = l;
    voltaza = v;
}

RAM::RAM(RAM &r) : Artikal(r.getCena(), r.getProizvodjac(), r.getNazivArtikla(), r.getAkcija(), r.imaLiNaStanju(), r.imaLiBesplatnuDostavu(), r.getSlika()->getFajl()){
    memorija = r.memorija;
    kapacitet = r.kapacitet;
    maksimalnaFrekvencija = r.maksimalnaFrekvencija;
    latencija = r.latencija;
    voltaza = r.voltaza;
}

TipRAMa RAM::getMemorija()const{
    return memorija;
}

short RAM::getKapacitet()const{
    return kapacitet;
}

short RAM::getFrekvencija()const{
    return maksimalnaFrekvencija;
}

short RAM::getLatencija()const{
    return latencija;
}

float RAM::getVoltaza()const{
    return voltaza;
}

void RAM::setMemorija(TipRAMa m){
    memorija = m;
}

void RAM::setKapacitet(short k){
    kapacitet = k;
}

void RAM::setFrekvencija(short fr){
    maksimalnaFrekvencija = fr;
}

void RAM::setLatencija(short l){
    latencija = l;
}

void RAM::setVoltaza(float v){
    voltaza = v;
}


#endif // RAM_H_INCLUDED
