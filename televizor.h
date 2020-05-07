#ifndef TELEVIZOR_H_INCLUDED
#define TELEVIZOR_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"

enum TipTelevizora{LED, LCD, OLED, PLASMA};

class Televizor : public Artikal{
    private:
        TipTelevizora tip;
        short dijagonala, osvetljenje, osvezavanje;
        float vremeOdziva;
        string rezolucija, digitalniTjuner, slikaTelevizora, zvuk, portovi, ostalo;
    public:
        Televizor();
        Televizor(TipTelevizora, short, short, short, float, string, string, string, string, string, string, float, string, string, short, bool, bool, FILE *);
        Televizor(Televizor&);
        TipTelevizora getTip()const;
		void setTip(TipTelevizora);
		short getDijagonala()const;
		void setDijagonala(short);
		short getOsvetljenje()const;
		void setOsvetljenje(short);
        short getOsvezavanje()const;
		void setOsvezavanje(short);
		float getVremeOdziva()const;
		void setVremeOdziva(float);
		string getRezolucija()const;
		void setRezolucija(string);
		string getDigitalniTjuner()const;
		void setDigitalniTjuner(string);
		string getSlikaTelevizora()const;
		void setSlikaTelevizora(string);
		string getZvuk()const;
		void setZvuk(string);
		string getPortovi()const;
		void setPortovi(string);
		string getOstalo()const;
		void setOstalo(string);
		virtual void ispisiBitno();
};

Televizor::Televizor() : Artikal(){
    tip = LCD;
    dijagonala = 0;
    osvetljenje = 0;
    osvezavanje = 0;
    vremeOdziva = 0;
    rezolucija = "";
    digitalniTjuner = "";
    slikaTelevizora = "";
    zvuk = "";
    portovi = "";
    ostalo = "";
}

Televizor::Televizor(TipTelevizora t, short di, short o, short osvez, float v, string r, string tj, string sl, string z, string p, string ost,
float c, string m, string n, short a, bool s, bool d, FILE *f) : Artikal(c, m, n, a, s, d, f){
    tip = t;
    dijagonala = di;
    osvetljenje = o;
    osvezavanje = osvez;
    vremeOdziva = v;
    rezolucija = r;
    digitalniTjuner = tj;
    slikaTelevizora = sl;
    zvuk = z;
    portovi = p;
    ostalo = ost;
}

Televizor::Televizor(Televizor &t) : Artikal(t.getCena(), t.getProizvodjac(), t.getNazivArtikla(), t.getAkcija(), t.imaLiNaStanju(), t.imaLiBesplatnuDostavu(), t.getSlika()->getFajl()){
    tip = t.tip;
    dijagonala = t.dijagonala;
    osvetljenje = t.osvetljenje;
    osvezavanje = t.osvezavanje;
    vremeOdziva = t.vremeOdziva;
    rezolucija = t.rezolucija;
    digitalniTjuner = t.digitalniTjuner;
    slikaTelevizora = t.slikaTelevizora;
    zvuk = t.zvuk;
    portovi = t.portovi;
    ostalo = t.ostalo;
}

TipTelevizora Televizor::getTip()const{
	return tip;
}

void Televizor::setTip(TipTelevizora a){
	tip = a;
}

short Televizor::getDijagonala()const{
	return dijagonala;
}

void Televizor::setDijagonala(short a){
	dijagonala = a;
}

short Televizor::getOsvetljenje()const{
	return osvetljenje;
}

void Televizor::setOsvetljenje(short a){
	osvetljenje = a;
}

short Televizor::getOsvezavanje()const{
	return osvezavanje;
}

void Televizor::setOsvezavanje(short a){
	osvezavanje = a;
}

float Televizor::getVremeOdziva()const{
	return vremeOdziva;
}

void Televizor::setVremeOdziva(float a){
	vremeOdziva = a;
}

string Televizor::getRezolucija()const{
	return rezolucija;
}

void Televizor::setRezolucija(string a){
	rezolucija = a;
}

string Televizor::getDigitalniTjuner()const{
	return digitalniTjuner;
}

void Televizor::setDigitalniTjuner(string a){
	digitalniTjuner = a;
}

string Televizor::getSlikaTelevizora()const{
	return slikaTelevizora;
}

void Televizor::setSlikaTelevizora(string a){
	slikaTelevizora = a;
}

string Televizor::getZvuk()const{
	return zvuk;
}

void Televizor::setZvuk(string a){
	zvuk = a;
}

string Televizor::getPortovi()const{
	return portovi;
}

void Televizor::setPortovi(string a){
	portovi = a;
}

string Televizor::getOstalo()const{
	return ostalo;
}

void Televizor::setOstalo(string a){
	ostalo = a;
}

void Televizor::ispisiBitno(){
    cout << "\tTip ekrana: ";
    switch(tip){
    case LCD:
        cout<< "LCD";
        break;
    case PLASMA:
        cout<< "PLASMA";
        break;
    case OLED:
        cout<< "OLED";
        break;
    case LED:
        cout<< "LED";
    }
    cout << endl;
    cout << "\tDijagonala ekrana: " << dijagonala << endl;
    cout << "\tRezolucija: " << rezolucija << endl;
    cout << "\tDigitalni tjuner: " << digitalniTjuner << endl;
}

ostream& operator<<(ostream &o, const Televizor &t){
    o << endl << "\tNaziv televizora: " << t.getNazivArtikla() << endl;
    o << "\tCena televizora: " << t.getCena() << "rsd" << endl;
    o << "\tAkcija: " << t.getAkcija() << "%" << endl;
    o << "\tTip ekrana: ";
    switch(t.getTip()){
    case LCD:
        o << "LCD";
        break;
    case PLASMA:
        o << "PLASMA";
        break;
    case OLED:
        o << "OLED";
        break;
    case LED:
        o << "LED";
    }
    o << endl;
    o << "\tDijagonala ekrana: " << t.getDijagonala() << endl;
    o << "\tRezolucija: " << t.getRezolucija() << endl;
    o << "\tDigitalni tjuner: " << t.getDigitalniTjuner() << endl;
}

#endif // TELEVIZOR_H_INCLUDED
