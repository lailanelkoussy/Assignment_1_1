//
// Created by Laila Nasser ElKoussy 900160812 on 10/5/18.
//

#ifndef ASSIGNMENT_1_1_BITS_H
#define ASSIGNMENT_1_1_BITS_H

#include <iostream>
class Bits {

public:
    Bits();
    ~Bits();
    int operator[](int a); // bits are numbered from 0 to size-1


private:
    unsigned char * bits; //chars take up smallest size (an octet)
    int size, n; //n size of array

};

class Bytes {


};


#endif //ASSIGNMENT_1_1_BITS_H
