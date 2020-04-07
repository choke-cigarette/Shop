#ifndef ARTIKAL_H_INCLUDED
#define ARTIKAL_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "slika.h"

class Artikal{
    private:
        float cena, ocena;
        char *model, *nazivArtikla;
        short akcija;
        bool naStanju, besplatnaDostava;
        FILE *komentari;
    public:
        Artikal();
        Artikal(float, char*, char*, short, bool, bool);
        Artikal(Artikal &);
        float getCena()const;
        float getOcena()const; //  postavice je neki izmisljeni kupci
        char* getModel()const;
        char* getNazivArtikla()const;
        short getAkcija()const;
        void ispisiKomentare()const; //  nece postojati komentari jer nema user interface-a
        bool imaLiNaStanju()const;
        bool imaLiBesplatnuDostavu()const;
        void setCena(float);
        void setAkcija(short);
        void setNaStanju(bool);
        void setBesplatnaDostava(bool);
};

Artikal::Artikal(){
    cena = 0;
    ocena = 0;
    model = nullptr;
    nazivArtikla = nullptr;
    akcija = 0;
    naStanju = false;
    besplatnaDostava = false;
    komentari = nullptr;
}

Artikal::Artikal(float c, char *m, char *n, short a, bool s, bool d){
    cena = c;
    model = new char[strlen(m)];
    nazivArtikla = new char[strlen(n)];
    strcpy(model, m);
    strcpy(nazivArtikla, n);
    akcija = a;
    naStanju = s;
    besplatnaDostava = d;
}

Artikal::Artikal(Artikal &a){
    cena = a.cena;
    ocena = a.ocena;
    model = new char[strlen(a.model)];
    nazivArtikla = new char[strlen(a.nazivArtikla)];
    strcpy(model, a.model);
    strcpy(nazivArtikla, a.nazivArtikla);
    akcija = a.akcija;
    naStanju = a.naStanju;
    besplatnaDostava = a.besplatnaDostava;
    komentari = a.komentari;
}

float Artikal::getCena()const{
    return cena;
}

float Artikal::getOcena()const{
    return ocena;
}

char* Artikal::getModel()const{
    return model;
}

char* Artikal::getNazivArtikla()const{
    return nazivArtikla;
}

short Artikal::getAkcija()const{
    return akcija;
}

bool Artikal::imaLiNaStanju()const{
    return naStanju;
}

bool Artikal::imaLiBesplatnuDostavu()const{
    return besplatnaDostava;
}

void Artikal::setCena(float c){
    cena = c;
}

void Artikal::setAkcija(short a){
    akcija = a;
}

void Artikal::setNaStanju(bool s){
    naStanju = s;
}

void Artikal::setBesplatnaDostava(bool d){
    besplatnaDostava = d;
}

#endif // ARTIKAL_H_INCLUDED
