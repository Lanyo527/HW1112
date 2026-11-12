#include <iostream>
using namespace std;

int main() {
    double scores[10];
    double sum = 0.0;
    double average;

    cout << "Enter 10 scores:\n";

    for (int i = 0; i < 10; i++) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    average = sum / 10;

    cout << "\nAverage score: " << average << endl;

    return 0;
}
