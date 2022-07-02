#include <iostream>
#include <cmath>
using namespace std;

int function(int a, int b, int c, int d) {
    int ans = abs(a*d+b);
    c -= 1;
    if (c > 0) {
        return function(a, b, c, ans);
    } else {
        return ans;
    }
}

int main() {
    int a, b, c, d, ans;
    cin >> a >> b >> c >> d;
    ans = function(a, b, c, d);
    cout << ans;
    cin.get();
    return 0;
}
