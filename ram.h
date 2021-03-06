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
        virtual void ispisiBitno();
        RAM& operator=(const RAM&);
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

void RAM::ispisiBitno(){
    cout << "\tTip memorije: ";
    switch(memorija){
    case _DDR1:
        cout << "DDR1";
        break;
    case _DDR2:
        cout << "DDR2";
        break;
    case _DDR3:
        cout << "DDR3";
        break;
    case _DDR4:
        cout << "DDR4";
    }
    cout << endl;
    cout << "\tKapacitet: " << kapacitet << endl;
    cout << "\tMaksimalna frekvencija: " << maksimalnaFrekvencija << endl;
    cout << "\tLatencija: " << latencija << endl;
    cout << "\tVoltaza: " << voltaza << endl;
}

RAM& RAM::operator=(const RAM &r){
    getSlika()->setFajl(r.getSlika()->getFajl());
    getSlika()->setProsla(r.getSlika()->getProsla());
    getSlika()->setSledeca(r.getSlika()->getSledeca());
    setCena(r.getCena());
    setOcena(r.getOcena());
    setBrOcena(r.getBrOcena());
    setProizvodjac(r.getProizvodjac());
    setNaziv(r.getNazivArtikla());
    setAkcija(r.getAkcija());
    setNaStanju(r.imaLiNaStanju());
    setBesplatnaDostava(r.imaLiBesplatnuDostavu());
    memorija = r.memorija;
    kapacitet = r.kapacitet;
    maksimalnaFrekvencija = r.maksimalnaFrekvencija;
    latencija = r.latencija;
    voltaza = r.voltaza;
}

#endif // RAM_H_INCLUDED
