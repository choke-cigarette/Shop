#ifndef TELEFON_H_INCLUDED
#define TELEFON_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"

enum TipEkrana{_LCD, _OLED, _AMOLED, _TFT, _IPS};

enum TipSima{SIM, MSIM, NSIM};

class Telefon : public Artikal{
    private:
        TipEkrana tipEkrana;
        TipSima sim;
        short ram, memorija, gustinaEkrana, baterija;
        float dijagonala;
        string punjenje, graficka, procesor, rezolucija, prednjaKamera, zadnjaKamera, os, senzori, ostalo;
        bool touchscreen;
    public:
        Telefon();
        Telefon(TipEkrana, TipSima, short, short, short, short, float, string, string, string, string, string, string, string, string, string, bool, float, string, string, short, bool, bool, FILE *);
        Telefon(Telefon&);
        TipEkrana getTipEkrana()const;
		void setTipEkrana(TipEkrana);
		TipSima getSim()const;
		void setSim(TipSima);
		short getRam()const;
		void setRam(short);
		short getMemorija()const;
		void setMemorija(short);
		short getGustinaEkrana()const;
		void setGustinaEkrana(short);
		short getBaterija()const;
		void setBaterija(short);
		float getDijagonala()const;
		void setDijagonala(float);
		string getPunjenje()const;
		void setPunjenje(string);
		string getGraficka()const;
		void setGraficka(string);
		string getProcesor()const;
		void setProcesor(string);
		string getRezolucija()const;
		void setRezolucija(string);
		string getPrednjaKamera()const;
		void setPrednjaKamera(string);
		string getZadnjaKamera()const;
		void setZadnjaKamera(string);
		string getOs()const;
		void setOs(string);
		string getSenzori()const;
		void setSenzori(string);
		string getOstalo()const;
		void setOstalo(string);
		bool getTouchscreen()const;
		void setTouchscreen(bool);
		virtual void ispisiBitno();
};

Telefon::Telefon() : Artikal(){
    tipEkrana = _OLED;
    sim = MSIM;
    ram = 0;
    memorija = 0;
    gustinaEkrana = 0;
    baterija = 0;
    dijagonala = 0;
    punjenje = "";
    graficka = "";
    procesor = "";
    rezolucija = "";
    prednjaKamera = "";
    zadnjaKamera = "";
    os = "";
    senzori = "";
    ostalo = "";
    touchscreen = true;
}

Telefon::Telefon(TipEkrana e, TipSima si, short r, short me, short g, short b, float di,
string p, string gr, string pr, string re, string pk, string zk, string o, string se, string ost, bool t,
float c, string m, string n, short a, bool s, bool d, FILE *f) : Artikal(c, m, n, a, s, d, f){
    tipEkrana = e;
    sim = si;
    ram = r;
    memorija = me;
    gustinaEkrana = g;
    baterija = b;
    dijagonala = di;
    punjenje = p;
    graficka = gr;
    procesor = pr;
    rezolucija = re;
    prednjaKamera = pk;
    zadnjaKamera = zk;
    os = o;
    senzori = se;
    ostalo = ost;
    touchscreen = t;
}

Telefon::Telefon(Telefon &t) : Artikal(t.getCena(), t.getProizvodjac(), t.getNazivArtikla(), t.getAkcija(), t.imaLiNaStanju(), t.imaLiBesplatnuDostavu(), t.getSlika()->getFajl()){
    tipEkrana = t.tipEkrana;
    sim = t.sim;
    ram = t.ram;
    memorija = t.memorija;
    gustinaEkrana = t.gustinaEkrana;
    baterija = t.baterija;
    dijagonala = t.dijagonala;
    punjenje = t.punjenje;
    graficka = t.graficka;
    procesor = t.procesor;
    rezolucija = t.rezolucija;
    prednjaKamera = t.prednjaKamera;
    zadnjaKamera = t.zadnjaKamera;
    os = t.os;
    senzori = t.senzori;
    ostalo = t.ostalo;
    touchscreen = t.touchscreen;
}

TipEkrana Telefon::getTipEkrana()const{
	return tipEkrana;
}

void Telefon::setTipEkrana(TipEkrana a){
	tipEkrana = a;
}

TipSima Telefon::getSim()const{
	return sim;
}

void Telefon::setSim(TipSima a){
	sim = a;
}

short Telefon::getRam()const{
	return ram;
}

void Telefon::setRam(short a){
	ram = a;
}

short Telefon::getMemorija()const{
	return memorija;
}

void Telefon::setMemorija(short a){
	memorija = a;
}

short Telefon::getGustinaEkrana()const{
	return gustinaEkrana;
}

void Telefon::setGustinaEkrana(short a){
	gustinaEkrana = a;
}

short Telefon::getBaterija()const{
	return baterija;
}

void Telefon::setBaterija(short a){
	baterija = a;
}

float Telefon::getDijagonala()const{
	return dijagonala;
}

void Telefon::setDijagonala(float a){
	dijagonala = a;
}

string Telefon::getPunjenje()const{
	return punjenje;
}

void Telefon::setPunjenje(string a){
	punjenje = a;
}

string Telefon::getGraficka()const{
	return graficka;
}

void Telefon::setGraficka(string a){
	graficka = a;
}

string Telefon::getProcesor()const{
	return procesor;
}

void Telefon::setProcesor(string a){
	procesor = a;
}

string Telefon::getRezolucija()const{
	return rezolucija;
}

void Telefon::setRezolucija(string a){
	rezolucija = a;
}

string Telefon::getPrednjaKamera()const{
	return prednjaKamera;
}

void Telefon::setPrednjaKamera(string a){
	prednjaKamera = a;
}

string Telefon::getZadnjaKamera()const{
	return zadnjaKamera;
}

void Telefon::setZadnjaKamera(string a){
	zadnjaKamera = a;
}

string Telefon::getOs()const{
	return os;
}

void Telefon::setOs(string a){
	os = a;
}

string Telefon::getSenzori()const{
	return senzori;
}

void Telefon::setSenzori(string a){
	senzori = a;
}

string Telefon::getOstalo()const{
	return ostalo;
}

void Telefon::setOstalo(string a){
	ostalo = a;
}

bool Telefon::getTouchscreen()const{
	return touchscreen;
}

void Telefon::setTouchscreen(bool a){
	touchscreen = a;
}

void Telefon::ispisiBitno(){
    cout << "\tRAM memorija: " << ram << endl;
    cout << "\tInterna memorija: " << memorija << endl;
    cout << "\tGraficka: " << graficka << endl;
    cout << "\tProcesor: " << procesor << endl;
    cout << "\tDijagonala: " << dijagonala << endl;
}
#endif // TELEFON_H_INCLUDED
