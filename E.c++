#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // قراءة عدد الأرقام

    long long x, mx = -1;  // نستخدم long long علشان الأرقام ممكن توصل لـ 10^9
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x > mx) {
            mx = x;  // تحديث أكبر رقم
        }
    }

    cout << mx << endl;  // طباعة النتيجة
    return 0;
}
