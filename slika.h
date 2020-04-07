#ifndef SLIKA_H_INCLUDED
#define SLIKA_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <cstring>

class Slika{
    private:
        Slika *prosla, *sledeca;
        FILE *fajl;
    public:
        Slika();
        Slika(FILE *&);
        Slika(Slika *&);
        Slika* getProsla()const;
        Slika* getSledeca()const;
        FILE* getFajl()const;
        void setProsla(Slika *&);
        void setSledeca(Slika *&);
        void setFajl(FILE *&);
        void dodajSliku(FILE *&);
        void izbrisiSliku();
};

Slika::Slika(){
    prosla = nullptr;
    sledeca = nullptr;
    fajl = nullptr;
}

Slika::Slika(FILE *&f){
    prosla = nullptr;
    sledeca = nullptr;
    fajl = f;
}

Slika::Slika(Slika *&s){
    prosla = new Slika;
    sledeca = new Slika;
    fajl = new
    prosla = s->prosla;
    sledeca = s->sledeca;
    fajl = s->fajl;
}

Slika* Slika::getProsla()const{
    return prosla;
}

Slika* Slika::getSledeca()const{
    return sledeca;
}

FILE* Slika::getFajl()const{
    return fajl;
}


#endif // SLIKA_H_INCLUDED
