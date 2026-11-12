#include <iostream>
using namespace std;

int main() {
    char choice;

    cout << "請輸入一個字母 (a, b, z): ";
    cin >> choice;

    switch (choice) {
        case 'a':
            cout << "執行 a 的動作" << endl;
            break;
        case 'b':
            cout << "執行 b 的動作" << endl;
            break;
        case 'z':
            cout << "執行 z 的動作" << endl;
            break;
        default:
            cout << "執行預設動作" << endl;
            break;
    }

    return 0;
}