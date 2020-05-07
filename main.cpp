#include <iostream>
#include "admin.h"
#include "kupac.h"
#include "zicne.h"
#include "bezicne.h"
#include "telefon.h"
#include "televizor.h"
#include "radnja.h"
#include "laptop.h"
#include "desktop.h"
#include "list.hpp"

using namespace std;

int main()
{

    Artikal *a;
    Laptop l;
    l.ispisiBitno();
    l.setSvetlecaTastatura(true);
    l.getRAM()->setKapacitet(8);
    l.getGraficka()->setKolicinaMemorije(4);
    l.getHDD()->setKapacitet(2000);
    l.getSSD()->setKapacitet(200);
    cout << l.gamingApproved() << endl;
    Desktop d;
    d.ispisiBitno();
    d.setSvetla("zelenoo");
    d.getRAM()->setKapacitet(8);
    d.getGraficka()->setKolicinaMemorije(4);
    d.getHDD()->setKapacitet(2000);
    d.getSSD()->setKapacitet(200);
    BezicneSlusalice b;
    b.ispisiBitno();
    cout << d.gamingApproved();
    Porudzbina po;
    po.setAdresa("dusko");
    cout << po.getAdresa();
    List<int> li;
    Kupac ku;
    cout << l;
    cout << d;
    Televizor te;
    cout << te;


    List<Laptop> artikli;
    artikli.add(1, l);
    artikli.add(1, l);
    cout << artikli;
}
