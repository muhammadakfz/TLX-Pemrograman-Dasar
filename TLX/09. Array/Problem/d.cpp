#include <iostream>
using namespace std;

int main() {
    int m, n, a[101][101];
    cin >> m >> n;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = m-1; j >= 0; j--) {
            cout << a[j][i] << " ";
        } cout << "\n";
    }

    cin.get();
    return 0;
}
