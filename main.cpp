#include <iostream>
#include "racunar.h"
using namespace std;

int main()
{
    FILE *file = nullptr;
    Racunar r(HDD, 0, 0, "a", "a", "a", "a", "a", true, 0, "a", "a", 0, true, true, file);
    Racunar b(r);
    cout << b.getSlika()->getFajl();
}
