#ifndef KORISNIK_H_INCLUDED
#define KORISNIK_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>

class Korisnik{
    private:
        string ime, prezime, email, password;
    public:
        Korisnik();
        Korisnik(string, string, string, string);
        string getIme()const;
		void setIme(string);
		string getPrezime()const;
		void setPrezime(string);
        string getEmail()const;
		void setEmail(string);
        string getPassword()const;
		void setPassword(string);
};

Korisnik::Korisnik(){
    ime = "";
    prezime = "";
    email = "";
    password = "";
}

Korisnik::Korisnik(string i, string p, string e, string pa){
    ime = i;
    prezime = p;
    email = e;
    password = pa;
}

string Korisnik::getIme()const{
	return ime;
}

void Korisnik::setIme(string a){
	ime = a;
}

string Korisnik::getPrezime()const{
	return prezime;
}

void Korisnik::setPrezime(string a){
	prezime = a;
}

string Korisnik::getEmail()const{
	return email;
}

void Korisnik::setEmail(string a){
	email = a;
}

string Korisnik::getPassword()const{
	return password;
}

void Korisnik::setPassword(string a){
	password = a;
}

#endif // KORISNIK_H_INCLUDED
