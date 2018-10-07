//
// Created by Laila Nasser ElKoussy 900160812 on 10/7/18.
//

#ifndef ASSIGNMENT_1_1_BYTES_H
#define ASSIGNMENT_1_1_BYTES_H

#include "Bits.h"

class Bytes {
public:
    Bytes(int &max, int x=0);
    ~Bytes();
    void add(int&);
    void remove(int &);
    int find (int&); //returns index of found item, if not found returns -1

private:
    Bits* bytes;
    int size, maxsize;

    void order();

};


#endif //ASSIGNMENT_1_1_BYTES_H
