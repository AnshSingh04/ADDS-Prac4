#include "Reverse.h"
#include <iostream>
#include <math.h>
Reverse::Reverse() {
}

int Reverse::reverseDigit(int value) {
    if(value < 0)
        return -1;
    int digits = (int)log10(value);
    if(value == 0)
        return 0;
    return ((value%10 * pow(10, digits)) + reverseDigit(value/10));
}

std::string Reverse::reverseString(std::string letters) {
    std::string str;
    if(letters.length() == 1)
        return str+letters.substr(0,1);
    else {
        str = reverseString(letters.substr(1, letters.length()));
        str = str + letters.substr(0,1);
    }
    return str;
}