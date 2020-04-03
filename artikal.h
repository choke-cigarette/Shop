#ifndef ARTIKAL_H_INCLUDED
#define ARTIKAL_H_INCLUDED

class Artikal{
    private:
        float cena, ocena;
        char *model, *nazivArtikla;
        short akcija;
        bool naStanju, besplatnaDostava;
        FILE *komentari;
    public:
        float getCena();
        float getOcena(); //  postavice je neki izmisljeni kupci
        char* getModel();
        char* getNazivArtikla();
        short getAkcija();
        void ispisiKomentare(); //  nece postojati komentari jer nema user interface-a
        bool imaLiNaStanju();
        bool imaLiBesplatnuDostavu();
        void setCena(float);
        void setAkcija(short);
        void setNaStanju(bool);
        void setBesplatnaDostava(bool);
};

float Artikal::getCena(){
    return cena;
}

float Artikal::getOcena(){
    return ocena;
}

char* Artikal::getModel(){
    return model;
}

char* Artikal::getNazivArtikla(){
    return nazivArtikla;
}

short Artikal::getAkcija(){
    return akcija;
}

bool Artikal::imaLiNaStanju(){
    return naStanju;
}

bool Artikal::imaLiBesplatnuDostavu(){
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
