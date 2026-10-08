#include "arraylib.h"
#include <cassert>
#include <cmath>
#include <iostream>

int main() {
    int data[] = {7, 3, 9, 1, 5, 8, 2, 6, 4};
    std::size_t n = 9;

    assert(arr_sum(data, n) == 45);
    assert(arr_max(data, n) == 9);
    assert(arr_min(data, n) == 1);

    double average = arr_average(data, n);

    assert(average >= arr_min(data, n));
    assert(average <= arr_max(data, n));

    int sorted[] = {1, 2, 3, 4, 5, 6, 7};

    assert(std::fabs(arr_median(sorted, 7) - 4.0) < 0.000001);

    std::cout << "All integration tests passed!" << std::endl;

    return 0;
}