#ifndef KUPAC_H_INCLUDED
#define KUPAC_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "korisnik.h"
#include "porudzbina.h"
#include "list.hpp"


class Kupac : public Korisnik{
    private:
        string telefon;
        float novacNaRaspolaganju;
        List<Porudzbina> listaPorudzbina;
    public:
        Kupac();
        Kupac(string, float, string, string, string, string);
        Kupac(Kupac&);
        string getTelefon()const;
		void setTelefon(string);
		float getNovacNaRaspolaganju()const;
		void setNovacNaRaspolaganju(float);
		bool poruci(Artikal&, short, string, string);
};

Kupac::Kupac() : Korisnik(), listaPorudzbina(){
    telefon = "";
    novacNaRaspolaganju = 0;
}

Kupac::Kupac(string t, float n, string i, string p, string e, string pa) : Korisnik(i, p, e, pa), listaPorudzbina(){
    telefon = t;
    novacNaRaspolaganju = n;
}

Kupac::Kupac(Kupac &k) : Korisnik(k.getIme(), k.getPrezime(), k.getEmail(), k.getPassword()), listaPorudzbina(k.listaPorudzbina){
    telefon = k.telefon;
    novacNaRaspolaganju = k.novacNaRaspolaganju;
}

string Kupac::getTelefon()const{
	return telefon;
}

void Kupac::setTelefon(string a){
	telefon = a;
}

float Kupac::getNovacNaRaspolaganju()const{
	return novacNaRaspolaganju;
}

void Kupac::setNovacNaRaspolaganju(float a){
	novacNaRaspolaganju = a;
}

bool Kupac::poruci(Artikal &a, short brojPorucenih, string adresa, string datum){
    short i = brojPorucenih;
    if(a.imaLiNaStanju() && novacNaRaspolaganju >= brojPorucenih * a.getCena() * (100 - a.getAkcija()) / 100){
        while(a.imaLiNaStanju() && i > 0){
            a.kupi();
            i--;
        }
        Porudzbina p(a, brojPorucenih - i, adresa, datum);
        listaPorudzbina.add(1, p);
        return true;
    }
    return false;
}

#endif // KUPAC_H_INCLUDED
