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
        HDD();
        HDD(TipHardDiska, TipKonekcije, string, short, short, short, float, string, string, short, bool, bool, FILE *);
        HDD(HDD&);
        TipHardDiska getTip()const;
		void setTip(TipHardDiska);
		TipKonekcije getKonekcija()const;
		void setKonekcija(TipKonekcije);
		string getFormat()const;
		void setFormat(string);
		short getKapacitet()const;
		void setKapacitet(short);
		short getBrojObrtaja()const;
		void setBrojObrtaja(short);
		short getBafer()const;
		void setBafer(short);
		virtual void ispisiBitno();
};

HDD::HDD() : Artikal(){
    tip = INTERNI;
    konekcija = _SATA;
    format = "";
    kapacitet = 0;
    brojObrtaja = 0;
    bafer = 0;
}
HDD::HDD(TipHardDiska h, TipKonekcije k, string fo, short ka, short b, short ba, float c, string m, string n, short a, bool s, bool d, FILE *f)
: Artikal(c, m, n, a, s, d, f){
    tip = h;
    konekcija = k;
    format = fo;
    kapacitet = ka;
    brojObrtaja = b;
    bafer = ba;
}

HDD::HDD(HDD &h) : Artikal(h.getCena(), h.getProizvodjac(), h.getNazivArtikla(), h.getAkcija(), h.imaLiNaStanju(), h.imaLiBesplatnuDostavu(), h.getSlika()->getFajl()){
    tip = h.tip;
    konekcija = h.konekcija;
    format = h.format;
    kapacitet = h.kapacitet;
    brojObrtaja = h.brojObrtaja;
    bafer = h.bafer;
}

TipHardDiska HDD::getTip()const{
	return tip;
}

void HDD::setTip(TipHardDiska a){
	tip = a;
}

TipKonekcije HDD::getKonekcija()const{
	return konekcija;
}

void HDD::setKonekcija(TipKonekcije a){
	konekcija = a;
}

string HDD::getFormat()const{
	return format;
}

void HDD::setFormat(string a){
	format = a;
}

short HDD::getKapacitet()const{
	return kapacitet;
}

void HDD::setKapacitet(short a){
	kapacitet = a;
}

short HDD::getBrojObrtaja()const{
	return brojObrtaja;
}

void HDD::setBrojObrtaja(short a){
	brojObrtaja = a;
}

short HDD::getBafer()const{
	return bafer;
}

void HDD::setBafer(short a){
	bafer = a;
}

void HDD::ispisiBitno(){
    cout << "\tTip hard diska: " << ((tip == INTERNI) ? "interni" : "eksterni")<< endl;
    cout << "\tTip konekcije: ";
    switch(konekcija){
    case _SATA:
        cout << "SATA";
        break;
    case IDE:
        cout << "IDE";
        break;
    case SCSI:
        cout << "SCSI";
    }
    cout << endl;
    cout << "\tFormat: " << format << endl;
    cout << "\tKapacitet: " << kapacitet << endl;
    cout << "\tBroj obrtaja: " << brojObrtaja << endl;
    cout << "\tBafer: " << bafer << endl;
}

#endif // HDD_H_INCLUDED
