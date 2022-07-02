#include <iostream>
using namespace std;

int main() {
    int sum, a, b, c, d;
    cin >> a >> b >> c >> d;

    sum = d;
    while(c--) {
        sum = abs(a*sum + b);
    }

    cout << sum;

    cin.get();
    return 0;
}
