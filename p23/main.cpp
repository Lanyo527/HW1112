#include <iostream>
using namespace std;

int main() {
    cout << "C++ practice with &&, ||, and ==\n\n";

    int score;
    cout << "Enter your score (0~100): ";
    cin >> score;

    if (score >= 80 && score <= 100) {
        cout << "Excellent! You passed.\n";
    } else if (score >= 60 && score < 80) {
        cout << "Good! You passed.\n";
    } else {
        cout << "Sorry, you failed.\n";
    }

    cout << "\nChoose a letter (A or B): ";
    char choice;
    cin >> choice;

    if (choice == 'A' || choice == 'a') {
        cout << "You selected A.\n";
    } else if (choice == 'B' || choice == 'b') {
        cout << "You selected B.\n";
    } else {
        cout << "Invalid choice.\n";
    }

    cout << "\nCheck equality example:\n";
    int x = 7;
    if (x == 7) {
        cout << "x is equal to 7.\n";
    }

    cout << "\nFinished!\n";
    return 0;
}
