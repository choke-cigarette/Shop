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
        Slusalice();
        Slusalice(TipSistema, string, string, short, short, short, bool, float, string, string, short, bool, bool, FILE *);
        TipSistema getSistem()const;
		void setSistem(TipSistema);
		string getFrekventniOdziv()const;
		void setFrekventniOdziv(string);
		string getPovezivanje()const;
		void setPovezivanje(string);
		short getPrecnikZvucnika()const;
		void setPrecnikZvucnika(short);
		short getOsetljivost()const;
		void setOsetljivost(short);
		short getImpedansa()const;
		void setImpedansa(short);
		bool getMikrofon()const;
		void setMikrofon(bool);
};

Slusalice::Slusalice() : Artikal(){
    sistem = STEREO;
    frekventniOdziv = "";
    povezivanje = "";
    precnikZvucnika = 0;
    osetljivost = 0;
    impedansa = 0;
    mikrofon = true;
}

Slusalice::Slusalice(TipSistema si, string fr, string p, short pr, short o, short i, bool mi,
float c, string m, string n, short a, bool s, bool d, FILE *f) : Artikal(c, m, n, a, s, d, f){
    sistem = si;
    frekventniOdziv = fr;
    povezivanje = p;
    precnikZvucnika = pr;
    osetljivost = o;
    impedansa = i;
    mikrofon = mi;
}

TipSistema Slusalice::getSistem()const{
	return sistem;
}

void Slusalice::setSistem(TipSistema a){
	sistem = a;
}
string Slusalice::getFrekventniOdziv()const{
	return frekventniOdziv;
}

void Slusalice::setFrekventniOdziv(string a){
	frekventniOdziv = a;
}

string Slusalice::getPovezivanje()const{
	return povezivanje;
}

void Slusalice::setPovezivanje(string a){
	povezivanje = a;
}

short Slusalice::getPrecnikZvucnika()const{
	return precnikZvucnika;
}

void Slusalice::setPrecnikZvucnika(short a){
	precnikZvucnika = a;
}

short Slusalice::getOsetljivost()const{
	return osetljivost;
}

void Slusalice::setOsetljivost(short a){
	osetljivost = a;
}

short Slusalice::getImpedansa()const{
	return impedansa;
}

void Slusalice::setImpedansa(short a){
	impedansa = a;
}

bool Slusalice::getMikrofon()const{
	return mikrofon;
}

void Slusalice::setMikrofon(bool a){
	mikrofon = a;
}

#endif // SLUSALICE_H_INCLUDED
