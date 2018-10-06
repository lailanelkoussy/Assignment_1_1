//
// Created by Laila Nasser ElKoussy 900160812 on 10/5/18.
//

#include "Bits.h"

using namespace std;

Bits::Bits() {

    short power = 1, sum = 0;
    int temp;
    bool ok = true, valid = true;
    do {
        cout << "enter number of bits to be entered: ";
        cin >> size;

        if (size > 256) {
            cout << "too big of a size, please reconsider and enter another value"<<endl;
            ok = false;
        } else ok = true;

    } while (!ok);

    if (!size % 8)
        n = size / 8;

    else {
        n = size / 8 + 1;
    }

    bits = new unsigned char[n];


    cout << "enter each bit one by one, starting from least significant bit"<<endl;

    for (int i = 0; i < size; i++) {
        if (!(i % 8)&&(i!=0)) { //if we need to move on to next array slot
            power = 1;
            bits[(i - 1)/ 8] = (unsigned char)sum;
            sum = 0;
            cout<<int(bits[1]);
            cout<<(unsigned int) bits[1];
        }
        do {
            cin >> temp;
            if ((temp != 0) && (temp != 1)) {
                cout << "Invalid input, please enter a valid binary bit"<<endl;
                valid = false;
            } else valid = true;
        } while (!valid);

        sum += temp * power;
        power *= 2;

        if (i == size - 1) //if the size is not divisible by 8
            bits[i % 8] = char(sum);
    }


}

void Bits::print() {

    for (int i = 0; i < n; i++)
        cout << bits[i];
}

