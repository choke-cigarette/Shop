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

#endif // MATICNA_H_INCLUDED
