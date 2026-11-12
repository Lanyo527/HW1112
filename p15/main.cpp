#include <iostream>

double func(double h) {
    return (h - 100) * 0.9;
}

int main() {
    double h;
    int low,upper,step;
    std::cout << "Enter low, upper, and step values: ";
    std::cin >> low >> upper >> step;
    for(low = 100; low <= 200; low += 10) {
        upper = low + 10;
        step = (upper - low) / 10;
        for(int i = 0; i <= 10; ++i) {
            double height = low + i * step;
            std::cout << "Height: " << height << ", Result: " << func(height) << std::endl;
        }
    }

    return 0;
}
