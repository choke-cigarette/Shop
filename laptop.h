#ifndef DESKTOP_H_INCLUDED
#define DESKTOP_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "racunar.h"

class Laptop : public Racunar{
    private:
        string ekran, napajanje, zvucnici, wifi;
        float bluetooth;
        bool touchBar, svetlecaTastatura, webKamera;
    public:
        string getEkran()const;
		void setEkran(string);
        string getNapajanje()const;
		void setNapajanje(string);
		string getZvucnici()const;
		void setZvucnici(string);
		string getWifi()const;
		void setWifi(string);
		float getBluetooth()const;
		void setBluetooth(float);
		bool getTouchBar()const;
		void setTouchBar(bool);
		bool getSvetlecaTastatura()const;
		void setSvetlecaTastatura(bool);
        bool getWebKamera()const;
		void setWebKamera(bool);
        virtual void ispisiBitno();
        virtual bool gamingApproved();
};

string Laptop::getEkran()const{
	return ekran;
}

void Laptop::setEkran(string a){
	ekran = a;
}

string Laptop::getNapajanje()const{
	return napajanje;
}

void Laptop::setNapajanje(string a){
	napajanje = a;
}

string Laptop::getZvucnici()const{
	return zvucnici;
}

void Laptop::setZvucnici(string a){
	zvucnici = a;
}

string Laptop::getWifi()const{
	return wifi;
}

void Laptop::setWifi(string a){
	wifi = a;
}

float Laptop::getBluetooth()const{
	return bluetooth;
}

void Laptop::setBluetooth(float a){
	bluetooth = a;
}

bool Laptop::getTouchBar()const{
	return touchBar;
}

void Laptop::setTouchBar(bool a){
	touchBar = a;
}

bool Laptop::getSvetlecaTastatura()const{
	return svetlecaTastatura;
}

void Laptop::setSvetlecaTastatura(bool a){
	svetlecaTastatura = a;
}

bool Laptop::getWebKamera()const{
	return webKamera;
}

void Laptop::setWebKamera(bool a){
	webKamera = a;
}

void Laptop::ispisiBitno(){
    cout << "\tEkran: " << ekran << endl;
    cout << "\tZvucnici: " << zvucnici<< endl;
    cout << "\tWeb kamera: " << webKamera<< endl;
}

bool Laptop::gamingApproved(){
    if(svetlecaTastatura && gpu.getKolicinaMemorije() >= 4 && ram.getKapacitet() >= 8 && hdd.getKapacitet() > 500){
        return true;
    }
    return false;
}
#endif // LAPTOP_H_INCLUDED
