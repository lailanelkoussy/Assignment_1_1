//
// Created by Laila Nasser ElKoussy 900160812 on 10/7/18.
//

#include "Bits.h"


//
// Created by Laila Nasser ElKoussy 900160812 on 10/5/18.
//

#include "Bits.h"

using namespace std;

Bits::Bits() {
    size = 8;
    n = 1;
    bits = new unsigned char[n];
    for (int i =0; i<n; i++)
        bits[i]= (unsigned char)(0);
}

Bits::Bits(int x, int y) : size(x) {

    short power = 1, sum = 0;
    int temp1;
    unsigned char tempchar;
    bool ok = true;

    do {
//        cout << "enter number of bits to be entered: ";
//        cin >> size;

        if (size > 256) {
            cout << "too big of a size, please reconsider and enter another value" << endl;
            ok = false;
            cin >> size;
        } else ok = true;

    } while (!ok);

    if (!(size % 8))
        n = size / 8;

    else
        n = size / 8 + 1;


    bits = new unsigned char[n];


    for (int i = 0; i < size; i++) {
        if (!(i % 8) && (i != 0)) { //if we need to move on to next array slot
            power = 1;
            bits[(i - 1) / 8] = (unsigned char) (sum);
            sum = 0;
        }
        temp1 = y % 10;
        y /= 10;

        sum += temp1 * power;
        power *= 2;

        if (i == size - 1) {//if the size is not divisible by 8
            tempchar = (unsigned char) (sum);
            bits[n - 1] = tempchar;
        }


    }

//    cout << "enter each bit one by one, starting from least significant bit" << endl;
//
//    for (int i = 0; i < size; i++) {
//        if (!(i % 8) && (i != 0)) { //if we need to move on to next array slot
//            power = 1;
//            bits[(i - 1) / 8] = (unsigned char) (sum);
//            sum = 0;
//        }
//        do {
//            cin >> temp;
//            if ((temp != 0) && (temp != 1)) {
//                cout << "Invalid input, please enter a valid binary bit" << endl;
//                valid = false;
//            } else valid = true;
//        } while (!valid);
//
//        sum += temp * power;
//        power *= 2;
//
//        if (i == size - 1) //if the size is not divisible by 8
//            bits[n - 1] = (unsigned char) (sum);
}

Bits::Bits(int x) : size(x) {
    bool ok = true;

    do {
//        cout << "enter number of bits to be entered: ";
//        cin >> size;

        if (size > 256) {
            cout << "too big of a size, please reconsider and enter another value" << endl;
            ok = false;
            cin >> size;
        } else ok = true;

    } while (!ok);

    if (!(size % 8))
        n = size / 8;

    else
        n = size / 8 + 1;

    bits = new unsigned char[n];

    for (int i = 0; i < n; i++)
        bits[i] = 0;
}


Bits::~Bits() {
    delete bits;
    bits = nullptr;
    cout<<"Bye!"<<endl;
}

//Bits::Bits(int temp) {
//
//    bool ok = true, valid = true;
//    int t1, t2=temp, power=1, sum=0, temp1, temp2;
//    unsigned char tempchar;
//    n = 0;
//    size = 0;
////    do {
////        if (temp < 0) {
////            cout << "negative number entered";
////            ok = false;
////        } else ok = true;
////
////    } while (!ok);
////
////    do {
////        if (!(temp / 256)) {
////            t1 = temp % 256;
////            while (t1) {
////                size++;
////                t1 /= 2;
////            }
////        }
////
////
////        temp /= 256;//how many 8 bits are in there
////        n++;
////        if (temp)
////            size += 8;
////
////    } while (temp);
//
//    do { //extracting size + making sure it's a binary number
//        size=0;
//        valid = true;
//        while (temp && valid) {
//
//            size++;
//            temp2=temp%10;
//            temp/=10;
//            if ((temp%10!=1) && (temp%10!=0) && (temp2%10!=1) && (temp2%10!=0)){
//                cout<<"Invalid input, not a binary number, please re-enter: ";
//                cin>>temp;
//                valid = false;
//            }
//            else valid = true;
//        }
//    } while (!valid);
//
//
//    if (!size % 8)
//        n = size / 8;
//
//    else {
//        n = size / 8 + 1;
//    }
//
//    bits = new unsigned char[n];
//
//    for (int i = 0; i < size; i++) {
//        if (!(i % 8) && (i != 0)) { //if we need to move on to next array slot
//            power = 1;
//            bits[(i - 1) / 8] = (unsigned char) (sum);
//            sum = 0;
//        }
//        temp1 = t2 % 10;
//        t2 /= 10;
//
//        sum += temp1 * power;
//        power *= 2;
//
//        if (i == size - 1) {//if the size is not divisible by 8
//            tempchar= (unsigned char) (sum);
//            bits[n - 1] = tempchar;
//    }
//
//
//    }
//
//
//}

int Bits::operator[](int a) const {
    unsigned int temp = 0;
    unsigned char bit=(unsigned char)(0);

    if (a > size) {
        cout << "error, out of range";
        return -1;
    }

    bit = bits[a / 8];
    temp = (int) bit; // the value of the encoded 8 bits

    for (int i = 0; i < (a % 8); i++)
        temp /= 2;

    return (temp % 2);
}

Bits &Bits::operator=(unsigned int a) {
    int power = 1, sum = 0, temp1;
    unsigned char tempchar;

    for (int i = 0; i < size; i++) {
        if (!(i % 8) && (i != 0)) { //if we need to move on to next array slot
            power = 1;
            bits[(i - 1) / 8] = (unsigned char) (sum);
            sum = 0;
        }
        temp1 = a % 10;
        a /= 10;

        sum += temp1 * power;
        power *= 2;

        if (i == (size - 1)) {//if the size is not divisible by 8
            tempchar = (unsigned char) (sum);
            bits[n - 1] = tempchar;
        }


    }
    return *this;
}

unsigned int Bits::getBits() {

    unsigned int temp = 0;
    int power = 1;

    for (int i = 0; i < size; i++) {
        temp += power * (this->operator[](i));
        power *= 10;
    }

    return temp;

} //returns bits in binary

void Bits::setBits(unsigned int a) {
    int power = 1, sum = 0, temp1;
    unsigned char tempchar;

    for (int i = 0; i < size; i++) {
        if (!(i % 8) && (i != 0)) { //if we need to move on to next array slot
            power = 1;
            bits[(i - 1) / 8] = (unsigned char) (sum);
            sum = 0;
        }
        temp1 = a % 10;
        a /= 10;

        sum += temp1 * power;
        power *= 2;

        if (i == (size - 1)) {//if the size is not divisible by 8
            tempchar = (unsigned char) (sum);
            bits[n - 1] = tempchar;
        }
    }
} //sets value of bits


std::ostream &operator<<(std::ostream &o, const Bits &a) {

    for (int i = (a.getSize() - 1); i >= 0; i--)
        o << a[i];
    return o;

}