//
// Created by Laila Nasser ElKoussy 900160812 on 10/7/18.
//

#ifndef ASSIGNMENT_1_1_BITS_H
#define ASSIGNMENT_1_1_BITS_H

#include <iostream>

class Bits {

public:
    Bits(); // sets bit values to zero and 8 bits
    Bits(int x);//sets size with x and bit values to zero
    Bits(int x, int y); //x size, y value
    ~Bits();

//    Bits(int);
    int operator[](int a) const;  // bits are numbered from 0 to size-1 only allows reading, no writing
    Bits& operator=(unsigned int a); // does not change size of array, accepts binary
    unsigned int getBits();
    int getSize() const { return size; }


private:
    unsigned char *bits; //chars take up smallest size (an octet)
    int size, n; //n size of array, size number of bits

    void setBits(unsigned int a);

    friend class Bytes;
};

std::ostream &operator<<(std::ostream &o, const Bits &a);;


#endif //ASSIGNMENT_1_1_BITS_H
