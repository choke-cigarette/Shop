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
        string podnozje, cipset, podrzaniProcesori, podrzanaMemorija, memorija, integrisanaGrafickaKarta,
        multiGPUPodrska, slotoviZaProsirenje, storage, mreznaKarta, zvucnaKarta, USB, konektori, interniKonektori, BIOS, ostalo;
    public:
        Maticna();
        Maticna(FormatPloce, string, string, string, string, string, string, string, string, string, string, string, string,
                 string, string, string, string, float, string, string, short, bool, bool, FILE*);
        Maticna(Maticna&);
        void setFormatPloce(FormatPloce);
        void setPodnozje(string);
        void setCipset(string);
        void setPodrzaniProcesori(string);
        void setPodrzanaMemorija(string);
        void setMemorija(string);
        void setIntegrisanaGraficka(string);
        void setMultiGPU(string);
        void setSlotoviZaProsirenje(string);
        void setStorage(string);
        void setMreznaKarta(string);
        void setZvucnaKarta(string);
        void setUSB(string);
        void setKonektori(string);
        void setInterniKonektori(string);
        void setBIOS(string);
        void setOstalo(string);
        FormatPloce getFormatPloce()const;
        string getPodnozje()const;
        string getCipset()const;
        string getPodrzaniProcesori()const;
        string getPodrzanaMemorija()const;
        string getMemorija()const;
        string getIntegrisanaGraficka()const;
        string getMultiGPU()const;
        string getSlotoviZaProsirenje()const;
        string getStorage()const;
        string getMreznaKarta()const;
        string getZvucnaKarta()const;
        string getUSB()const;
        string getKonektori()const;
        string getInterniKonektori()const;
        string getBIOS()const;
        string getOstalo()const;
        virtual void ispisiBitno();
};

Maticna::Maticna() : Artikal(){
    formatPloce = ATX;
    podnozje = "";
    cipset = "";
    podrzaniProcesori = "";
    podrzanaMemorija = "";
    memorija = "";
    integrisanaGrafickaKarta = "";
    multiGPUPodrska = "";
    slotoviZaProsirenje = "";
    storage = "";
    mreznaKarta = "";
    zvucnaKarta = "";
    USB = "";
    konektori = "";
    interniKonektori = "";
    BIOS = "";
    ostalo = "";
}

Maticna::Maticna(FormatPloce fp, string p, string cs, string pp, string pm, string m, string i, string mu,
                  string sl, string st, string mk, string zk, string usb, string k, string ik, string b, string o,
                 float c, string pa, string na, short a, bool s, bool d, FILE *f) : Artikal(c, pa, na, a, s, d, f){
    formatPloce = fp;
    podnozje = p;
    cipset = cs;
    podrzaniProcesori = pp;
    podrzanaMemorija = pm;
    memorija = m;
    integrisanaGrafickaKarta = i;
    multiGPUPodrska = mu;
    slotoviZaProsirenje = sl;
    storage = st;
    mreznaKarta = mk;
    zvucnaKarta = zk;
    USB = usb;
    konektori = k;
    interniKonektori = ik;
    BIOS = b;
    ostalo = o;
}

Maticna::Maticna(Maticna &m) : Artikal(m.getCena(), m.getProizvodjac(), m.getNazivArtikla(), m.getAkcija(), m.imaLiNaStanju(), m.imaLiBesplatnuDostavu(), m.getSlika()->getFajl()){
    formatPloce = m.formatPloce;
    podnozje = m.podnozje;
    cipset = m.cipset;
    podrzaniProcesori = m.podrzaniProcesori;
    podrzanaMemorija = m.podrzanaMemorija;
    memorija = m.memorija;
    integrisanaGrafickaKarta = m.integrisanaGrafickaKarta;
    multiGPUPodrska = m.multiGPUPodrska;
    slotoviZaProsirenje = m.slotoviZaProsirenje;
    storage = m.storage;
    mreznaKarta = m.mreznaKarta;
    zvucnaKarta = m.zvucnaKarta;
    USB = m.USB;
    konektori = m.konektori;
    interniKonektori = m.interniKonektori;
    BIOS, m.BIOS;
    ostalo = m.ostalo;
}

void Maticna::setFormatPloce(FormatPloce p){
    formatPloce = p;
}

void Maticna::setPodnozje(string a){
    podnozje = a;
}

void Maticna::setCipset(string a){
    cipset = a;
}

void Maticna::setPodrzaniProcesori(string a){
    podrzaniProcesori = a;
}

void Maticna::setPodrzanaMemorija(string a){
    podrzanaMemorija = a;
}

void Maticna::setMemorija(string a){
    memorija = a;
}

void Maticna::setIntegrisanaGraficka(string a){
    integrisanaGrafickaKarta = a;
}

void Maticna::setMultiGPU(string a){
    multiGPUPodrska = a;
}

void Maticna::setSlotoviZaProsirenje(string a){
    slotoviZaProsirenje = a;
}

void Maticna::setStorage(string a){
    storage = a;
}

void Maticna::setMreznaKarta(string a){
    mreznaKarta = a;
}

void Maticna::setZvucnaKarta(string a){
    zvucnaKarta = a;
}

void Maticna::setUSB(string a){
    USB = a;
}

void Maticna::setKonektori(string a){
    konektori = a;
}

void Maticna::setInterniKonektori(string a){
    interniKonektori = a;
}

void Maticna::setBIOS(string a){
    BIOS = a;
}

void Maticna::setOstalo(string a){
    ostalo = a;
}

FormatPloce Maticna::getFormatPloce()const{
    return formatPloce;
}

string Maticna::getPodnozje()const{
    return podnozje;
}

string Maticna::getCipset()const{
    return cipset;
}

string Maticna::getPodrzaniProcesori()const{
    return podrzaniProcesori;
}

string Maticna::getPodrzanaMemorija()const{
    return podrzanaMemorija;
}

string Maticna::getMemorija()const{
    return memorija;
}

string Maticna::getIntegrisanaGraficka()const{
    return integrisanaGrafickaKarta;
}

string Maticna::getMultiGPU()const{
    return multiGPUPodrska;
}

string Maticna::getSlotoviZaProsirenje()const{
    return slotoviZaProsirenje;
}

string Maticna::getStorage()const{
    return storage;
}

string Maticna::getMreznaKarta()const{
    return mreznaKarta;
}

string Maticna::getZvucnaKarta()const{
    return zvucnaKarta;
}

string Maticna::getUSB()const{
    return USB;
}

string Maticna::getKonektori()const{
    return konektori;
}

string Maticna::getInterniKonektori()const{
    return interniKonektori;
}

string Maticna::getBIOS()const{
    return BIOS;
}

string Maticna::getOstalo()const{
    return ostalo;
}

void Maticna::ispisiBitno(){
    cout << "\tFormat ploce: " << ((formatPloce == ATX) ? "ATX" : "EATX") << endl;
    cout << "\tPodnozje: " << podnozje << endl;
    cout << "\tCipset: " << cipset << endl;
    cout << "\tIntegrisana graficka karta: " << integrisanaGrafickaKarta << endl;
    cout << "\tMrezna karta: " << mreznaKarta << endl;
    cout << "\tZvucna karta: " << zvucnaKarta << endl;
}

#endif // MATICNA_H_INCLUDED
