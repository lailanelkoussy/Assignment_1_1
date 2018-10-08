#include <iostream>
#include "Bits.h"
#include "Bytes.h"

using namespace std;

int main() {

    Bytes set;
    set.add(0);
    set.printSet();
    set.add(5);
    set.printSet();
    set.add(255);
    set.printSet();
    set.add(17);
    set.printSet();
    set.remove(0);
    set.printSet();
    set.remove(255);
    set.printSet();


}