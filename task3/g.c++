#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int T, N;
    cin >> T; // عدد حالات الاختبار
    while (T--) {
        cin >> N;
        cout << factorial(N) << endl;
    }
    return 0;
}
