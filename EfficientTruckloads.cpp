#include "EfficientTruckloads.h"
#include <iostream>
#include <math.h>
EfficientTruckloads::EfficientTruckloads() {
    sum=0;
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if(numCrates<=loadSize)
		return 1;
	if(numCrates%2) {
        sum = numTrucks(numCrates/2 + 1, loadSize)+numTrucks(numCrates/2, loadSize);
        return sum;
    }
	sum = 2*numTrucks(numCrates/2, loadSize);
    return sum;
}