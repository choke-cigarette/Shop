#ifndef RADNJA_H_INCLUDED
#define RADNJA_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>

class Radnja{
    private:
        string adresa, brojTelefona, email, radniDan, subota, nedelja;
    public:
        Radnja();
        Radnja(string, string, string, string, string, string);
        Radnja(Radnja&);
        string getAdresa()const;
		void setAdresa(string);
		string getBrojTelefona()const;
		void setBrojTelefona(string);
		string getEmail()const;
		void setEmail(string);
        string getRadniDan()const;
		void setRadniDan(string);
		string getSubota()const;
		void setSubota(string);
        string getNedelja()const;
		void setNedelja(string);
};

Radnja::Radnja(){
    adresa = "";
    brojTelefona = "";
    email = "";
    radniDan = "";
    subota = "";
    nedelja = "";
}

Radnja::Radnja(string a, string b, string e, string r, string s, string n){
    adresa = a;
    brojTelefona = b;
    email = e;
    radniDan = r;
    subota = s;
    nedelja = n;
}

Radnja::Radnja(Radnja &r){
    adresa = r.adresa;
    brojTelefona = r.brojTelefona;
    email = r.email;
    radniDan = r.radniDan;
    subota = r.subota;
    nedelja = r.nedelja;
}

string Radnja::getAdresa()const{
	return adresa;
}

void Radnja::setAdresa(string a){
	adresa = a;
}

string Radnja::getBrojTelefona()const{
	return brojTelefona;
}

void Radnja::setBrojTelefona(string a){
	brojTelefona = a;
}

string Radnja::getEmail()const{
	return email;
}

void Radnja::setEmail(string a){
	email = a;
}

string Radnja::getRadniDan()const{
	return radniDan;
}

void Radnja::setRadniDan(string a){
	radniDan = a;
}

string Radnja::getSubota()const{
	return subota;
}

void Radnja::setSubota(string a){
	subota = a;
}

string Radnja::getNedelja()const{
	return nedelja;
}

void Radnja::setNedelja(string a){
	nedelja = a;
}

#endif // RADNJA_H_INCLUDED
