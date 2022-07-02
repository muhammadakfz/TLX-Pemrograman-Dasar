#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n <= 1) {
        return n;
    } else if (n % 2 == 0) {
        return (n/2) * faktorial(n - 1);
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int n, m;
    cin >> n;
    m = faktorial(n);
    cout << m;
    cin.get();
    return 0;
}
