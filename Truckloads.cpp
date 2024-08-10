#include "Truckloads.h"

int Truckloads::numTrucks(int numItems, int maxLoad) {
    if (numItems <= maxLoad) {
        return 1;
    } else {
        int left = numItems / 2;
        int right = numItems - left;
        return numTrucks(left, maxLoad) + numTrucks(right, maxLoad);
    }
}
