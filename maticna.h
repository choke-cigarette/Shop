#ifndef MATICNA_H_INCLUDED
#define MATICNA_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"

enum FormatPloce{ATX, EATX};

class Maticna : public Artikal{
    private:
        FormatPloce formatPloce;
        char *podnozje, *cipset, *podrzaniProcesori, *podrzanaMemorija, *memorija, *integrisanaGrafickaKarta,
         *multiGPUPodrska, *slotoviZaProsirenje, *storage, *mreznaKarta, *zvucnaKarta, *USB, *konektori, *interniKonektori, *BIOS, *ostalo;
    public:
        Maticna();
        Maticna(FormatPloce, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*,
                 char*, char*, char*, char*, float, char*, char*, short, bool, bool, FILE*);
        Maticna(Maticna&);
        void setFormatPloce(FormatPloce);
        void setPodnozje(char*);
        void setCipset(char*);
        void setPodrzaniProcesori(char*);
        void setPodrzanaMemorija(char*);
        void setMemorija(char*);
        void setIntegrisanaGraficka(char*);
        void setMultiGPU(char*);
        void setSlotoviZaProsirenje(char*);
        void setStorage(char*);
        void setMreznaKarta(char*);
        void setZvucnaKarta(char*);
        void setUSB(char*);
        void setKonektori(char*);
        void setInterniKonektori(char*);
        void setBIOS(char*);
        void setOstalo(char*);
        FormatPloce getFormatPloce()const;
        char *getPodnozje()const;
        char *getCipset()const;
        char *getPodrzaniProcesori()const;
        char *getPodrzanaMemorija()const;
        char *getMemorija()const;
        char *getIntegrisanaGraficka()const;
        char *getMultiGPU()const;
        char *getSlotoviZaProsirenje()const;
        char *getStorage()const;
        char *getMreznaKarta()const;
        char *getZvucnaKarta()const;
        char *getUSB()const;
        char *getKonektori()const;
        char *getInterniKonektori()const;
        char *getBIOS()const;
        char *getOstalo()const;
};

Maticna::Maticna() : Artikal(){
    formatPloce = ATX;
    podnozje = nullptr;
    cipset = nullptr;
    podrzaniProcesori = nullptr;
    podrzanaMemorija = nullptr;
    memorija = nullptr;
    integrisanaGrafickaKarta = nullptr;
    multiGPUPodrska = nullptr;
    slotoviZaProsirenje = nullptr;
    storage = nullptr;
    mreznaKarta = nullptr;
    zvucnaKarta = nullptr;
    USB = nullptr;
    konektori = nullptr;
    interniKonektori = nullptr;
    BIOS = nullptr;
    ostalo = nullptr;
}

Maticna::Maticna(FormatPloce fp, char* p, char* cs, char* pp, char* pm, char* m, char* i, char* mu,
                  char* sl, char* st, char* mk, char* zk, char* usb, char* k, char* ik, char* b, char* o,
                 float c, char* pa, char* na, short a, bool s, bool d, FILE *f) : Artikal(c, pa, na, a, s, d, f){
    formatPloce = fp;
    strcpy(podnozje, p);
    strcpy(cipset, cs);
    strcpy(podrzaniProcesori, pp);
    strcpy(podrzanaMemorija, pm);
    strcpy(memorija, m);
    strcpy(integrisanaGrafickaKarta, i);
    strcpy(multiGPUPodrska, mu);
    strcpy(slotoviZaProsirenje, sl);
    strcpy(storage, st);
    strcpy(mreznaKarta, mk);
    strcpy(zvucnaKarta, zk);
    strcpy(USB, usb);
    strcpy(konektori, k);
    strcpy(interniKonektori, ik);
    strcpy(BIOS, b);
    strcpy(ostalo, o);
}

Maticna::Maticna(Maticna &m) : Artikal(m.getCena(), m.getProizvodjac(), m.getNazivArtikla(), m.getAkcija(), m.imaLiNaStanju(), m.imaLiBesplatnuDostavu(), m.getSlika()->getFajl()){
    formatPloce = m.formatPloce;
    strcpy(podnozje, m.podnozje);
    strcpy(cipset, m.cipset);
    strcpy(podrzaniProcesori, m.podrzaniProcesori);
    strcpy(podrzanaMemorija, m.podrzanaMemorija);
    strcpy(memorija, m.memorija);
    strcpy(integrisanaGrafickaKarta, m.integrisanaGrafickaKarta);
    strcpy(multiGPUPodrska, m.multiGPUPodrska);
    strcpy(slotoviZaProsirenje, m.slotoviZaProsirenje);
    strcpy(storage, m.storage);
    strcpy(mreznaKarta, m.mreznaKarta);
    strcpy(zvucnaKarta, m.zvucnaKarta);
    strcpy(USB, m.USB);
    strcpy(konektori, m.konektori);
    strcpy(interniKonektori, m.interniKonektori);
    strcpy(BIOS, m.BIOS);
    strcpy(ostalo, m.ostalo);
}

void Maticna::setFormatPloce(FormatPloce p){
    formatPloce = p;
}

void Maticna::setPodnozje(char* a){
    strcpy(podnozje, a);
}

void Maticna::setCipset(char* a){
    strcpy(cipset, a);
}

void Maticna::setPodrzaniProcesori(char* a){
    strcpy(podrzaniProcesori, a);
}

void Maticna::setPodrzanaMemorija(char* a){
    strcpy(podrzanaMemorija, a);
}

void Maticna::setMemorija(char* a){
    strcpy(memorija, a);
}

void Maticna::setIntegrisanaGraficka(char* a){
    strcpy(integrisanaGrafickaKarta, a);
}

void Maticna::setMultiGPU(char* a){
    strcpy(multiGPUPodrska, a);
}

void Maticna::setSlotoviZaProsirenje(char* a){
    strcpy(slotoviZaProsirenje, a);
}

void Maticna::setStorage(char* a){
    strcpy(storage, a);
}

void Maticna::setMreznaKarta(char* a){
    strcpy(mreznaKarta, a);
}

void Maticna::setZvucnaKarta(char* a){
    strcpy(zvucnaKarta, a);
}

void Maticna::setUSB(char* a){
    strcpy(USB, a);
}

void Maticna::setKonektori(char* a){
    strcpy(konektori, a);
}

void Maticna::setInterniKonektori(char* a){
    strcpy(interniKonektori, a);
}

void Maticna::setBIOS(char* a){
    strcpy(BIOS, a);
}

void Maticna::setOstalo(char* a){
    strcpy(ostalo, a);
}

FormatPloce Maticna::getFormatPloce()const{
    return formatPloce;
}

char* Maticna::getPodnozje()const{
    return podnozje;
}

char* Maticna::getCipset()const{
    return cipset;
}

char* Maticna::getPodrzaniProcesori()const{
    return podrzaniProcesori;
}

char* Maticna::getPodrzanaMemorija()const{
    return podrzanaMemorija;
}

char* Maticna::getMemorija()const{
    return memorija;
}

char* Maticna::getIntegrisanaGraficka()const{
    return integrisanaGrafickaKarta;
}

char* Maticna::getMultiGPU()const{
    return multiGPUPodrska;
}

char* Maticna::getSlotoviZaProsirenje()const{
    return slotoviZaProsirenje;
}

char* Maticna::getStorage()const{
    return storage;
}

char* Maticna::getMreznaKarta()const{
    return mreznaKarta;
}

char* Maticna::getZvucnaKarta()const{
    return zvucnaKarta;
}

char* Maticna::getUSB()const{
    return USB;
}

char* Maticna::getKonektori()const{
    return konektori;
}

char* Maticna::getInterniKonektori()const{
    return interniKonektori;
}

char* Maticna::getBIOS()const{
    return BIOS;
}

char* Maticna::getOstalo()const{
    return ostalo;
}


#endif // MATICNA_H_INCLUDED
