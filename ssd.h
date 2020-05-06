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
        short kapacitet, brzinaCitanja, brzinaPisanja, debljina;
    public:
        SSD();
        SSD(TipInterfejsa, string, string, string, short, short, short, short, float, string, string, short, bool, bool, FILE *);
        SSD(SSD&);
        TipInterfejsa getInterfejs()const;
		void setInterfejs(TipInterfejsa);
		string getFormat()const;
		void setFormat(string);
		string getNANDflash()const;
		void setNANDflash(string);
		string getKontroler()const;
		void setKontroler(string);
		short getKapacitet()const;
		void setKapacitet(short);
		short getBrzinaCitanja()const;
		void setBrzinaCitanja(short);
		short getBrzinaPisanja()const;
		void setBrzinaPisanja(short);
		short getDebljina()const;
		void setDebljina(short);
        virtual void ispisiBitno();
        SSD& operator=(const SSD&);
};

SSD::SSD() : Artikal(){
    interfejs = SATA;
    format = "";
    NANDflash = "";
    kontroler = "";
    kapacitet = 0;
    brzinaCitanja = 0;
    brzinaPisanja = 0;
    debljina = 0;
}

SSD::SSD(TipInterfejsa i, string fo, string na, string k, short ka, short bc, short bp, short de, float c, string m, string n, short a, bool s, bool d, FILE *f) : Artikal(c, m, n, a, s, d, f){
    interfejs = i;
    format = fo;
    NANDflash = na;
    kontroler = k;
    kapacitet = ka;
    brzinaCitanja = bc;
    brzinaPisanja = bp;
    debljina = de;
}

SSD::SSD(SSD &s) : Artikal(s.getCena(), s.getProizvodjac(), s.getNazivArtikla(), s.getAkcija(), s.imaLiNaStanju(), s.imaLiBesplatnuDostavu(), s.getSlika()->getFajl()){
    interfejs = s.interfejs;
    format = s.format;
    NANDflash = s.NANDflash;
    kontroler = s.kontroler;
    kapacitet = s.kapacitet;
    brzinaCitanja = s.brzinaCitanja;
    brzinaPisanja = s.brzinaPisanja;
    debljina = s.debljina;
}

TipInterfejsa SSD::getInterfejs()const{
	return interfejs;
}

void SSD::setInterfejs(TipInterfejsa a){
	interfejs = a;
}
string SSD::getFormat()const{
	return format;
}

void SSD::setFormat(string a){
	format = a;
}

string SSD::getNANDflash()const{
	return NANDflash;
}

void SSD::setNANDflash(string a){
	NANDflash = a;
}

string SSD::getKontroler()const{
	return kontroler;
}

void SSD::setKontroler(string a){
	kontroler = a;
}

short SSD::getKapacitet()const{
	return kapacitet;
}

void SSD::setKapacitet(short a){
	kapacitet = a;
}

short SSD::getBrzinaCitanja()const{
	return brzinaCitanja;
}

void SSD::setBrzinaCitanja(short a){
	brzinaCitanja = a;
}

short SSD::getBrzinaPisanja()const{
	return brzinaPisanja;
}

void SSD::setBrzinaPisanja(short a){
	brzinaPisanja = a;
}

short SSD::getDebljina()const{
	return debljina;
}

void SSD::setDebljina(short a){
	debljina = a;
}

void SSD::ispisiBitno(){
    cout << "\tTip interfejsa: ";
    switch(interfejs){
    case SATA:
        cout << "SATA";
        break;
    case PCIE:
        cout << "PCI-E";
        break;
    case USB:
        cout << "USB";
        break;
    case MSATA:
        cout << "mSATA";
        break;
    case M2:
        cout << "M.2";
    }
    cout << endl;
    cout << "\tFormat: " << format << endl;
    cout << "\tNANDflash: " << NANDflash << endl;
    cout << "\tKontroler: " << kontroler << endl;
    cout << "\tKapacitet: " << kapacitet << endl;
    cout << "\tBrzina citanja: " << brzinaCitanja << endl;
    cout << "\tBrzina pisanja: " << brzinaPisanja << endl;
    cout << "\tDebljina: " << debljina << endl;
}

SSD& SSD::operator=(const SSD &s){
    getSlika()->setFajl(s.getSlika()->getFajl());
    getSlika()->setProsla(s.getSlika()->getProsla());
    getSlika()->setSledeca(s.getSlika()->getSledeca());
    setCena(s.getCena());
    setOcena(s.getOcena());
    setBrOcena(s.getBrOcena());
    setProizvodjac(s.getProizvodjac());
    setNaziv(s.getNazivArtikla());
    setAkcija(s.getAkcija());
    setNaStanju(s.imaLiNaStanju());
    setBesplatnaDostava(s.imaLiBesplatnuDostavu());
    interfejs = s.interfejs;
    format = s.format;
    NANDflash = s.NANDflash;
    kontroler = s.kontroler;
    kapacitet = s.kapacitet;
    brzinaCitanja = s.brzinaCitanja;
    brzinaPisanja = s.brzinaPisanja;
    debljina = s.debljina;
}

#endif // SSD_H_INCLUDED
