#include "arraylib.h"
#include <algorithm>
#include <vector>

int arr_sum(const int* arr, std::size_t n) {
    int sum = 0;

    for (std::size_t i = 0; i < n; ++i) {
        sum += arr[i];
    }

    return sum;
}

int arr_max(const int* arr, std::size_t n) {
    int maximum = arr[0];

    for (std::size_t i = 1; i < n; ++i) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    return maximum;
}

int arr_min(const int* arr, std::size_t n) {
    int minimum = arr[0];

    for (std::size_t i = 1; i < n; ++i) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    return minimum;
}

double arr_average(const int* arr, std::size_t n) {
    return static_cast<double>(arr_sum(arr, n)) / n;
}

int arr_count_positive(const int* arr, std::size_t n) {
    int count = 0;

    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            ++count;
        }
    }

    return count;
}

int arr_count_negative(const int* arr, std::size_t n) {
    int count = 0;

    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            ++count;
        }
    }

    return count;
}

int arr_count_zero(const int* arr, std::size_t n) {
    int count = 0;

    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            ++count;
        }
    }

    return count;
}

int arr_product(const int* arr, std::size_t n) {
    int product = 1;

    for (std::size_t i = 0; i < n; ++i) {
        product *= arr[i];
    }

    return product;
}

double arr_median(const int* arr, std::size_t n) {
    std::vector<int> copy(arr, arr + n);

    std::sort(copy.begin(), copy.end());

    if (n % 2 == 1) {
        return copy[n / 2];
    }

    return (static_cast<double>(copy[n / 2 - 1]) +
            static_cast<double>(copy[n / 2])) / 2.0;
}