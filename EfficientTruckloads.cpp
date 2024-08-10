#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numItems, int maxLoad) {
    if (numItems <= maxLoad) {
        return 1;
    }

    auto key = std::make_pair(numItems, maxLoad);
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    int left = numItems / 2;
    int right = numItems - left;
    int result = numTrucks(left, maxLoad) + numTrucks(right, maxLoad);

    memo[key] = result;
    return result;
}
