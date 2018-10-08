//
// Created by Laila Nasser ElKoussy 900160812 on 10/7/18.
//

#include "Bytes.h"

using namespace std;

Bytes::Bytes() {
//    int temp;
//    bool ok = true;
//
//    for (int i = 0; i < size; i++) {
//        do {
//            cout << "Enter number to be added" << endl;
//            cin >> temp;
//            if (temp > 255) {
//                cout << "Number entered is out of range" << endl;
//                ok = false;
//            } else ok = true;
//        } while (ok);
//        add(temp);
//    }

    bytes = new Bits[maxsize]; //elements are created with 8 bits and initialized to zero
    size = 0;

}

Bytes::~Bytes() {

    //delete bytes;

}

void Bytes::add(int a) {
    int bit = 1;
    unsigned int temp = bytes[a / 8].getBits(); // has binary value of
    if (find(a))
        return;

    for (int i = 0; i < a % 8; i++)
        bit *= 10;

    temp += bit;

    bytes[a/8].setBits(temp);

    size++;

}

void Bytes::remove(int a) {

    int bit = 1;
    unsigned int temp = bytes[a / 8].getBits(); // has binary value of

    if (!find(a))
        return;

    for (int i = 0; i < a % 8; i++)
        bit *= 10;

    temp -= bit;

    bytes[a/8].setBits(temp);

    size--;

}

bool Bytes::find(int a) {

    if ((bytes[a/8].operator[](a%8)))
        return true;
    else return false;

}

void Bytes::printSet() {

    cout<<"{ ";

    for (int i=0; i<maxsize*8; i++)
        if (find(i))
            cout<<i<<" ";

    cout<<"}";

}