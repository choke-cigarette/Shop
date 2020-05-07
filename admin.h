#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "korisnik.h"
#include "radnja.h"
#include "kupac.h"
#include "artikal.h"

class Admin : Korisnik{
    private:
        Radnja *radnoMesto;
        FILE *podaci, *istorijaPromena;
    public:
        Admin();
        Admin(Radnja&, FILE *, FILE *);
        Admin(Admin&);
        Radnja* getRadnoMesto()const;
		void setRadnoMesto(Radnja*);
		FILE* getPodaci()const;
		void setPodaci(FILE*);
		FILE* getIstorijaPromena()const;
		void setIstorijaPromena(FILE*);
};

Admin::Admin(){
    radnoMesto = nullptr;
    podaci = nullptr;
    istorijaPromena = nullptr;
}

Admin::Admin(Radnja &r, FILE *p, FILE *i){
    radnoMesto = &r;
    podaci = p;
    istorijaPromena = i;
}

Admin::Admin(Admin &a){
    radnoMesto = a.radnoMesto;
    podaci = a.podaci;
    istorijaPromena = a.istorijaPromena;
}


Radnja* Admin::getRadnoMesto()const{
	return radnoMesto;
}

void Admin::setRadnoMesto(Radnja* a){
	radnoMesto = a;
}

FILE* Admin::getPodaci()const{
	return podaci;
}

void Admin::setPodaci(FILE* a){
	podaci = a;
}

FILE* Admin::getIstorijaPromena()const{
	return istorijaPromena;
}

void Admin::setIstorijaPromena(FILE* a){
	istorijaPromena = a;
}

#endif // ADMIN_H_INCLUDED
