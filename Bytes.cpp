//
// Created by Laila Nasser ElKoussy 900160812 on 10/7/18.
//

#include "Bytes.h"

using namespace std;

Bytes::Bytes(int &max, int x) : maxsize(max), size(x) {
    int temp;
    bool ok = true;

    for (int i = 0; i < size; i++) {
        do {
            cout << "Enter number to be added" << endl;
            cin >> temp;
            if (temp > 255) {
                cout << "Number entered is out of range" << endl;
                ok = false;
            } else ok = true;
        } while (ok);
        add(temp);
    }

}

Bytes::~Bytes(){

}

void Bytes::add(int &a) {

}

void Bytes::remove(int &) {

}

int Bytes::find(int &) {

}