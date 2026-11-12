#include <iostream>
using namespace std;

int main() {
    cout << "Using break when x == 5:\n";
    for (int x = 1; x <= 10; x++) {
        if (x == 5) {
            cout << "Break at x == 5\n";
            break;
        }
        cout << x << " ";
    }
    cout << endl;

    cout << "Using continue when x == 5:\n";
    for (int x = 1; x <= 10; x++) {
        if (x == 5) {
            cout << "Skip x == 5\n";
            continue;
        }
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
