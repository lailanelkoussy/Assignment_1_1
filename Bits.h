//
// Created by Laila Nasser ElKoussy 900160812 on 10/7/18.
//

#ifndef ASSIGNMENT_1_1_BITS_H
#define ASSIGNMENT_1_1_BITS_H

#include <iostream>
class Bits {

public:
    Bits();
    ~Bits();
    Bits(int&);
    int operator[](int a) const;  // bits are numbered from 0 to size-1 only allows reading, no writing
    int getSize() const {return size;}


private:
    unsigned char * bits; //chars take up smallest size (an octet)
    int size, n; //n size of array


    friend class Bytes;
};
std::ostream& operator<<(std::ostream& o, const Bits&a);


#endif //ASSIGNMENT_1_1_BITS_H
