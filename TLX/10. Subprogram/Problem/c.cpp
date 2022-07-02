#include <iostream>
using namespace std;

int balik(int x) {
    int tmp = x;
    int res = 0;

    while(tmp > 0) {
        res = (res*10) + (tmp%10);
        tmp /= 10;
    }

    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    a = balik(a); b = balik(b);
    cout << balik(a+b) << endl;
    cin.get();
    return 0;
}
