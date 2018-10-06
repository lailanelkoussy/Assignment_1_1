//
// Created by Laila Nasser ElKoussy 900160812 on 10/5/18.
//

#ifndef ASSIGNMENT_1_1_BITS_H
#define ASSIGNMENT_1_1_BITS_H

#include <iostream>
class Bits {

public:
    Bits();
    void print();


private:
    unsigned char * bits; //chars take up smallest size (an octet)
    int size, n; //n size of array



};


#endif //ASSIGNMENT_1_1_BITS_H
