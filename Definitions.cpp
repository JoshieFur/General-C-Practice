//
//  Definitions.cpp
//  Workkkkk
//
//  Created by Joshie on 10/17/22.
//

#include "Header.h"
#include <iostream>
#include <cmath>

using namespace functions;
using namespace std;

void basic::output_functions() {
    cout << "1 = +" << endl << "2 = -" << endl << "3 = *" << endl << "4 = /" << endl;
}

void basic::math(double x, double y, double z, double &a) {
    if(x == 1) {
       a = y + z;
    }
    if(x == 2) {
       a = y - z;
    }
    if(x == 3) {
        a = y * z;
    }
    if(x == 4) {
        a = y / z;
    }
    }

void basic::display(double x, double y, double z, double* c) {
    cout << x << " ";
        if(y == 1) {
       cout << "+ ";
        }
        if(y == 2) {
       cout << "- ";
        }
        if(y == 3) {
        cout << "* ";
        }
        if(y == 4) {
        cout << "/ ";
        }
    if(c != NULL) {
        cout << z << endl;
    } else {
        cout << endl;
    }
}

void basic::resolve(double &x, int &y, double &z, double* &s){
    cout << x << endl;
    y = 0;
    z = x;
    x = 0;
    s = NULL;
}
