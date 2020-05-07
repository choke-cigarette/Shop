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
        Artikal* getArtikal(List<Artikal>, short);
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



#endif // ADMIN_H_INCLUDED
