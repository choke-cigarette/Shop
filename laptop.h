#ifndef LAPTOP_H_INCLUDED
#define LAPTOP_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "racunar.h"

class Laptop : public Racunar{
    private:
        string ekran, napajanje, zvucnici, wifi, baterija;
        float bluetooth;
        bool touchBar, svetlecaTastatura, webKamera;
    public:
        Laptop();
        Laptop(string, string, string, string, string, float, bool, bool, bool, RAM, HDD, SSD, Maticna, Graficka, Procesor, string, bool, float, string, string, short, bool, bool, FILE*);
        Laptop(Laptop&);
        string getEkran()const;
		void setEkran(string);
        string getNapajanje()const;
		void setNapajanje(string);
		string getZvucnici()const;
		void setZvucnici(string);
		string getWifi()const;
		void setWifi(string);
		string getBaterija()const;
		void setBaterija(string);
		float getBluetooth()const;
		void setBluetooth(float);
		bool getTouchBar()const;
		void setTouchBar(bool);
		bool getSvetlecaTastatura()const;
		void setSvetlecaTastatura(bool);
        bool getWebKamera()const;
		void setWebKamera(bool);
        virtual void ispisiBitno();
        virtual bool gamingApproved();
};

Laptop::Laptop() : Racunar(){
    ekran = "";
    napajanje = "";
    zvucnici = "";
    wifi = "";
    baterija = "";
    bluetooth = 3;
    touchBar = true;
    svetlecaTastatura = false;
    webKamera = true;
}

Laptop::Laptop(string ek, string n, string z, string w, string ba, float bl, bool t, bool sv, bool we, RAM r, HDD h, SSD s, Maticna m, Graficka g, Procesor p,
string os, bool o, float a, string b, string c, short d, bool e, bool q, FILE *f) :
Racunar(r, h, s, m, g, p, os, o, a, b, c, d, e, q, f){
    ekran = ek;
    napajanje = n;
    zvucnici = z;
    wifi = w;
    baterija = ba;
    bluetooth = bl;
    touchBar = t;
    svetlecaTastatura = sv;
    webKamera = we;
}

Laptop::Laptop(Laptop &l) : Racunar(l.ram, l.hdd, l.ssd, l.maticna, l.gpu, l.cpu, l.OS,
l.optickiUredjaj, l.getCena(), l.getProizvodjac(), l.getNazivArtikla(), l.getAkcija(),
l.imaLiNaStanju(), l.imaLiBesplatnuDostavu(), l.getSlika()->getFajl()){
    ekran = l.ekran;
    napajanje = l.napajanje;
    zvucnici = l.zvucnici;
    wifi = l.wifi;
    baterija = l.baterija;
    bluetooth = l.bluetooth;
    touchBar = l.touchBar;
    svetlecaTastatura = l.svetlecaTastatura;
    webKamera = l.webKamera;
}

string Laptop::getEkran()const{
	return ekran;
}

void Laptop::setEkran(string a){
	ekran = a;
}

string Laptop::getNapajanje()const{
	return napajanje;
}

void Laptop::setNapajanje(string a){
	napajanje = a;
}

string Laptop::getZvucnici()const{
	return zvucnici;
}

void Laptop::setZvucnici(string a){
	zvucnici = a;
}

string Laptop::getWifi()const{
	return wifi;
}

void Laptop::setWifi(string a){
	wifi = a;
}

string Laptop::getBaterija()const{
	return baterija;
}

void Laptop::setBaterija(string a){
	baterija = a;
}

float Laptop::getBluetooth()const{
	return bluetooth;
}

void Laptop::setBluetooth(float a){
	bluetooth = a;
}

bool Laptop::getTouchBar()const{
	return touchBar;
}

void Laptop::setTouchBar(bool a){
	touchBar = a;
}

bool Laptop::getSvetlecaTastatura()const{
	return svetlecaTastatura;
}

void Laptop::setSvetlecaTastatura(bool a){
	svetlecaTastatura = a;
}

bool Laptop::getWebKamera()const{
	return webKamera;
}

void Laptop::setWebKamera(bool a){
	webKamera = a;
}

void Laptop::ispisiBitno(){
    cout << "\tEkran: " << ekran << endl;
    cout << "\tZvucnici: " << zvucnici<< endl;
    cout << "\tWeb kamera: " << webKamera<< endl;
}

bool Laptop::gamingApproved(){
    if(svetlecaTastatura && gpu.getKolicinaMemorije() >= 4 && ram.getKapacitet() >= 8 && hdd.getKapacitet() > 500){
        return true;
    }
    return false;
}

ostream& operator<<(ostream &o, const Laptop &l){
    o << endl << "\tNaziv laptopa: " << l.getNazivArtikla() << endl;
    o << "\tCena laptopa: " << l.getCena() << "rsd" << endl;
    o << "\tAkcija: " << l.getAkcija() << "%" << endl;
    o << "\tEkran: " << l.getEkran() << endl;
    o << "\tZvucnici: " << l.getZvucnici() << endl;
    o << "\tWeb kamera: " << l.getWebKamera() << endl;
    return o;
}

#endif // LAPTOP_H_INCLUDED
