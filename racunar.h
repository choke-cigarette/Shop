#ifndef RACUNAR_H_INCLUDED
#define RACUNAR_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "artikal.h"
#include "ram.h"
#include "hdd.h"
#include "ssd.h"
#include "maticna.h"
#include "graficka.h"
#include "procesor.h"


class Racunar : public Artikal{
    private:
        RAM ram;
        HDD hdd;
        SSD ssd;
        Maticna maticna;
        Graficka gpu;
        Procesor cpu;
        string OS;
        bool optickiUredjaj;
    public:
        Racunar();
        Racunar(RAM, HDD, SSD, Maticna, Graficka, Procesor, string, bool, float, string, string, short, bool, bool, FILE*);
        RAM getRAM();
        HDD getHDD();
        SSD getSSD();
        Maticna getMaticna();
        Graficka getGraficka();
        Procesor getProcesor();
        string getOS()const;
        bool daLiImaOptickiUredjaj()const;
        void setRAM(const RAM);
        void setHDD(const HDD);
        void setSSD(const SSD);
        void setMaticna(const Maticna);
        void setGPU(const Graficka);
        void setCPU(const Procesor);
        void setOS(const string);
        void setOpticki(const bool);
        virtual bool gamingApproved() = 0;
};

Racunar::Racunar() : Artikal(), ram(), hdd(), ssd(), maticna(), gpu(), cpu(){
    OS = "";
    optickiUredjaj = false;
}

Racunar::Racunar(RAM r, HDD h, SSD ss, Maticna ma, Graficka g, Procesor p, string os, bool opt,
float c, string m, string n, short a, bool s, bool d, FILE *f)
: Artikal(c, m, n, a, s, d, f), ram(r), hdd(h), ssd(ss), maticna(ma), gpu(g), cpu(p){
    OS = os;
    optickiUredjaj = opt;
}

RAM Racunar::getRAM(){
    return ram;
}

HDD Racunar::getHDD(){
    return hdd;
}

SSD Racunar::getSSD(){
    return ssd;
}

Maticna Racunar::getMaticna(){
    return maticna;
}

Graficka Racunar::getGraficka(){
    return gpu;
}

Procesor Racunar::getProcesor(){
    return cpu;
}

string Racunar::getOS()const{
    return OS;
}

bool Racunar::daLiImaOptickiUredjaj()const{
    return optickiUredjaj;
}

void Racunar::setRAM(const RAM r){

}

void Racunar::setHDD(const HDD h){

}

void Racunar::setSSD(const SSD s){

}

void Racunar::setMaticna(const Maticna m){

}

void Racunar::setGPU(const Graficka g){

}

void Racunar::setCPU(const Procesor p){

}

void Racunar::setOS(const string os){
    OS = os;
}

void Racunar::setOpticki(const bool o){
    optickiUredjaj = o;
}

#endif // RACUNAR_H_INCLUDED
