#ifndef DESKTOP_H_INCLUDED
#define DESKTOP_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "racunar.h"

class Desktop : public Racunar{
    private:
        string kuciste, napajanje, svetla;
    public:
        Desktop();
        Desktop(string, string, string, RAM, HDD, SSD, Maticna, Graficka, Procesor, string, bool, float, string, string, short, bool, bool, FILE*);
        Desktop(Desktop&);
        string getKuciste()const;
		void setKuciste(string);
		string getNapajanje()const;
		void setNapajanje(string);
        string getSvetla()const;
		void setSvetla(string);
        virtual void ispisiBitno();
        virtual bool gamingApproved();
};

Desktop::Desktop() : Racunar(){
    kuciste = "";
    napajanje = "";
    svetla = "";
}

Desktop::Desktop(string k, string n, string sv, RAM r, HDD h, SSD s, Maticna m, Graficka g, Procesor p,
string os, bool o, float a, string b, string c, short d, bool e, bool q, FILE *f) :
Racunar(r, h, s, m, g, p, os, o, a, b, c, d, e, q, f){
    kuciste = k;
    napajanje = n;
    svetla = sv;
}

Desktop::Desktop(Desktop &d) : Racunar(d.ram, d.hdd, d.ssd, d.maticna, d.gpu, d.cpu, d.OS,
d.optickiUredjaj, d.getCena(), d.getProizvodjac(), d.getNazivArtikla(), d.getAkcija(),
d.imaLiNaStanju(), d.imaLiBesplatnuDostavu(), d.getSlika()->getFajl()){
    kuciste = d.kuciste;
    napajanje = d.napajanje;
    svetla = d.svetla;
}

string Desktop::getKuciste()const{
	return kuciste;
}

void Desktop::setKuciste(string a){
	kuciste = a;
}

string Desktop::getNapajanje()const{
	return napajanje;
}

void Desktop::setNapajanje(string a){
	napajanje = a;
}

string Desktop::getSvetla()const{
	return svetla;
}

void Desktop::setSvetla(string a){
	svetla = a;
}

void Desktop::ispisiBitno(){
    cout << "\tKuciste: " << kuciste << endl;
    cout << "\tNapajanje: " << napajanje << endl;
    cout << "\tSvetla: " << svetla << endl;
}

bool Desktop::gamingApproved(){
    if(svetla != "" && svetla != "nema" && gpu.getKolicinaMemorije() >= 4 && ram.getKapacitet() >= 8 && hdd.getKapacitet() > 1000 && ssd.getKapacitet() > 100){
        return true;
    }
    return false;
}

#endif // DESKTOP_H_INCLUDED
