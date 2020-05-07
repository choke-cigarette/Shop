#ifndef ZICNE_H_INCLUDED
#define ZICNE_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "slusalice.h"

class ZicneSlusalice : public Slusalice{
    private:
        string pozicijaMikrofona;
        short duzinaKabla;
    public:
        ZicneSlusalice();
        ZicneSlusalice(string, short, TipSistema, string, string, short, short, short, bool, float, string, string, short, bool, bool, FILE *);
        ZicneSlusalice(ZicneSlusalice&);
        string getPozicijaMikrofona()const;
		void setPozicijaMikrofona(string);
		short getDuzinaKabla()const;
		void setDuzinaKabla(short);
		virtual void ispisiBitno();
};

ZicneSlusalice::ZicneSlusalice() : Slusalice(){
    pozicijaMikrofona = "";
    duzinaKabla = 0;
}

ZicneSlusalice::ZicneSlusalice(string pm, short du, TipSistema si, string fr, string p, short pr, short o, short i, bool mi,
float c, string m, string n, short a, bool s, bool d, FILE *f) : Slusalice(si, fr, p, pr, o, i, mi, c, m, n, a, s, d, f){
    pozicijaMikrofona = pm;
    duzinaKabla = du;
}

ZicneSlusalice::ZicneSlusalice(ZicneSlusalice &z) : Slusalice(z.sistem, z.frekventniOdziv, z.povezivanje, z.precnikZvucnika, z.osetljivost, z.impedansa, z.mikrofon,
z.getCena(), z.getProizvodjac(), z.getNazivArtikla(), z.getAkcija(), z.imaLiNaStanju(), z.imaLiBesplatnuDostavu(), z.getSlika()->getFajl()){
    pozicijaMikrofona = z.pozicijaMikrofona;
    duzinaKabla = z.duzinaKabla;
}

string ZicneSlusalice::getPozicijaMikrofona()const{
	return pozicijaMikrofona;
}

void ZicneSlusalice::setPozicijaMikrofona(string a){
	pozicijaMikrofona = a;
}

short ZicneSlusalice::getDuzinaKabla()const{
	return duzinaKabla;
}

void ZicneSlusalice::setDuzinaKabla(short a){
	duzinaKabla = a;
}

void ZicneSlusalice::ispisiBitno(){
    cout << "\tDuzina kabla: " << duzinaKabla << endl;
    cout << "\tPozicija mikrofona: " << pozicijaMikrofona << endl;
}

#endif // ZICNE_H_INCLUDED
