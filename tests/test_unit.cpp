#include "arraylib.h"
#include <cassert>
#include <cmath>
#include <iostream>

bool close(double a, double b) {
    return std::fabs(a - b) < 0.000001;
}

int main() {
    int a[] = {-5, 0, 3, 3, 8, -2};
    std::size_t n = 6;

    assert(arr_sum(a, n) == 7);
    assert(arr_max(a, n) == 8);
    assert(arr_min(a, n) == -5);
    assert(arr_count_positive(a, n) == 3);
    assert(arr_count_negative(a, n) == 2);
    assert(arr_count_zero(a, n) == 1);
    assert(arr_product(a, n) == 0);
    assert(close(arr_average(a, n), 7.0 / 6.0));

    int b[] = {7, 1, 9, 3};
    assert(close(arr_median(b, 4), 5.0));

    int c[] = {5, 1, 3};
    assert(close(arr_median(c, 3), 3.0));

    int original[] = {7, 1, 9, 3};
    arr_median(original, 4);

    assert(original[0] == 7);
    assert(original[1] == 1);
    assert(original[2] == 9);
    assert(original[3] == 3);

    int d[] = {1, 2, 3, 4};
    assert(arr_product(d, 4) == 24);

    std::cout << "All unit tests passed!" << std::endl;

    return 0;
}