//
// Created by Laila Nasser ElKoussy 900160812 on 10/7/18.
//

#ifndef ASSIGNMENT_1_1_BYTES_H
#define ASSIGNMENT_1_1_BYTES_H

#include "Bits.h"

class Bytes {
public:
    Bytes();
    ~Bytes();
    void add(int); //accepts a decimal number
    void remove(int);
    bool find (int);
    void printSet();
    int getSize(){ return size; }

private:
    Bits* bytes;
    int size;
    const int maxsize = 32;

    friend class Bits;

};


#endif //ASSIGNMENT_1_1_BYTES_H
