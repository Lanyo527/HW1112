#include <iostream>

int main() {
    int month;
    std::cout << "Enter month (1-12): ";

    if (!(std::cin >> month) || month < 1 || month > 12) {
        std::cout << "Invalid month\n";
        return 1;
    }

    if (month == 12 || month <= 2) {
        std::cout << "Winter\n";
    } else if (month <= 5) {
        std::cout << "Spring\n";
    } else if (month <= 8) {
        std::cout << "Summer\n";
    } else {
        std::cout << "Autumn\n";
    }

    return 0;
}