#include <iostream>

double computeSeries(int n) {
    double sum = 0;
    for (int i = 2; i <= n; i++) {
        sum += 1.0 / (i * (i + 2.0));
    }
    return sum;
}

int main() {
    int n = 2;
    double result = computeSeries(n);
    std::cout << "f(" << n << ") = " << result << std::endl;
    return 0;
}


