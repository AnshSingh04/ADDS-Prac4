#include "EfficientTruckloads.h"
#include <iostream>
#include <math.h>
EfficientTruckloads::EfficientTruckloads() {
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize, int sum) {
    if(numCrates<=loadSize)
		return 1;
	if(numCrates%2) {
        sum += numTrucks(numCrates/2 + 1, loadSize,sum)+numTrucks(numCrates/2, loadSize,sum);
        return sum;
    }
	sum += 2*numTrucks(numCrates/2, loadSize,0);
    return sum;
}