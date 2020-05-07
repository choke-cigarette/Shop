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
    FILE *f = fopen("text.txt", "w");
    cout << f << endl;
    Desktop desktop;
    desktop.getSlika()->setFajl(f);
    desktop.getSlika()->dodajSliku(f);
    cout << desktop.getSlika()->getFajl() << endl;
    cout << desktop.getSlika()->getSledeca()->getFajl() << endl;
    desktop.getSlika()->izbrisiSliku();
    cout << desktop.getSlika()->getSledeca() << endl;
    Slika s(desktop.getSlika());
    cout << s.getFajl() << endl;
    Televizor televizor0;
    Televizor televizor(LED, 1, 2, 3, 3.2, "a", "b", "c", "d", "e", "f", 12.1, "g", "h", 9, true, false, f);
    Televizor televizor1(televizor);
    cout << televizor;
    cout << endl;
    cout << televizor0;
    cout << endl;
    cout << televizor1;
    cout << endl;
    ZicneSlusalice zicne;
    ZicneSlusalice zicne0("a", 2, STEREO, "b", "c", 2, 3, 6, true, 7.4, "e", "f", 23, true, false, f);
    ZicneSlusalice zicne1(zicne0);
    zicne.ispisiBitno();
    cout << endl;
    zicne0.ispisiBitno();
    cout << endl;
    zicne1.ispisiBitno();
    cout << endl;
    BezicneSlusalice bezicne;
    BezicneSlusalice bezicne0("a", 0, 43, 2.34, STEREO, "b", "c", 2, 3, 6, true, 7.4, "e", "f", 23, true, false, f);
    BezicneSlusalice bezicne1(bezicne0);
    bezicne.ispisiBitno();
    cout << endl;
    bezicne0.ispisiBitno();
    cout << endl;
    bezicne1.ispisiBitno();
    cout << endl;
    Telefon telefon;
    Telefon telefon0(_LCD, NSIM, 21, 22, 32, 52, 10/3, "p", "e", "p", "a", "p", "r", "a", "s", "e", true, 0.6, "pis", "bro", 1, false, true, f);
    Telefon telefon1(telefon0);
    telefon.ispisiBitno();
    cout << endl;
    telefon0.ispisiBitno();
    cout << endl;
    telefon1.ispisiBitno();
    cout << endl;
    Radnja radnja;
    Radnja radnja0("cha", "ro", "bni", "sta", "pi", "cccc");
    Radnja radnja1(radnja0);
    cout << radnja.getAdresa() << endl;
    cout << radnja0.getAdresa() << endl;
    cout << radnja0.getAdresa() << endl;
    Admin admin;
    Admin admin0(radnja0, f, f);
    Admin admin1(admin0);
    cout << admin0.getRadnoMesto()->getAdresa() << endl;
    Graficka graficka;
    Procesor procesor;
    HDD hdd;
    SSD ssd;
    Maticna maticna;
    RAM ram;
    graficka.ispisiBitno();
    cout << endl;
    procesor.ispisiBitno();
    cout << endl;
    hdd.ispisiBitno();
    cout << endl;
    ssd.ispisiBitno();
    cout << endl;
    maticna.ispisiBitno();
    cout << endl;
    ram.ispisiBitno();
    cout << endl;
    desktop.ispisiBitno();
    cout << endl;
    Desktop desktop0("a", "b", "c", ram, hdd, ssd, maticna, graficka, procesor, "puf", true, 0.1, "ss", "padumcs", 441, false, true, f);
    Desktop desktop1(desktop0);
    desktop0.ispisiBitno();
    cout << endl;
    desktop1.ispisiBitno();
    cout << endl;
    Laptop laptop;
    Laptop laptop0("a", "b", "c", "d", "e", 2.12, true, false, true, ram, hdd, ssd, maticna, graficka, procesor, "/a/", false, -1.2, "ee", "bura", 12, true, true, f);
    Laptop laptop1(laptop0);
    laptop.ispisiBitno();
    cout << endl;
    laptop0.ispisiBitno();
    cout << endl;
    laptop1.ispisiBitno();
    cout << endl;
    Kupac kupac;
    Kupac kupac0("kupa se", 1, "da", "ne", "u", "aquapark");
    Kupac kupac1(kupac0);
    cout << kupac.getEmail() << endl;
    cout << kupac0.getEmail() << endl;
    cout << kupac1.getEmail() << endl;
    Porudzbina porudzbina;
    Porudzbina porudzbina0(laptop0, 2, "si", "senor");
    Porudzbina porudzbina1(porudzbina0);
    cout << porudzbina.getAdresa() << endl;
    cout << porudzbina0.getAdresa() << endl;
    cout << porudzbina1.getAdresa() << endl;
}
