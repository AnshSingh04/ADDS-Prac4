#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
int main() {
    Reverse rev;
    EfficientTruckloads trk2;
    int value; std::string letters;int numCrates;int loadSize; 
    std::cout<<"Input values:";
    std::cin>>value;
    std::cin>>letters;
    std::cin>>numCrates;
    std::cin>>loadSize;
    int r = rev.reverseDigit(value);
    std::string r2 = rev.reverseString(letters);
    int r3 = trk2.numTrucks(numCrates,loadSize, 0);
    std::cout<<"Output:"<<r<<" "<<r2<<" "<<r3<<"\n";
}