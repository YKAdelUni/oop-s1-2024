#include <iostream>
#include <map>

double weighted_average(int array[], int n){
    if (n < 1){
        return 0;
    }

    std::map<int, int> counts;
    for(int i = 0; i < n; i++){
        counts[array[i]]++;
    }

    double sum = 0;
    for(auto& pair : counts){
        sum += pair.first * pair.second;
    }
    return sum / n;
}