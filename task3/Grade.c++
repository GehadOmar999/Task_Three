#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter marks (enter -1 to stop): " << endl;

    while (true) {
        cin >> mark;

        if (mark == -1) {   
            break;
        }

        if (mark < 50) {
            cout << "F" << endl;
        } 
        else if (mark >= 50 && mark < 60) {
            cout << "C" << endl;
        } 
        else if (mark >= 60 && mark < 70) {
            cout << "B" << endl;
        } 
        else if (mark >= 70 && mark <= 100) {
            cout << "A" << endl;
        } 
        else {
            cout << "failde" << endl;
        }
    }

    return 0;
}
