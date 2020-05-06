#ifndef DESKTOP_H_INCLUDED
#define DESKTOP_H_INCLUDED
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "racunar.h"

class Desktop : public Racunar{
    private:
        string kuciste, napajanje, svetla;
    public:
        virtual void ispisiBitno();
        virtual bool gamingApproved();
};


#endif // DESKTOP_H_INCLUDED
