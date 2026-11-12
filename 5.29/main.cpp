#include <iostream>
using namespace std;

int gcd(int a, int b) {
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return a / gcd(a, b) * b;
}

int main() {
    int a, b;
    while (true) {
        cout << "Enter two integers (or type 'exit' to quit): ";
        if (!(cin >> a >> b)) {
            break; // Exit the loop if input is not valid
        }
        cout << "LCM of " << a << " and " << b << " is: " << lcm(a, b) << endl;
    }
    return 0;
}