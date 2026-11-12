#include <iostream>

int main() {
    int grade;
    int a = 0, b = 0, c = 0, d = 0, f = 0;

    std::cout << "enter letter grades (Ctrl+Z/Ctrl+D to end):\n";

    while ((grade = std::cin.get()) != EOF) {
        switch (grade) {
            case 'A':
            case 'a':
                ++a;
                break;
            case 'B':
            case 'b':
                ++b;
                break;
            case 'C':
            case 'c':
                ++c;
                break;
            case 'D':
            case 'd':
                ++d;
                break;
            case 'F':
            case 'f':
                ++f;
                break;
            default:
                break;
        }
    }

    std::cout << "A: " << a << '\n';
    std::cout << "B: " << b << '\n';
    std::cout << "C: " << c << '\n';
    std::cout << "D: " << d << '\n';
    std::cout << "F: " << f << '\n';

    return 0;
}