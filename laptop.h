#ifndef DESKTOP_H_INCLUDED
#define DESKTOP_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "racunar.h"

class Laptop : public Racunar{
    private:
        string ekran, napajanje, monitor, zvucnici, wifi;
        float bluetooth;
        bool touchBar, svetlecaTastatura, webKamera;
    public:
        virtual void ispisiBitno();
        virtual bool gamingApproved();
};

#endif // LAPTOP_H_INCLUDED
