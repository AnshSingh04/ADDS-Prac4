#include "EfficientTruckloads.h"
#include <iostream>
#include <math.h>
EfficientTruckloads::EfficientTruckloads() {
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if(numCrates<=0 || loadSize<=0)
      return 0;
		return -1;
    if(numCrates<=loadSize)
		return 1;
	if(numCrates%2) {
        sum = numTrucks(numCrates/2 + 1, loadSize)+numTrucks(numCrates/2, loadSize);
        return sum;
    }
	sum = 2*numTrucks(numCrates/2, loadSize);
    return sum;
}