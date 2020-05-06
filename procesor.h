#ifndef PROCESOR_H_INCLUDED
#define PROCESOR_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"


class Procesor : public Artikal{
    private:
        string podnozje, l2Kes, integrisanaGraficka;
        short brojJezgara, threads, tehnologijaIzrade, TDP, l3Kes;
        float radnaFrekvencija, turboFrekvencija;
    public:
        Procesor();
        Procesor(string, string, string, short, short, short, short, short, float, float, float, string, string, short, bool, bool, FILE *);
        Procesor(Procesor &);
        string getPodnozje()const;
        string getL2Kes()const;
        string getIntegrisanaGraficka()const;
        short getBrojJezgara()const;
        short getThreads()const;
        short getTehnologijaIzrade()const;
        short getTDP()const;
        short getL3Kes()const;
        float getRadnaFrekvencija()const;
        float getTurboFrekvencija()const;
        void setPodnozje(string);
        void setL2Kes(string);
        void setIntegrisanaGraficka(string);
        void setBrojJezgara(short);
        void setThreads(short);
        void setTehnologijaIzrade(short);
        void setTDP(short);
        void setL3Kes(short);
        void setRadnaFrekvencija(float);
        void setTurboFrekvencija(float);
        virtual void ispisiBitno();
};

Procesor::Procesor() : Artikal(){
    podnozje = "";
    l2Kes = "";
    integrisanaGraficka = "";
    brojJezgara = 0;
    threads = 0;
    tehnologijaIzrade = 0;
    TDP = 0;
    l3Kes = 0;
    radnaFrekvencija = 0;
    turboFrekvencija = 0;
}

Procesor::Procesor(string p, string l2, string ig, short j, short th, short ti, short tdp, short l3, float rf,
float tf, float c, string pa, string na, short a, bool s, bool d, FILE *f) : Artikal(c, pa, na, a, s, d, f){
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

Procesor::Procesor(Procesor &p) : Artikal(p.getCena(), p.getProizvodjac(), p.getNazivArtikla(), p.getAkcija(), p.imaLiNaStanju(), p.imaLiBesplatnuDostavu(), p.getSlika()->getFajl()){
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

string Procesor::getPodnozje()const{
    return podnozje;
}

string Procesor::getL2Kes()const{
    return l2Kes;
}

string Procesor::getIntegrisanaGraficka()const{
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

void Procesor::setPodnozje(string p){
    podnozje = p;
}

void Procesor::setL2Kes(string l2){
    l2Kes = l2;
}

void Procesor::setIntegrisanaGraficka(string g){
    integrisanaGraficka = g;
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

void Procesor::ispisiBitno(){
    cout << "\tPodnozje: " << podnozje<< endl;
    cout << "\tBroj jezgara: " << brojJezgara<< endl;
    cout << "\tThreads: " << threads << endl;
    cout << "\tRadna Frekvencija: " << radnaFrekvencija << endl;
    cout << "\tTurbo Frekvencija: " << turboFrekvencija << endl;
}

#endif // PROCESOR_H_INCLUDED
