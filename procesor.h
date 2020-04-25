#ifndef PROCESOR_H_INCLUDED
#define PROCESOR_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"


class Procesor : Artikal{
    private:
        char *podnozje, *l2Kes, *integrisanaGraficka;
        short brojJezgara, threads, tehnologijaIzrade, TDP, l3Kes;
        float radnaFrekvencija, turboFrekvencija;
    public:
        Procesor();
        Procesor(char*, char*, char*, short, short, short, short, short, float, float, float, char*, char*, short, bool, bool, FILE *);
        Procesor(Procesor &p);
        char* getPodnozje()const;
        char* getL2Kes()const;
        char* getIntegrisanaGraficka()const;
        short getBrojJezgara()const;
        short getThreads()const;
        short getTehnologijaIzrade()const;
        short getTDP()const;
        short getL3Kes()const;
        float getRadnaFrekvencija()const;
        float getTurboFrekvencija()const;
        void setPodnozje(char*);
        void setL2Kes(char*);
        void setIntegrisanaGraficka(char*);
        void setBrojJezgara(short);
        void setThreads(short);
        void setTehnologijaIzrade(short);
        void setTDP(short);
        void setL3Kes(short);
        void setRadnaFrekvencija(float);
        void setTurboFrekvencija(float);
};

Procesor::Procesor() : Artikal(){
    podnozje = nullptr;
    l2Kes = nullptr;
    integrisanaGraficka = nullptr;
    brojJezgara = 0;
    threads = 0;
    tehnologijaIzrade = 0;
    TDP = 0;
    l3Kes = 0;
    radnaFrekvencija = 0;
    turboFrekvencija = 0;
}

Procesor::Procesor(char* p, char* l2, char* ig, short j, short th, short ti, short tdp, short l3, float rf,
float tf, float c, char* pa, char* na, short a, bool s, bool d, FILE *f) : Artikal(c, pa, na, a, s, d, f){
    podnozje = p;
    l2Kes = l2;
    integrisanaGraficka = ig;
    brojJezgara = j;
    threads = th;
    tehnologijaIzrade = ti;
    TDP = tdp;
    l3Kes = l3;
    radnaFrekvencija = rf;
    turboFrekvencija = tf;
}

Procesor(Procesor &p) : Artikal(p.getCena(), p.getProizvodjac(), p.getNazivArtikla(), p.getAkcija(), p.imaLiNaStanju(), p.imaLiBesplatnuDostavu(), p.getSlika()->getFajl()){
    podnozje = p.podnozje;
    l2Kes = p.l2Kes;
    integrisanaGraficka = p.integrisanaGraficka;
    brojJezgara = p.brojJezgara;
    threads = p.threads;
    tehnologijaIzrade = p.tehnologijaIzrade;
    TDP = p.TDP;
    l3Kes = p.l3Kes;
    radnaFrekvencija = p.radnaFrekvencija;
    turboFrekvencija = p.turboFrekvencija;
}

char* Procesor::getPodnozje()const{
    return podnozje;
}

char* Procesor::getL2Kes()const{
    return l2Kes;
}

char* Procesor::getIntegrisanaGraficka()const{
    return integrisanaGraficka;
}

short Procesor::getBrojJezgara()const{
    return brojJezgara;
}

short Procesor::getThreads()const{
    return threads;
}

short Procesor::getTehnologijaIzrade()const{
    return tehnologijaIzrade;
}

short Procesor::getTDP()const{
    return TDP;
}

short Procesor::getL3Kes()const{
    return l3Kes;
}

float Procesor::getRadnaFrekvencija()const{
    return radnaFrekvencija;
}

float Procesor::getTurboFrekvencija()const{
    return turboFrekvencija;
}

void Procesor::setPodnozje(char* p){
    strcpy(podnozje, p);
}

void Procesor::setL2Kes(char* l2){
    strcpy(l2Kes, l2);
}

void Procesor::setIntegrisanaGraficka(char* g){
    strcpy(integrisanaGraficka, g);
}

void Procesor::setBrojJezgara(short j){
    brojJezgara = j;
}

void Procesor::setThreads(short t){
    threads = t;
}

void Procesor::setTehnologijaIzrade(short t){
    tehnologijaIzrade = t;
}

void Procesor::setTDP(short t){
    TDP = t;
}

void Procesor::setL3Kes(short l3){
    l3Kes = l3;
}

void Procesor::setRadnaFrekvencija(float r){
    radnaFrekvencija = r;
}

void Procesor::setTurboFrekvencija(float t){
    turboFrekvencija = t;
}

#endif // PROCESOR_H_INCLUDED
