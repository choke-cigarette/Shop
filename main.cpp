#include <iostream>
#include "racunar.h"
using namespace std;

int main()
{
    FILE *f = nullptr;
    Artikal a(0, "ime", "imee", 0, true, true, f);
    Artikal b(a);
    cout << b.getSlika()->getFajl();
}
