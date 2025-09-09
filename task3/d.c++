#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x) {   // يقرأ لحد ما يلاقي الباسورد الصحيح أو ينتهي الإدخال
        if (x == 1999) {
            cout << "Correct" << endl;
            break;       // يوقف البرنامج
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
