#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <unordered_map>
#include <utility> 


class EfficientTruckloads {
private:
    std::unordered_map<std::pair<int, int>, int> memo;

public:
    int numTrucks(int numItems, int maxLoad);
};

#endif 
