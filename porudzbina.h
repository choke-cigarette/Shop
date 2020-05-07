#ifndef PORUDZBINA_H_INCLUDED
#define PORUDZBINA_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"

class Porudzbina{
    private:
        Artikal *artikal;
        short brojKupljenih;
        string adresa, datum;
    public:
        Porudzbina();
        Porudzbina(Artikal&, short, string, string);
        Porudzbina(Porudzbina&);
        short getBrojKupljenih()const;
		void setBrojKupljenih(short);
		string getAdresa()const;
		void setAdresa(string);
		string getDatum()const;
		void setDatum(string);
		Porudzbina& operator=(const Porudzbina&);
};

Porudzbina::Porudzbina(){
    artikal = nullptr;
    brojKupljenih = 0;
    adresa = "";
    datum = "";
}

Porudzbina::Porudzbina(Artikal &a, short b, string ad, string d){
    artikal = &a;
    brojKupljenih = b;
    adresa = ad;
    datum = d;
}

Porudzbina::Porudzbina(Porudzbina &p){
    artikal = p.artikal;
    brojKupljenih = p.brojKupljenih;
    adresa = p.adresa;
    datum = p.datum;
}

short Porudzbina::getBrojKupljenih()const{
	return brojKupljenih;
}

void Porudzbina::setBrojKupljenih(short a){
	brojKupljenih = a;
}

string Porudzbina::getAdresa()const{
	return adresa;
}

void Porudzbina::setAdresa(string a){
	adresa = a;
}

string Porudzbina::getDatum()const{
	return datum;
}

void Porudzbina::setDatum(string a){
	datum = a;
}

Porudzbina& Porudzbina::operator=(const Porudzbina &p){
    artikal = p.artikal;
    brojKupljenih = p.brojKupljenih;
    adresa = p.adresa;
    datum = p.datum;
}

ostream& operator<<(ostream &o, const Porudzbina &p){
    o << "\tBroj narucenih artikala: " << p.getBrojKupljenih() << endl;
    o << "\tAdresa na koju stizu: " << p.getAdresa() << endl;
    o << "\tDatum kupovine: " << p.getDatum() << endl;
}

#endif // PORUDZBINA_H_INCLUDED
