#ifndef BEZICNE_H_INCLUDED
#define BEZICNE_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "slusalice.h"

class BezicneSlusalice : public Slusalice{
    private:
        string kontrole;
        short kapacitetBaterije, autonomijaBaterije;
        float bluetooth;
    public:
        BezicneSlusalice();
        BezicneSlusalice(string, short, short, float, TipSistema, string, string, short, short, short, bool, float, string, string, short, bool, bool, FILE *);
        BezicneSlusalice(BezicneSlusalice&);
        string getKontrole()const;
		void setKontrole(string);
        short getKapacitetBaterije()const;
		void setKapacitetBaterije(short);
		short getAutonomijaBaterije()const;
		void setAutonomijaBaterije(short);
		float getBluetooth()const;
		void setBluetooth(float);
		virtual void ispisiBitno();
};

BezicneSlusalice::BezicneSlusalice() : Slusalice(){
    kontrole = "";
    kapacitetBaterije = 0;
    autonomijaBaterije = 0;
    bluetooth  = 3;
}

BezicneSlusalice::BezicneSlusalice(string k, short ka, short au, float b, TipSistema si, string fr, string p, short pr, short o, short i, bool mi,
float c, string m, string n, short a, bool s, bool d, FILE *f) : Slusalice(si, fr, p, pr, o, i, mi, c, m, n, a, s, d, f){
    kontrole = k;
    kapacitetBaterije = ka;
    autonomijaBaterije = au;
    bluetooth = b;
}

BezicneSlusalice::BezicneSlusalice(BezicneSlusalice &b) :
Slusalice(b.sistem, b.frekventniOdziv, b.povezivanje, b.precnikZvucnika, b.osetljivost, b.impedansa, b.mikrofon,
b.getCena(), b.getProizvodjac(), b.getNazivArtikla(), b.getAkcija(), b.imaLiNaStanju(), b.imaLiBesplatnuDostavu(), b.getSlika()->getFajl()){
    kontrole = b.kontrole;
    kapacitetBaterije = b.kapacitetBaterije;
    autonomijaBaterije = b.autonomijaBaterije;
    bluetooth = b.bluetooth;
}

string BezicneSlusalice::getKontrole()const{
	return kontrole;
}

void BezicneSlusalice::setKontrole(string a){
	kontrole = a;
}

short BezicneSlusalice::getKapacitetBaterije()const{
	return kapacitetBaterije;
}

void BezicneSlusalice::setKapacitetBaterije(short a){
	kapacitetBaterije = a;
}

short BezicneSlusalice::getAutonomijaBaterije()const{
	return autonomijaBaterije;
}

void BezicneSlusalice::setAutonomijaBaterije(short a){
	autonomijaBaterije = a;
}

float BezicneSlusalice::getBluetooth()const{
	return bluetooth;
}

void BezicneSlusalice::setBluetooth(float a){
	bluetooth = a;
}

void BezicneSlusalice::ispisiBitno(){
    cout << "\tKapacitet baterije: " << kapacitetBaterije << endl;
    cout << "\tAutonomija baterije: " << autonomijaBaterije << endl;
    cout << "\tVerzija Bluetooth-a: " << bluetooth << endl;
}

#endif // BEZICNE_H_INCLUDED
